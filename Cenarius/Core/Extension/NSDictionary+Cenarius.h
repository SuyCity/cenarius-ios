//
//  NSDictionary+Cenarius.h
//  Cenarius
//
//  Created by M on 2016/10/13.
//  Copyright © 2016年 M. All rights reserved.
//

@import Foundation;

@interface NSDictionary (Cenarius)

/**
 * 字典对应关键字的元素，该元素如果是数组，返回数组的首个元素。
 *
 * Return the first item of array for the specificed key.
 * -[NSDictionary objectForKey:] will return an object or an array depending on how the NSDictionary is created.
 *
 * @param key 关键字
 */
- (id)itemForKey:(id)key;

/**
 * 字典对应该关键字的元素，该元素如果是数组，返回该数组。
 *
 * Return a NSArray object which contains all the items for specificed key.
 * -[NSDictionary objectForKey:] will return an object or an array depending on how the NSDictionary is created.
 *
 * @param key 关键字
 */
- (NSArray *)allItemsForKey:(id)key;

/**
 * 将一个字典内容转换成 url 的 query 的形式。
 */
- (NSString *)queryString;

@end
