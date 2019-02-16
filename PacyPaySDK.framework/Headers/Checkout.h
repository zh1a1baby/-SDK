//
//  Checkout.h
//  pacypay
//
//  Created by 荣翰 on 2018/8/7.
//  Copyright © 2018年 荣翰. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, EnvironmentalType) {
    Sandbox,
    Production
};
@protocol PacyPayDelegate <NSObject>
@required
- (void) returnPacyPayJSON:(NSDictionary *)json;
@end

@interface Checkout : UIViewController


@property (strong, nonatomic) NSDictionary *checkoutOrder;
@property (weak,   nonatomic) id<PacyPayDelegate> delegate;
@property (assign, nonatomic) EnvironmentalType type;
@end
