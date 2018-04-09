#include <stdio.h>
#include <stdlib.h>

#define CASE_NUM 10

struct TEST_CASE {
    int T;
    int max;
    int * eachNumViaT;
    int totalCNT;
};

void getMax(int * max, int * pArrT, int T);

int main() {
    
    struct TEST_CASE testCase[CASE_NUM];

    int ** arr;
    int i, j, k;
    int wArrCNT = 0, testCaseCNT = 0, totalCNT = 0;

    for(i=0; i<CASE_NUM; i++) {
        scanf("%d", &testCase[i].T);
        if( testCase[i].T < 1 || testCase[i].T > 1000 ) {
            return -1;
        }

        testCase[i].eachNumViaT = (int *) malloc( sizeof(int) * testCase[i].T );

        for( j = 0; j < testCase[i].T; j++ ) {
            scanf("%d", &testCase[i].eachNumViaT[j]);
        }

        testCase[i].max = 0;

        getMax(&testCase[i].max, testCase[i].eachNumViaT, testCase[i].T);

    }

    while(testCaseCNT < CASE_NUM) {

        arr = (int **) malloc( sizeof(int *) * testCase[testCaseCNT].max);

        for( i = 0; i < testCase[testCaseCNT].max; i++ ) {
            arr[i] = (int *) malloc( sizeof(int) * testCase[testCaseCNT].T);
            for( j = 0; j < testCase[testCaseCNT].T; j++ ) {
                arr[i][j] = 0;
            }
        }

        for( i = 0; i < testCase[testCaseCNT].T; i++ ) {
            if( testCase[testCaseCNT].eachNumViaT[i] > 0 ) {
                wArrCNT = testCase[testCaseCNT].eachNumViaT[i];
                    for( j = testCase[testCaseCNT].max-1; j >= 0; j-- ) {
                        if( wArrCNT == 0 ) break;
                        arr[j][i] = 1;
                        wArrCNT--;
                    }
            } 
        }

        testCase[testCaseCNT].totalCNT = 0;

        // 순회
        for( i = 0; i < testCase[testCaseCNT].max; i++ ) {
            for( j = 2; j < testCase[testCaseCNT].T - 2; j++ ) {
                if( arr[i][j] == 1 ) {
                    if( arr[i][j-2] == 0 && arr[i][j-1] == 0 
                            && arr[i][j+1] == 0 && arr[i][j+2] == 0) testCase[testCaseCNT].totalCNT++;
                }
            }  

            free(arr[i]); 
        }

        free(arr);

        testCaseCNT++;
    }

    for(i=0; i<CASE_NUM; i++) {
        printf("#%d %d \n", i+1, testCase[i].totalCNT);
    }

    return 0;
}

void getMax(int * max, int * pArrT, int T) {
    int i;
    * max = pArrT[0];
    
    for(i=0; i<T; i++) {
        if(* max < pArrT[i]) {
            * max = pArrT[i];
        }
    }
}
