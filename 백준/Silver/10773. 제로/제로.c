#include <stdio.h>

int main() {
    int n, a, arr[100001], sum=0, count=0;
    scanf("%d", &n);

    for (int i=0;i<n;i++){
        scanf("%d", &a);
        if (a==0){
            arr[count-1] = 0;
            count--;
        }
        else {
            arr[count] = a;
            count++;
        }
    }
    for (int i=0;i<count;i++){
        sum+=arr[i];
    }
    printf("%d", sum);
}