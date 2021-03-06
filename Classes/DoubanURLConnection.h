//
//  DoubanURLConnection.h
//  bookhelper
//
//  Created by Luke on 6/23/11.
//  Copyright 2011 Geeklu.com. All rights reserved.
//

typedef enum  {
	DOUBAN_BOOK = 0,
	DOUBAN_BOOKS,
	DOUBAN_PRICE,
	DOUBAN_BOOK_REVIEWS
} DoubanConnectionType;

@interface DoubanURLConnection : NSURLConnection {
	NSString *uuid;
	DoubanConnectionType type;
	id responseTarget;
	SEL responseAction;
}
@property(nonatomic,readonly)NSString *uuid;
@property(nonatomic,assign)DoubanConnectionType type;
@property(nonatomic,assign)id responseTarget;
@property(nonatomic,assign)SEL responseAction;
@end
