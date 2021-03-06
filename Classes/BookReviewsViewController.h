//
//  BookReviewsViewController.h
//  bookhelper
//
//  Created by Luke on 7/3/11.
//  Copyright 2011 Geeklu.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ContinuousTableView.h"
#import "MBProgressHUD.h"

@interface BookReviewsViewController : UIViewController {
	ContinuousTableView *reviewTableView;

	MBProgressHUD *HUD;

	NSMutableArray *reviews;
	NSString *isbn;
	NSInteger totalResults;
	NSInteger startIndex;
	
	NSString *connectionUUID;
}
@property(nonatomic,retain) IBOutlet ContinuousTableView *reviewTableView; 
@property(nonatomic,copy) NSString *isbn;

- (void)didGetBookReviews:(NSDictionary *)userInfo;
- (void)loadMore;
@end
