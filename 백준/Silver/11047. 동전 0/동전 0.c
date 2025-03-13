#include <stdio.h>

int main() {
    int n,k,count=0;
    scanf("%d %d", &n, &k);
    int arr[n+1];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=n-1;i>=0;i--){
        if (k==0){
            break;
        }
        else if (k>=arr[i]){
            k-=arr[i];
            count++;
            i++;
            continue;
        }
    }
    printf("%d", count);
}