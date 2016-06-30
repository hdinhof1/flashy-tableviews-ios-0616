//
//  CustomCell.h
//  FlashyTableviews
//
//  Created by Henry Dinhofer on 6/29/16.
//  Copyright © 2016 Henry Dinhofer. All rights reserved.
//

#import <SWTableViewCell/SWTableViewCell.h>

@interface CustomCell : SWTableViewCell

@property (weak, nonatomic) UILabel *customLabel;
@property (weak, nonatomic) UIImageView *customImageView;

@end
