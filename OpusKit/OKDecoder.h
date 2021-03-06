//
//  OKDecoder.h
//  OpusKit
//
//  Created by Christopher Ballinger on 2/17/14.
//
//

#import <Foundation/Foundation.h>
#import "OKCodec.h"
#import <AVFoundation/AVFoundation.h>

@interface OKDecoder : OKCodec

@property (nonatomic) BOOL forwardErrorCorrection;

- (BOOL) setupDecoderWithError:(NSError *__autoreleasing *)error;
+ (OKDecoder*) decoderForASBD:(AudioStreamBasicDescription)absd error:(NSError *__autoreleasing *)error;
- (void) decodePacket:(NSData*)packetData completionBlock:(void (^)(NSData *pcmData, NSUInteger numDecodedSamples, NSError *error))completionBlock;

@end
