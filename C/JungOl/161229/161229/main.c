//
//  main.c
//  161229
//
//  Created by 박현도 on 2016. 12. 29..
//  Copyright © 2016년 박현도. All rights reserved.
//

//정수를 입력받아서 1부터 입력받은 정수까지의 5의 배수의 합을 구하여 출력하는 프로그램을 작성하시오.
//
//
//[Copy]
//20
//[Copy]
//50

//#include <stdio.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int sum=0;
//    
//    for(int i=1; i<=n; i++){
//        if(i%5==0) sum+=i;
//    }
//    printf("%d\n",sum);
//}


//100 이하의 자연수 n을 입력받고 n개의 정수를 입력받아 평균을 출력하는 프로그램을 작성하시오.
//(평균은 반올림하여 소수 둘째자리까지 출력하도록 한다.)
//
//
//[Copy]
//3
//99 65 30
//[Copy]
//64.67

//#include <stdio.h>
//#include <math.h>
//int main(){
//    int n;
//    scanf("%d", &n);
//    int n1;
//    int sum=0;
//    for(int i=1; i<=n; i++) {
//        scanf("%d", &n1);
//        sum+=n1;
//    }
//    printf("%.2f\n", (float)(roundf(sum*100)/100)/n);
//}
//
//10개의 정수를 입력받아 입력받은 수들 중 짝수의 개수와 홀수의 개수를 각각 구하여 출력하는 프로그램을 작성하시오.
//
//
//[Copy]
//10 20 30 55 66 77 88 99 100 15
//[Copy]
//짝수 : 6개
//홀수 : 4개
//

//#include <stdio.h>
//int main(){
//    int n;
//    int evenCnt=0,oddCnt=0;
//    for(int i=0; i<10; i++){
//        scanf("%d", &n);
//        if(n%2==0)evenCnt++;
//        if(n%2==1)oddCnt++;
//    }
//    printf("짝수 : %d개\n", evenCnt);
//    printf("홀수 : %d개\n", oddCnt);
//}
//
//두 개의 정수를 입력받아 두 정수 사이(두 정수를 포함)에 3의 배수이거나 5의 배수인 수들의 합과 평균을 출력하는 프로그램을 작성하시오.
//(평균은 반올림하여 소수 첫째자리까지 출력한다.)
//
//
//[Copy]
//10 15
//[Copy]
//합계 : 37
//평균 : 12.3
//
//
//#include <stdio.h>
//#include <math.h>
//int main(){
//    int n1,n2;
//    int sum=0;
//    int cnt=0;
//    scanf("%d %d", &n1,&n2);
//    if(n1>n2){
//        for(int i=n2; i<=n1; i++){
//            if(i%3==0||i%5==0) {sum+=i; cnt++;}
//        }
//    }
//    else if(n2>n1){
//        for(int i=n1; i<=n2; i++){
//            if(i%3==0||i%5==0) {sum+=i; cnt++;}
//        }
//    }
//    else if(n1==n2){
//        if(n1%3==0||n1%5==0){sum+=n1;cnt++;}
//    }
//    printf("합계 : %d\n", sum);
//    printf("평균 : %.1f\n", (float)(roundf(sum*100)/100)/cnt);
//}
//
//
//한개의자연수를입력받아그수의배수를차례로10개출력하는프로그램을작성하시오.
//5 ///  5 10 15 20 25 30 35 40 45 50..
//
//#include <stdio.h>
//int main(){
//    int n;
//    int i;
//    scanf("%d", &n);
//    for(i=1; i<11; i++){
//        printf("%d ", n*i);
//    }
//    printf("\n");
//
//}
//
//행과열의수를입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
//3  4
//1 2 3 4
//2 4 6 8
//3 6 9 12
//
//
//
//#include <stdio.h>
//int main(){
//    int row,column;
//    int i,j;
//    
//    scanf("%d %d", &row,&column);
//    for(i=1; i<row+1; i++){
//        for(j=1; j<column+1; j++){
//            printf("%d ", i*j);
//        }
//        printf("\n");
//    }
//}
//
//#include <stdio.h>
//int main(){
//    int number;
//    scanf("%d", &number);
//    
//    int i,j;
//    
//    for(i=1; i<number+1; i++){
//        for(j=1; j<number+1; j++){
//            printf("(%d, %d) ", i,j);
//        }
//        printf("\n");
//    }
//    
//}
//


//#include <stdio.h>
//int main(){
//    int oneToNine=1;
//    int a,b;
//    int i;
//    
//    scanf("%d %d", &a,&b);
//    
//    if(a>=2&&a<=9&&b>=2&&b<=9){
//        
//        while(oneToNine<10){
//            
//            if(a>b){
//                for(i=a; i>b-1; i--) {
//                    printf("%d * %d = %3d   ", i, oneToNine, i*oneToNine);
//                    
//                }
//            }
//            else if(b>a){
//                for(i=a; i<b+1; i++) {
//                    printf("%d * %d = %3d   ", i,oneToNine, i*oneToNine);
//                  
//                }
//            }
//            else if(a==b) {
//                printf("%d * %d = %3d   ", a,oneToNine,a*oneToNine);
//                
//              }
//            
//        printf("\n");
//        oneToNine++;
//        
//        }
//    }
//    
//}


//자연수 n을 입력받아 "출력 예"와 같이 공백으로 구분하여 출력되는 프로그램을 작성하시오.
//주의! 숫자는 공백으로 구분하되 줄사이에 빈줄은 없다.
//
//
//[Copy]
//3
//[Copy]
//1 2 3
//  4 5
//    6
//
//


//#include <stdio.h>
//int main(){
//    int n;
//    int i,j,k;
//    int numberCnt=1;
//    int tempN=0;
//    
//    scanf("%d", &n);
//    tempN=n;
//    for(i=0; i<n; i++){
//        for(j=0; j<i; j++) {
//            printf("  ");
//            
//        }
//    //    if(i==2) emptyCnt--;
//        for(k=0; k<tempN; k++) {
//            printf("%d ", numberCnt);
//            numberCnt++;
//        }
//        tempN--;
//        printf("\n");
//    }
//}


//영문 대문자를 입력받다가 대문자 이외의 문자가 입력되면 그 때까지 1번 이상 입력된 각 문자의 개수를 사전 순으로
//출력하는 프로그램을 작성하시오.
//
//
//
//[Copy]
//A B C F F F B Z !
//[Copy]
//A : 1개
//B : 2개
//C : 1개
//F : 3개
//Z : 1개
//65 90


#include <stdio.h>
int main(){
    char alphabet[100];
    int i,j;
    
    int cnt[91];
    for(i=0; i<91; i++) cnt[i]=0;
    
    int alphaCnt=0;
    
    for(i=0; i<100; i++){
        scanf("%c", &alphabet[i]);
        ++alphaCnt;
        if(alphabet[i]>'Z'||alphabet[i]<'A') break;
    }

    for(j=0; j<alphaCnt; j++){
        for(i=65; i<91; i++){
            if(alphabet[j]==i) cnt[i]++; //cnt[65]=a개수....
        }
    }
    
    printf("%d", cnt[65]);
}

























































