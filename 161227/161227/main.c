//
//  main.c
//  161227
//
//  Created by 박현도 on 2016. 12. 28..
//  Copyright © 2016년 박현도. All rights reserved.
//

//
//두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차를 출력하는 프로그램을 작성하시오.
//
//
//[Copy]
//50 85
//[Copy]
//35

//#include <stdio.h>
//
//int main() {
//    // insert code here...
//    int a,b;
//    
//    scanf("%d %d", &a,&b);
//    
//    if(a>b) printf("%d\n", a-b);
//    else printf("%d\n", b-a);
//    
//    return 0;
//}

//
//정수를 입력받아 0 이면 "zero" 양수이면 "plus" 음수이면 "minus" 라고 출력하는 프로그램을 작성하시오.
//
//
//[Copy]
//zero

//#include <stdio.h>
//
//int main(){
//    int n;
//    
//    scanf("%d", &n);
//    
//    if(n==0) printf("zero\n");
//    else if(n>0) printf("plus\n");
//    else if(n<0) printf("minus\n");
//    
//    return 0;
//}

//년도를 입력받아 윤년인지 평년인지 판단하는 프로그램을 작성하시오.
//
//
//[Copy]
//2008
//[Copy]
//윤년


#include <stdio.h>
int main(){
    int year;
    scanf("%d", &year);

    
//    if(year%4==0){
//       // year1=year/4;
//        if(year%100==0){
//          //  year2=year1%100;
//            if(year%400==0) printf("윤년\n");
//            else printf("평년\n");
//        }
//    }
//    else printf("평년\n");
    
    if(year%4!=0) printf("평년\n");
    else {
        if(year%100!=0) printf("윤년\n");
        if(year%100==0&year%400==0) printf("윤년\n");
        else if(year%100==0) printf("평년\n");
       
        
    }
    
    
    
    
    
    return 0;
}