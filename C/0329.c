#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int *head, *tail;
    int i;
    int tmp = 0;

    head = arr;
    tail = &arr[5];

    for(i=0; i<3; i++) {
        tmp = *head;
        *head = *tail;
        *tail = tmp;
        head++;
        tail--;
    }

    for(i=0; i<6; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}