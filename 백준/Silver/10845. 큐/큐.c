#include <stdio.h>
#include <string.h>

int main() {
    int n,front=0,back=0,que[10001];
    char command[6];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%s",command);
        if (strcmp(command,"push")==0){
            scanf("%d", &que[back]);
            back++;
        }
        else if (strcmp(command,"pop")==0){
            if (back-front==0){
                printf("-1\n");
            }
            else {
                printf("%d\n", que[front]);
                front++;
            }
        }
        else if (strcmp(command,"size")==0){
            printf("%d\n", back-front);
        }
        else if (strcmp(command,"empty")==0){
            printf("%d\n", back-front==0?1:0);
        }
        else if (strcmp(command,"front")==0){
            printf("%d\n", back-front==0?-1:que[front]);
        }
        else if (strcmp(command,"back")==0){
            printf("%d\n", back-front==0?-1:que[back-1]);
        }
    }
}