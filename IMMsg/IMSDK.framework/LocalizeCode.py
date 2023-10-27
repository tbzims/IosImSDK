#!/usr/bin/env python3
# -*- coding:utf-8 -*-

import csv
import os

def openCsv(path):

    with open(path, encoding="utf-8-sig") as f:
        for row in csv.DictReader(f, skipinitialspace=True):
            print("ssssss->")
            print(row)
            sourceLanguagekey = row["T-KEY"]
            sourceLanguagekey = ''.join(sourceLanguagekey.split())
            if len(sourceLanguagekey) == 0:
                continue
            del row["T-KEY"]
            
            markText = row["RMKS"]
            del row["RMKS"]

            for lng, value in row.items():
                value = value.replace('"','')
                value = value.replace('\n','')
                
                if sourceLanguagekey in PermissionKeyDic.keys():
                    permissionOldDic = InfoPlistDic.get(lng)
                    if not bool(permissionOldDic):
                        permissionOldDic = {"CFBundleDisplayName" : "", "CFBundleName" : ""}
                    perArr = PermissionKeyDic[sourceLanguagekey]
                    for perName in perArr:
                        permissionOldDic[perName] = value
                    InfoPlistDic[lng] = permissionOldDic
                else:
                    oldDic = SourceDic.get(lng)
                    if oldDic:
                        if markText:
                            oldDic[Separator] = markText
                        oldDic[sourceLanguagekey] = value
                        SourceDic[lng] = oldDic
                    else:
                        if markText:
                            oldDic = {Separator: markText}
                            oldDic[sourceLanguagekey] = value
                            SourceDic[lng] = oldDic
                        else:
                            oldDic = {sourceLanguagekey: value}
                            SourceDic[lng] = oldDic
        f.close()

def writeNewKeysToFile():

    for tdic in SourceDic.items():
        sourceLangKey = tdic[0]
        targetLangKey = TargetLanguageKeys[sourceLangKey]
        saveDir = SavePath + targetLangKey + ".lproj"
        if os.path.exists(saveDir) == False:
            os.makedirs(saveDir)

        path = saveDir + "/Localize.strings"
        file = open(path, 'w')
        for vals in tdic[1].items():
            if vals[0] == Separator:
                markStr = "\n\n//%s  %s  %s\n" % (vals[0], vals[1], vals[0])
                file.write(markStr)
            else:
                saveStr = "\"%s\" = \"%s\";\n" % (vals[0], vals[1])
                file.write(saveStr)
        file.close()
        
def writeInfoPlistString():
    
    for tdic in InfoPlistDic.items():
        sourceLangKey = tdic[0]
        targetLangKey = TargetLanguageKeys[sourceLangKey]
        saveDir = SavePath + targetLangKey + ".lproj"
        if os.path.exists(saveDir) == False:
            os.makedirs(saveDir)

        path = saveDir + "/InfoPlist.strings"
        file = open(path, 'w')
        for vals in tdic[1].items():
            if vals[0] == Separator:
                markStr = "\n\n//%s  %s  %s\n" % (vals[0], vals[1], vals[0])
                file.write(markStr)
            else:
                saveStr = "\"%s\" = \"%s\";\n" % (vals[0], vals[1])
                file.write(saveStr)
        file.close()

def writeInfoPlistNotSuportString():

    for index in range(len(NotSurportKeysArr)):
        key = NotSurportKeysArr[index]
        saveDir = SavePath + key + ".lproj"
        if os.path.exists(saveDir) == False:
            os.makedirs(saveDir)

        path = saveDir + "/InfoPlist.strings"
        file = open(path, 'w')
        tdic = InfoPlistDic["TR"]
        for vals in tdic.items():
            if vals[0] == Separator:
                markStr = "\n\n//%s  %s  %s\n" % (vals[0], vals[1], vals[0])
                file.write(markStr)
            else:
                saveStr = "\"%s\" = \"%s\";\n" % (vals[0], vals[1])
                file.write(saveStr)
        file.close()
    
    

SourceDic = {}
InfoPlistDic = {}
TargetLanguageKeys = {"zh-Hans" : "zh-Hans",
                    "zh-Hant" : "zh-Hant",
                    "EN" : "en",
                    "TR" : "tr",
                    "ID" : "id",
                    "KR" : "ko",
                    "PT" : "pt-PT",
                    "ES" : "es",
                    "JA" : "ja",
}
NotSurportKeysArr = ["ar", "cs", "da", "de", "fi", "fr", "hu", "it", "ms", "sw"]
#ResourcePath = os.getcwd() + "/TMM/Documents/Translation/copywriting.csv"
ResourcePath = os.path.abspath(os.path.join(os.getcwd(),"../..")) + "/TMM/Documents/Translation/copywriting.csv"
ResourcePath1 = os.path.abspath(os.path.join(os.getcwd(),"../..")) + "/TMM/Documents/Translation/copywriting_SDK.csv"
#SavePath = os.getcwd() + "/IMSDK/IMSDK.docc/Resources/"
SavePath = os.path.abspath(os.path.join(os.getcwd(),"..")) + "/IMSDK/"
Separator = "===================="
PermissionKeyDic = {"permission_microphone": ["NSMicrophoneUsageDescription"],
                    "permission_camera": ["NSCameraUsageDescription"],
                    "permission_contacts_new": ["NSContactsUsageDescription"],
                    "permission_location" : ["NSLocationUsageDescription", "NSLocationWhenInUseUsageDescription", "NSLocationTemporaryUsageDescriptionDictionary"],
                    "permission_gallery" : ["NSPhotoLibraryAddUsageDescription", "NSPhotoLibraryUsageDescription"],
                    "NSCalendarsUsageDescription" : ["NSCalendarsUsageDescription"],
                    "NSRemindersUsageDescription" : ["NSRemindersUsageDescription"],
                    "ios_idfa" : ["NSUserTrackingUsageDescription"],
}

#openCsv(ResourcePath)
openCsv(ResourcePath1)
writeNewKeysToFile()
#writeInfoPlistString()
#writeInfoPlistNotSuportString()

