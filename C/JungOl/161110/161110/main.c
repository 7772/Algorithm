//
//  main.c
//  161110
//
//  Created by 박현도 on 2016. 11. 11..
//  Copyright © 2016년 박현도. All rights reserved.
//
//정사각형의 한 변의 길이 n을 입력받은 후 다음과 같이 숫자로 된 정사각형 형태로 출력하는 프로그램을 작성하시오.
//< 처리조건 > 숫자의 진행 순서는 처음에 왼쪽 위에서 아래쪽으로 n만큼 진행 한 후 바로 오른쪽 위에서
//다시 아래쪽으로 진행하는 방법으로 정사각형이 될 때까지 반복한다.
//
//정사각형 한 변의 길이 n(n의 범위는 100 이하의 자연수)을 입력받는다.
//
//
//위의 형식과 같이 한 변의 길이가 n인 숫자 사각형을 출력한다. 숫자 사이는 공백으로 구분하여 출력한다.


//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    int i=1,j;
//    int n;
//    int cnt=0;
//    scanf("%d", &n);
//   
//    
//    if(n>0&&n<=100){
//        while(i<=n){
//            cnt=i+n*(n-1);
//            for(j=i; j<=cnt; j=j+n) printf("%d ", j);
//            printf("\n");
//            i++;
//        }
//
//    }
//}


#include <stdio.h>

int main(){
    int n,m;//number, case
    int i=1,j;
    
    scanf("%d %d", &n, &m);
    
    if(m==1){
        while(i<=n){
            for(j=1; j<=n; j++) printf("%d ", i);
            printf("\n");
            i++;
        }
    }
    if(m==2){
        while(i<=n){
            for(j=1; j<=n; j++) printf("%d ", j);
            i++;
            printf("\n");
            if(i>n) break;
            for(j=n; j>=1; j--) printf("%d ", j);
            printf("\n");
            i++;
        }
    }
    if(m==3){
        while(i<=n){
            for(j=i; j<=i*n; j=j+i) printf("%d ", j);
            printf("\n");
            i++;
        }

    }
  //  system("pause");
}

