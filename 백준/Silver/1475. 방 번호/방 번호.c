#include <stdio.h>

int main() {
    int n, max=0;
    int arr[9]={0,};
    scanf("%d", &n);
    while (n!=0){
        if (n%10==6||n%10==9){
            arr[6]++;
        }
        else {
            arr[n%10]++;
            max = arr[n%10]>max?arr[n%10]:max;
        }
        n/=10;
    }
    if (arr[6]%2==1){
        arr[6]=arr[6]/2+1;
        printf("%d", max>arr[6]?max:arr[6]);
    }
    else {
        arr[6]=arr[6]/2;
        printf("%d", max>arr[6]?max:arr[6]);
    }
}