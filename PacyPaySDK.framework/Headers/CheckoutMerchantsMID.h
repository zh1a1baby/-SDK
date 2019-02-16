//
//  CheckoutMerchantsMID.h
//  pacypay
//
//  Created by 荣翰 on 2018/8/7.
//  Copyright © 2018年 荣翰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckoutMerchantsMID : UIView
+(instancetype) shareInstance;
-(void)md5Key:(NSString *)strMd5Key;
-(NSString *)md5keyUser;

-(void)merchantMID:(NSString *)strMID;
-(NSString *)merchantMIDUser;

@end
