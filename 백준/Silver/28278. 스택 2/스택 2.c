#include <stdio.h>
#include <string.h>

int main() {
    int n, cmd, stack[1000001], top=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &cmd);
        if (cmd==1){
            scanf("%d", &stack[top]);
            top++;
        }
        else if (cmd==2){
            if (top==0){
                printf("-1\n");
            }
            else {
                printf("%d\n", stack[top-1]);
                stack[top] = '\0';
                top--;
            }
        }
        else if (cmd==3){
            printf("%d\n", top);
        }
        else if (cmd==4){
            if (top==0){
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if (cmd==5){
            if (top==0){
                printf("-1\n");
            }
            else {
                printf("%d\n", stack[top-1]);
            }
        }
    }
}