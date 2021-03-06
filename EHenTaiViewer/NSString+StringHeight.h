//
//  NSString+StringHeight.h
//  EHenTaiViewer
//
//  Created by QinJ on 2017/5/26.
//  Copyright © 2017年 kayanouriko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (StringHeight)

//获取高度
- (CGFloat)StringHeightWithFontSize:(UIFont *)font maxWidth:(CGFloat)maxWidth;
//获取宽度
- (CGFloat)StringWidthWithFontSize:(UIFont *)font;
//编码
- (NSString *)urlEncode;
//截取字符串,去除[]()【】等内容
- (NSString *)handleString;
//去除html标签
- (NSString *)removeHtmlString;
// 文本md5
- (NSString *)MD5;
// 根据字符串数组获取一个标签的富文本
+ (NSAttributedString *)convertStringsWithArray:(NSArray<NSString *> *)array;
// 将html转义字符转为iOS可显示
- (NSString *)digitalHTMLToUnicode;
// 根据正则表示式传回适配的字符串
- (NSString *)matchFristObjWithRegex:(NSString *)regex;
- (NSArray *)matchWithRegex:(NSString *)regex;
// 获取中文标签,如果有的话
- (NSString *)getCHTagName;

@end
