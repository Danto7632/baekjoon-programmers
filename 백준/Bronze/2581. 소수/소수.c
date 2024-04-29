#include <stdio.h>

int main(){
    int a, b, flag, sum=0, min=0;
    scanf("%d\n%d", &a, &b);
    for (int i=a;i<=b;i++){
        if(i==1){
            continue;
        }
        flag=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag=1;
                break;
            }
        }
        if (flag==1){
            continue;
        }
        if (min==0){
            min = i;
        }
        sum+=i;
    }
    if (sum==0){
        printf("-1");
    }
    else{
        printf("%d\n%d", sum, min);
    }
}