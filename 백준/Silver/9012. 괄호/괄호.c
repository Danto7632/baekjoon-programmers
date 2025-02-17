#include <stdio.h>

int main(){
    int n, flag, left, right;
    char arr[51];
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        flag = 0;
        left = 0;
        right = 0;
        scanf("%s", arr);
        for (int j=0;arr[j]!='\0';j++){
            if (arr[j]=='('){
                if (right!=0){
                    right--;
                }
                else {
                    left++;
                }
            }
            else {
                if (left!=0){
                    left--;
                }
                else {
                    right++;
                }
            }
            if (right>left){
                printf("NO\n");
                flag++;
                break;
            }
        }
        if (left!=0||right!=0){
            if (flag==0){
                printf("NO\n");
            }
        }
        else {
            printf("YES\n");
        }
    }
}