#include <stdio.h>
#include <stdlib.h>

int compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main()
{
    int arr[1000000], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    // 정렬 후
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
        if (arr[i]==arr[i+1]){
            i = n;
        }
    }
}