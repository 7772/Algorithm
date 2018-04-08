//
//  main.c
//  FileTest
// djawjddbs
//  Created by 박현도 on 2017. 3. 21..
//  Copyright © 2017년 박현도. All rights reserved.
//
#include <stdio.h>

int main()
{
    FILE *rfp = fopen("test2.txt", "r");
    //int a, b;
    char d[100];
    
    fscanf(rfp, "%s", d);
    printf("%s", d);
}
