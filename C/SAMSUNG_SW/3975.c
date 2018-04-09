#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

struct gameResult {
    int total;
    int win;
    double winProp;
    int isValidInput;
};

int main() {
    int test_case;
	int T;

    scanf("%d", &T);

    if(T < 1) {
        printf("Input error \n");
        return -1;
    }

    struct gameResult *alice, *bob;
    
    alice = (struct gameResult *)malloc(sizeof(struct gameResult) * T);
    bob = (struct gameResult *)malloc(sizeof(struct gameResult) * T);

    for (test_case = 0; test_case < T; test_case++) {
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////
        scanf("%d %d %d %d", &alice[test_case].win, &alice[test_case].total, &bob[test_case].win, &bob[test_case].total);

        // printf("%d %d %d %d \n", alice[test_case].win, alice[test_case].total, bob[test_case].win, bob[test_case].total);

        if(bob[test_case].win > bob[test_case].total || bob[test_case].win < 1 || bob[test_case].total < 1) {
            bob[test_case].isValidInput = FALSE;
        }
        else if(alice[test_case].win > alice[test_case].total || alice[test_case].win < 1 || alice[test_case].total < 1) {
            alice[test_case].isValidInput = FALSE;
        }
        else {
            alice[test_case].isValidInput = TRUE;
            bob[test_case].isValidInput = TRUE;
            
            alice[test_case].winProp = (double) alice[test_case].win / (double) alice[test_case].total;
            bob[test_case].winProp = (double) bob[test_case].win / (double) bob[test_case].total;

        }

	}

    // printf("\n");
    // printf("*-----------RESULT----------*\n");

    // 출력 테스트
    
    for(test_case=0; test_case<T; test_case++) {
        // printf("%f %f \n", alice[test_case].winProp, bob[test_case].winProp);

        if(alice[test_case].isValidInput == FALSE) {
            printf("Wrong Input \n");
        }
        else if(bob[test_case].isValidInput == FALSE) {
            printf("Wrong Input \n");
        }
        else {
            if(alice[test_case].winProp > bob[test_case].winProp) {
                printf("#2 ALICE\n");
            }
            else if(alice[test_case].winProp < bob[test_case].winProp) {
                printf("#3 BOB\n");
            }
            else {
                printf("#1 DRAW\n");
            }
        }
    }

    free(alice);
    free(bob);

    return 0;
}
