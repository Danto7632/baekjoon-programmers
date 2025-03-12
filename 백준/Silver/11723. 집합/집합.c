#include <stdio.h>
#include <string.h>

int main() {
    int n, num, arr[21];
    char order[7];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%s", order);
        if (strcmp(order,"add")==0){
            scanf("%d", &num);
            arr[num-1]=1;
        }
        else if (strcmp(order,"add")==0){
            scanf("%d", &num);
            arr[num-1]=1;
        }
        else if (strcmp(order,"remove")==0){
            scanf("%d", &num);
            arr[num-1]=0;
        }
        else if (strcmp(order,"check")==0){
            scanf("%d", &num);
            printf("%d\n", arr[num-1]==1?1:0);
        }
        else if (strcmp(order,"toggle")==0){
            scanf("%d", &num);
            arr[num-1]=arr[num-1]==1?0:1;
        }
        else if (strcmp(order,"all")==0){
            for (int i=0;i<20;i++){
                arr[i]=1;
            }
        }
        else if (strcmp(order,"empty")==0){
            for (int i=0;i<20;i++){
                arr[i]=0;
            }
        }
    }
}