#include <stdio.h>

int main() {
    int n, a, arr[100001], top=-1,count=0,num=1,flag=0;
    char pm[200001];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &a);
        while (a!=arr[top]){
            top++;
            arr[top]=num;
            pm[count]='+';
            count++;
            num++;
            if (arr[top]>n){
                flag=1;
                break;
            }
        }
        arr[top]=0;
        pm[count]='-';
        top--;
        count++;
    }
    if (flag==0){
        for (int i=0;i<2*n;i++){
            printf("%c\n", pm[i]);
        }
    }
    else {
        printf("NO");
    }
}