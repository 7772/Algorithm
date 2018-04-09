#include <stdio.h>
#include "hanoi.h"
#include <string.h>
#include <math.h>
#include <time.h>

int count = 0;                                                                      //디스크를 몇번 옮기는지 카운트

void hanoiTower(char start, char temp, char end, int n)                             //하노이타워 함수
{
    if (n==1) {                                                                     //A,B,C 세 개의 타워의 1번째 디스크를 옮길때 실행됨.
        count++;                                                                    //디스크 이동횟수 기록
        printf("%d : %d th Disk is moved from %c to %c\n", count, 1, start, end);   //start타워에서 end타워로 디스크를 옮긴다.
    }
    else {                                                                          //A,B,C 각각의 타워에서 1번째 디스크가 아닌 모든 디스크를 옮길때 실행됨.
        hanoiTower(start, end, temp, n-1);                                          //main에서 최초 호출 이후 2번째로 재귀호출되는 부분
        count++;                                                                    //디스크 이동횟수 기록
        printf("%d : %d th Disk is moved from %c to %c\n", count, n, start, end);   //start타워에서 end타워로 디스크를 옮긴다.
        hanoiTower(temp, start, end, n-1);                                          //3번째 호출되는 재귀함수
    }
}

int main()
{
    int num;
    float hanoiTime;                                                                //hanoi타워 수행시간 저장
    time_t startTime, endTime;                                                      //수행시간 시작과 끝을 저장
    
    startTime=clock();                                                              //시작시간 기록
    
    printf("Enter the number of Hanoi disk : ");                                    //디스크 수를 입력하세요.
    scanf("%d", &num);
    
    hanoiTower('A', 'B', 'C', num);                                                 //start:A, temp:B, end:C, n:num 으로 보내진다.
    
    if(count==pow(2.0,num)-1){                                                      //하노이타워는 n개의 디스크를 총 2^n-1 번 옮겨야 한다.
        printf("\n");
        printf("Congratulations!! All the disks were moved.\n");                    //완료되면 메세지 출력.
        printf("\n");
    }
    
    endTime=clock();                                                                //종료시간 저장
    hanoiTime=(float)(endTime-startTime)/(CLOCKS_PER_SEC);                          //(종료시간-시작시간)/clocks_per_sec 을 하면 걸린시간이 나온다.
    
    printf("%f\n", hanoiTime);                                                      //최종 수행시간 출력.
    
    return 0;
}


/*
 -------하노이 타워 알고리즘--------
 
 # 2개 디스크를 옮길 때
 start  temp    end     num
  A      B       C       2 (#1)
  A      C       B       1 (if문 실행 : A -> B 로 옮김)
  A      B       C       2 (2번째 디스크 옮김 : A -> C 로 옮김)
  B      A       C       1 (if문 실행 : B -> C 로 옮김)
 
 */


