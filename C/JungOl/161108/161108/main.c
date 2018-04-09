//
//  main.c
//  161108
//
//  Created by 박현도 on 2016. 11. 8..
//  Copyright © 2016년 박현도. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, m; // 행  열
    scanf("%d %d", &n, &m);
    
    int i,cnt=1;
    int mul=n*m;
    
    while(cnt<=mul){
        printf("%d ", cnt);
            
        for(i=1; i<n+1; i++){
            if(cnt==i*m) printf("\n");
        }
        cnt++;
    }
}
