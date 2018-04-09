#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

int count = 0;

void hanoiTower(char start, char temp, char end, int n)
{
    if (n==1) {
        count++;
        printf("%d : %d th Disk is moved from %c to %c\n", count, 1, start, end);
    }
    else {
        hanoiTower(start, end, temp, n-1);
        count++;
        printf("%d : %d th Disk is moved from %c to %c\n", count, n, start, end);
        hanoiTower(temp, start, end, n-1);
    }
}

int main()
{
    int num;
    double hanoiTime;
    time_t startTime, endTime;
    
    startTime=clock();
    
    printf("Enter the number of Hanoi disk : ");
    scanf("%d", &num);
    
    hanoiTower('A', 'B', 'C', num);
    endTime=clock();
    hanoiTime=(double)(endTime-startTime)/(CLOCKS_PER_SEC);
    
    if(count==pow(2.0,num)-1){
        printf("\n");
        printf("Congratulations!! All the disks were moved.\n");
        printf("\n");
    }
    
    printf("%lf\n", hanoiTime);
}

