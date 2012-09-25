//
//  YozioRequestManagerMock.h
//  Yozio
//
//  Created by Jimmy Tang on 9/25/12.
//  Copyright (c) 2012 University of California at Berkeley. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YozioRequestManager.h"

@interface YozioRequestManagerMock : YozioRequestManager

{
  id body;
  NSHTTPURLResponse *response;
  NSError *error;
  int timeOut;
}

@property(nonatomic, retain) id body;
@property(nonatomic, retain) NSHTTPURLResponse *response;
@property(nonatomic, retain) NSError *error;
@property(nonatomic, assign) int timeOut;
@end