//
//  main.c
//  161109
//
//  Created by 박현도 on 2016. 11. 9..
//  Copyright © 2016년 박현도. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,m;
    int i,j,k;
    int tempValue=1;
    
    scanf("%d %d", &n,&m);
    i=1;
    while(i<=n){
        if(i%2==1){
            for(j=tempValue; j<=m*i; j++){
                printf("%d ", j);
            }
        }
        tempValue=m*i;
        printf("\n");
        i++;
        if(i%2==0){
            for(k=i*m; k>=tempValue+1; k--){
                printf("%d ", k);
            }
        }
        tempValue=tempValue*2+1;
        printf("\n");
        i++;
    }
}
