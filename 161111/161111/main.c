//
//  main.c
//  161111
//
//  Created by 박현도 on 2016. 11. 11..
//  Copyright © 2016년 박현도. All rights reserved.
//

#include <stdio.h>

int main(){
    int i;
    int n;
    int nCount=1;
    int ascNumber=64;
    
    scanf("%d", &n);
    
    while(nCount<=n){
        for(i=ascNumber+n*n; i>ascNumber+n*n-n; i--) printf("%c ", i);
        printf("\n");
        ascNumber--;
        // system("pause");
    }
}