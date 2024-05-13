#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, arr[10001]={0,};
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        scanf("%d", &a);
        arr[a]++;
    }

    for (int i=0;i<10001;i++){
        if (arr[i]>0){
            printf("%d\n", i);
            arr[i]--;
            i--;
            continue;
        }
    }
}
// 카운팅 정렬 활용