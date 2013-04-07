//
//  Deck.h
//  CardMatches
//
//  Created by 熱海 大介 on 2013/04/03.
//  Copyright (c) 2013年 org.dyndns.datsnet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;
@end
