#include <stdio.h>

int sqrtFuncByReference(int *num) {
    return (*num)*(*num);
}

int sqrtFuncByValue(int num) {
    return num*num;
}

int main() {
    int num = 3;

    printf("sqrtFuncByReference %d \n", sqrtFuncByReference(&num));
    printf("sqrtFuncByValue %d \n", sqrtFuncByValue(num));

    return 0;
}