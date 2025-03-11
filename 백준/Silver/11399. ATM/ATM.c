#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    if (*(int*)a>*(int*)b){
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    int n, plus=0, sum=0;
    scanf("%d", &n);
    int arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    for (int i=0;i<n;i++){
        plus += arr[i];
        sum+= plus;
    }
    printf("%d", sum);
}
// 1 2 3 3 4