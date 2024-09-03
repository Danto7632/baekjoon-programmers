#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}coord;

int compare (const void* a, const void* b)
{
    coord A = *(coord*)a;
    coord B = *(coord*)b;
    if (A.y > B.y){
        return 1;
    }
    else if (A.y == B.y){
        if (A.x > B.x){
            return 1;
        }
        else{
            return -1;
        }
    }
    return -1;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    coord arr[n];

    for (i=0;i<n;i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    
    qsort(arr, n, sizeof(coord), compare);

    // 정렬 후
    for (i=0;i<n;i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}
// qsort 퀵솔트 퀵정렬 빠른정렬 (내장함수 사용)
// 구조체를 만들고 구조체로 배열선언 후 구조체로 퀵정렬