//
//  PAViewController.m
//  ProatomicSubclasses
//
//  Created by Guillermo Saenz on 07/23/2016.
//  Copyright (c) 2016 Guillermo Saenz. All rights reserved.
//

#import "PAViewController.h"

@import ProatomicSubclasses;

@interface PAViewController ()

@end

@implementation PAViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [PASCustomFrameView class];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
