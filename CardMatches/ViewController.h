//
//  ViewController.h
//  CardMatches
//
//  Created by 熱海 大介 on 2013/04/03.
//  Copyright (c) 2013年 org.dyndns.datsnet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Card.h"

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *cardsButton;
@property (strong, nonatomic) NSMutableArray *cards;



- (IBAction)pushCard:(UIButton *)sender;
@end
