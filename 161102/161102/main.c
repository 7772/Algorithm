//
//  main.c
//  161102
//
//  Created by 박현도 on 2016. 11. 2..
//  Copyright © 2016년 박현도. All rights reserved.
//

//정수 n을 입력받아 n개의 정수형 동적배열을 생성하고 n개의 정수를 입력받아 최대값과 최소값을 출력하는 프로그램을 작성하시오.
//
//
//[Copy]
//5
//15 90 8 36 25
//[Copy]
//최대값 : 90
//최소값 : 8

//#include <stdio.h>
//#include <stdlib.h>
//
//void max(int array[], int N){
//    int i;
//    int max=0;
//    max=array[0];
//    for(i=1; i<N; i++){
//        if(max<array[i]) max=array[i];
//    }
//    printf("최대값 : %d\n", max);
//
//}
//
//void min(int array[], int N){
//    int i;
//    int min=0;
//    min=array[0];
//    for(i=1; i<N; i++){
//        if(min>array[i]) min=array[i];
//    }
//    printf("최소값 : %d\n", min);
//}
//
//int main() {
//    int n;
//    int * arr;
//    scanf("%d", &n);
//    arr=(int*)malloc(sizeof(n));
//    int i;
//    for(i=0; i<n; i++){
//        scanf("%d", &arr[i]);
//    }
//    max(arr, n);
//    min(arr, n);
//  
//    return 0;
//}
