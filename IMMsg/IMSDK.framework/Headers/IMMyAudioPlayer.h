//
//  IMMyAudioPlayer.h
//  YAY
//
//  Created by on 2017/9/15.
//  Copyright © 2017year apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface IMMyAudioPlayer : NSObject

@property (copy) void(^playAudioBlock)(CGFloat totalTime, CGFloat currentTime);//Audio playback callback
@property (copy) void(^playFlishBlock)(void);//End of play
@property (copy) void(^pauseBlock)(void);//End of play

- (void)prepareAudioUrl:(NSString *)audioUrl;

/**
 Play audio
 
 @param audioUrl Network audio path
 */
- (void)playAudioWithAudioUrl:(NSString *)audioUrl;


/**
   Whether it is currently playing voice
 
 @return return status
 */
- (BOOL)isCurrentURL:(NSString *)adiourl;

/**
   Whether playing
 
 @return return status
 */
- (BOOL)isPlaying;

/**
 Play
 */
- (void)play;

/**
   Whether to mute
 
 @return test result
 */
- (BOOL)isMuted;


/**
   Set mute
 */
- (void)mute;

/**
 Pause playback
 */
- (void)pause;

/**
 Stop play
 */
- (void)stop;


- (void)seekToTime:(float)time;
- (void)seekToTime:(float)time isAutoPlay:(BOOL)isAutoPlay;

@end
