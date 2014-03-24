//
//  MKMessage.h
//  Bitmessage
//
//  Created by Steve Dekorte on 3/17/14.
//  Copyright (c) 2014 Bitmarkets.org. All rights reserved.
//

#import "BMNode.h"
#import "BMMessage.h"
#import "NSDictionary+json.h"

@interface MKMessage : BMNode

@property (strong, nonatomic) BMMessage *bmMessage;

- (NSMutableDictionary *)standardHeader;
+ (MKMessage *)withBMMessage:(BMMessage *)bmMessage;

@end