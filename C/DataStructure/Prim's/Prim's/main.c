#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNTW 4
#define MAX_NODES 5

#define MAX_INT 99999
#define NOTDEF  -1
#define OUTOFQ  -1

int weight[COUNTW][3];  // 엣지와 가중치

// [in][out]
int graph[MAX_NODES][MAX_NODES];

int key[MAX_NODES];  // The cost
int pred[MAX_NODES]; // The Infomation of parents
int Q[MAX_NODES];
int Qcount;

void PQinit()
{
    Qcount = 0;
}

void PQinsert(int a)                  // 큐[0] = 0 , 큐[1] = 1, ....
{
    Q[a] = 0;
    Qcount++;                         // 큐 카운트 +1
}

int PQdelmin()
{
    int i;
    int min = MAX_INT;
    int saveindex = OUTOFQ;
    for (i = 0; i<MAX_NODES; i++) {
        if (Q[i] == OUTOFQ) continue;
        if (key[i] < min) {
            saveindex = i;
            min = key[i];
        }
    }
    if (saveindex == OUTOFQ) return OUTOFQ;
    Q[saveindex] = OUTOFQ;
    Qcount--;
    return saveindex;
}

int PQisempty()
{
    if (Qcount == 0) return 1;
    return 0;
}

void PQdeckey(int w, int newkey)
{
    key[w] = newkey;
}

void Prim(int start)  // 스타트에는 3이 저장되어있고
{
    int i, v, w;
    PQinit();                         // Q 카운트를 0으로 초기화.
    for (i = 0; i<MAX_NODES; i++) {       //맥스 노드까지
        key[i] = MAX_INT;                 // 모든 키 배열에 99999를 저장.
        pred[i] = NOTDEF;                 // 부모노드의 정보.
        PQinsert(i);                      // i 를 큐에 삽입
    }
    
  //  프림 알고리즘 출력과정.
    key[start] = 0;
    for (; !PQisempty();) {
        v = PQdelmin();
       // printf("%d %c\n", v, v + 'A');
        for (w = 0; w<MAX_NODES; w++) {
            if ((graph[v][w] != 0) && (key[w]>graph[v][w])) {
                PQdeckey(w, graph[v][w]);
                pred[w] = v;
            }
        }
    }
    
    
    
    // 과제의 예시를 지키기 위해, 가중치 그래프를 다시 인접행렬로 표현.
    for(i=0; i<COUNTW; i++) {
        graph[weight[i][0]-1][weight[i][1]-1] = 1;
        graph[weight[i][1]-1][weight[i][0]-1] = 1;
    }
    
    for(i=0; i<MAX_NODES; i++) {
        for(int j=0; j<MAX_NODES; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    
}

int main()
{
    
    int i,j;
    
    
    printf("input edge((i,j), Weight) : \n");               // 시작노드, 끝노드, 가중치 입력
    
    for(i=0; i<COUNTW; i++) {
        for(j=0; j<3; j++) {
            weight[i][j] = 0;           // 초기화
        }
    }
    
    for(i=0; i<MAX_NODES; i++) {
        for(j=0; j<MAX_NODES; j++) {
            graph[i][j] = 0;           // 초기화
        }
    }
    
    for(i=0; i<COUNTW; i++) {               // 시작노드, 끝노드, 가중치 입력
        for(j=0; j<3; j++) {
            scanf("%d", &weight[i][j]);
        }
    }
    
    for(i=0; i<COUNTW; i++) {
        graph[weight[i][0]-1][weight[i][1]-1] = weight[i][2];
        graph[weight[i][1]-1][weight[i][0]-1] = weight[i][2];
    }
    
    
    printf("\n\n");
    
    for(i=0; i<MAX_NODES; i++) {
        for(j=0; j<MAX_NODES; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");


    int random;
    srand(time(NULL));
    
    random = (rand() % 5) + 1; // 1 ~ 5 까지 랜덤값 발생.
    
    Prim(random);               // 프림 알고리즘은 시작 노드를 어디로 하던 상관 없기 때문에 랜덤값으로 전달함.
    
   // system("pause");
    return 0;
}




