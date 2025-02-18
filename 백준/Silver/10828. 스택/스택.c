#include <stdio.h>
#include <string.h>

int main() {
    int n, stack[10001], top=0;
    char cmd[6];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%s", cmd);
        if (strcmp(cmd, "push")==0){
            scanf("%d", &stack[top]);
            top++;
        }
        else if (strcmp(cmd, "pop")==0){
            if (top==0){
                printf("-1\n");
            }
            else {
                printf("%d\n", stack[top-1]);
                stack[top] = '\0';
                top--;
            }
        }
        else if (strcmp(cmd, "size")==0){
            printf("%d\n", top);
        }
        else if (strcmp(cmd, "empty")==0){
            if (top==0){
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (strcmp(cmd, "top")==0){
            if (top==0){
                printf("-1\n");
            }
            else {
                printf("%d\n", stack[top-1]);
            }
        }
    }
}