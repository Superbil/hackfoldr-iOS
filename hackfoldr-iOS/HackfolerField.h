//
//  HackfolerField.h
//  hackfoldr-iOS
//
//  Created by Superbil on 2014/6/22.
//  Copyright (c) 2014年 org.superbil. All rights reserved.
//

@interface HackfolerField : NSObject

- (instancetype)initWithFieldArray:(NSArray *)fields;

@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, strong) NSString *urlString;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *actions;

@property (nonatomic, assign) BOOL isSubItem;

- (BOOL)isEmpty;

@end
