#include <stdio.h>
#include <stdlib.h>

int compare(const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else
        return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    printf("%d", arr[k-1]);
}