#include <stdio.h>
#include <stdlib.h>

int compare(const void* x, const void* y)
{
    return (*(int*)x - *(int*)y);
}


int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int arr[a+b];
    for (int i=0;i<a+b;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,a+b,sizeof(int),compare);
    for (int i=0;i<a+b;i++){
        printf("%d ", arr[i]);
    }
}