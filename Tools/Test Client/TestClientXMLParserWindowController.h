// 
// Copyright (c) 2010 Eric Czarny <eczarny@gmail.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of  this  software  and  associated documentation files (the "Software"), to
// deal  in  the Software without restriction, including without limitation the
// rights  to  use,  copy,  modify,  merge,  publish,  distribute,  sublicense,
// and/or sell copies  of  the  Software,  and  to  permit  persons to whom the
// Software is furnished to do so, subject to the following conditions:
// 
// The  above  copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE  SOFTWARE  IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED,  INCLUDING  BUT  NOT  LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS  OR  COPYRIGHT  HOLDERS  BE  LIABLE  FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY,  WHETHER  IN  AN  ACTION  OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// 

//
// Test Client
// TestClientXMLParserWindowController.h
//
// Created by Eric Czarny on Friday, July 10, 2009.
// Copyright (c) 2010 Divisible by Zero.
//

#import <Cocoa/Cocoa.h>

@interface TestClientXMLParserWindowController : NSWindowController {
    id myParsedObject;
    IBOutlet NSTextView *myXML;
    IBOutlet NSOutlineView *myParserResult;
}

+ (TestClientXMLParserWindowController *)sharedController;

#pragma mark -

- (void)showXMLParserWindow: (id)sender;

- (void)hideXMLParserWindow: (id)sender;

#pragma mark -

- (void)toggleXMLParserWindow: (id)sender;

#pragma mark -

- (void)parse: (id)sender;

@end
