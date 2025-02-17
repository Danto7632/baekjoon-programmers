#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}coord;

int compare1 (const void* a, const void* b)
{
    coord A = *(coord*)a;
    coord B = *(coord*)b;
    if (A.x > B.x){
        return 1;
    }
    else {
        return -1;
    }
}

int compare2 (const void* a, const void* b)
{
    coord A = *(coord*)a;
    coord B = *(coord*)b;
    if (A.y > B.y){
        return 1;
    }
    else {
        return -1;
    }
}

int main()
{
    int n, x, com, count=0;
    scanf("%d", &n);
    coord arr[n];

    for (int i=0;i<n;i++){
        scanf("%d", &arr[i].x);
        arr[i].y = i;
    }
    
    qsort(arr, n, sizeof(coord), compare1);
    com = arr[0].x;
    
    for (int i=0;i<n;i++){
        if (arr[i].x > com){
            com = arr[i].x;
            count++;
        }
        arr[i].x = count;
    }
    qsort(arr, n, sizeof(coord), compare2);
    
    for (int i=0;i<n;i++){
        printf("%d ", arr[i].x);
    }
}