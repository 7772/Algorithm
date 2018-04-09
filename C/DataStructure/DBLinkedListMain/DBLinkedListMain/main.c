#include <stdio.h>
#include "DBLinkedList.h"

int main(void)
{
    
    List list;
    int data;
    ListInit(&list);
    
    char studentID[8];
    int i, selectNum;
    
    printf("Input an Integer : \n");
    
    for(i=0; i<8; i++) {
        scanf("%c", &studentID[i]);
    }
    
    printf("Select Method (1) Stack (2) Queue : \n");
    scanf("%d", &selectNum);
    
    
    
    printf("\n");
    
    
    if( selectNum == 1 ) {
    
        for(i=0; i<8; i++) {
            LInsert(&list, studentID[i]);
        }
    
//    LInsert(&list, 1);  LInsert(&list, 2);
//    LInsert(&list, 3);  LInsert(&list, 4);
//    LInsert(&list, 5);  LInsert(&list, 6);
//    LInsert(&list, 7);  LInsert(&list, 8);
//    
    
        if(LFirst(&list, &data))
        {
            printf("%c\n", data);
        
            while(LNext(&list, &data))
                printf("%c\n", data);
        
//        while(LPrevious(&list, &data))
//            printf("%d ", data);
        
            printf("\n\n");
        }
    }
    
    return 0;
}
