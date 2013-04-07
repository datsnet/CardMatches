//
//  PlayingCardDeck.m
//  CardMatches
//
//  Created by 熱海 大介 on 2013/04/04.
//  Copyright (c) 2013年 org.dyndns.datsnet. All rights reserved.
//

#import "PlayingCardDeck.h"
#import "PlayingCard.h"

@implementation PlayingCardDeck

-(id) init
{
    self = [super init];
    if (self) {
        for (NSString *suit in [PlayingCard validSuits]) {
            for (NSInteger rank = 1; rank <= [PlayingCard maxRank]; rank++) {
                
            }
        }
    }
    
    return self;

}

@end
