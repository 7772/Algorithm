#include <stdio.h>
#define COUNTW 4

int N = 5;

int data[]={1,2,3,4,5}; // 노드 5개
int weight[COUNTW][3];  // 엣지와 가중치

int parent[10];         // 부모 노드를 가리킴

int make_set(int x)     // ?
{
    x = x-1;            // 부모노드 인덱스
    parent[x]=x;        // 부모노드는 해당 노드의 -1 값이 들어감.
    return 0;
}

int find_set(int x)     // ?
{
    x = x-1;
    if(x == parent[x]) return x;
    return find_set(parent[x]+1);
}

int union_set(int x,int y)              // ?
{
    parent[find_set(y)] = find_set(x);
    return 0;
}

int main()
{
    int i,j;
    int adjacencyMatrix[N][N];
    
    printf("input edge((i,j), Weight) : \n");               // 시작노드, 끝노드, 가중치 입력
    
    for(i=0; i<COUNTW; i++) {
        for(j=0; j<3; j++) {
            weight[i][j] = 0;           // 초기화
        }
    }
    
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            adjacencyMatrix[i][j] = 0;           // 초기화
        }
    }
    
    
    
    for(i=0; i<COUNTW; i++) {               // 시작노드, 끝노드, 가중치 입력
        for(j=0; j<3; j++) {
            scanf("%d", &weight[i][j]);
        }
    }
   
    int temp[3];                            // sorting 에 사용.
    int selected = 0;                       // ?
    for(i=0;i<N;i++){
        make_set(data[i]);                  // 셋트를 만듬
    }
    // sort
    for(i=0;i<COUNTW;i++){                  // sorting
        for(j=i+1;j<COUNTW;j++){
            if(weight[i][2]>weight[j][2]){
                //swap
                temp[0] = weight[i][0];
                temp[1] = weight[i][1];
                temp[2] = weight[i][2];
                weight[i][0] = weight[j][0];
                weight[i][1] = weight[j][1];
                weight[i][2] = weight[j][2];
                weight[j][0] = temp[0];
                weight[j][1] = temp[1];
                weight[j][2] = temp[2];
            }
        }
    }
    
    printf("End\n");
    
//    // print
//    for(i=0;i<COUNTW;i++){
//        printf("%d-%d %d\n",weight[i][0],weight[i][1],weight[i][2]);        // sorting 된 결과를 출력.
//    }
//    printf("sorted\n");

    
    for(i=0; i<COUNTW; i++) {
        adjacencyMatrix[weight[i][0]-1][weight[i][1]-1] = 1;
        adjacencyMatrix[weight[i][1]-1][weight[i][0]-1] = 1;
    }
    
    
    // select
    for(i=0;i<COUNTW;i++){
        if(find_set(weight[i][0])!=find_set(weight[i][1])){                 // 사이클이 형성되는지 검사한다. 첫번째 노드와 두번째 노드의 find_set 반환값이 같으면, 사이클이 형성된 것.
            union_set(weight[i][0],weight[i][1]);
//            printf("%d-%d %d\n",weight[i][0],weight[i][1],weight[i][2]);
        
            if(++selected >= N-1) {
                break;
            }
            
            
        }
        else {
            printf("싸이클이 형성되었습니다. 다시 입력해주세요.\n");
            exit(-1);
        }
        
    }
    
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
