#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int score;
    int index;
}intwo;

int sscore(const void* a, const void* b)
{
    if ((*(intwo*)a).score<(*(intwo*)b).score){
        return 1;
    }
    else {
        return 0;
    }
}
int sindex(const void* a, const void* b)
{
    if ((*(intwo*)a).index>(*(intwo*)b).index){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int sum=0;
    intwo arr[8];
    for (int i=0;i<8;i++){
        scanf("%d", &arr[i].score);
        arr[i].index=i+1;
    }
    qsort(arr,8,sizeof(intwo),sscore);
    qsort(arr,5,sizeof(intwo),sindex);

    for (int i=0;i<5;i++){
        sum+=arr[i].score;
    }
    printf("%d\n", sum);
    for (int i=0;i<5;i++){
        printf("%d ", arr[i].index);
    }
    
}