//
//  main.c
//  hanoiTower
//
//  Created by 박현도 on 2017. 3. 18..
//  Copyright © 2017년 박현도. All rights reserved.
//

#include <stdio.h>

void hanoi(int n, int a, int b) {
    int c;
    
    if(n<=1){
        printf("%d th : %d -> %d \n", n,a,b);
    }
    else{
        c=6-a-b;
        hanoi(n-1, a, c);
        printf("%d th : %d -> %d \n", n,a,b);
        hanoi(n-1, a, c);
    }
}

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d", &num);
    hanoi(num, 1, 2);
    return 0;
}
