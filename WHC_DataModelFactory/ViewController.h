//
//  ViewController.h
//  WHC_DataModelFactory
//
//  Created by 吴海超 on 15/4/30.
//  Copyright (c) 2015年 吴海超. All rights reserved.
//

// Github <https://github.com/netyouli/WHC_DataModelFactory>

//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

@property (nonatomic , strong)IBOutlet  NSTextView  * jsonField;
@property (nonatomic , strong)IBOutlet  NSTextView  * classField;
@property (nonatomic , strong)IBOutlet  NSTextView  * classMField;

@property (nonatomic , strong) NSMutableString *classString; //存类头文件内容
@property (nonatomic , strong) NSMutableString *classMString; //存类源文件内容
@property (nonatomic , strong) NSMutableString *classPrefixName;//类前缀


@property (nonatomic , strong) NSString *classContentString;//类内容

@end

