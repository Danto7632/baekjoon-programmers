#include <stdio.h>

int main() {
    char str[101], a, count=0, flag=0;
    while (1){
        scanf("%c", &a);
        if (a=='.'){
            if (flag==1){
                break;
            }
            else {
                flag++;
                if (count==0){
                    printf("yes\n");
                }
                else {
                    printf("no\n");
                }
                count=0;
            }
        }
        else if (a=='('){
            flag=0;
            str[count]=a;
            count++;
        }
        else if (a=='['){
            flag=0;
            str[count]=a;
            count++;
        }
        else if (a==')'){
            flag=0;
            if (count!=0&&str[count-1]=='('){
                count--;
            }
            else {
                while (a!='.'){
                    scanf("%c", &a);
                }
                printf("no\n");
                flag++;
                count=0;
                continue;
            }
        }
        else if (a==']'){
            flag=0;
            if (count!=0&&str[count-1]=='['){
                count--;
            }
            else {
                while (a!='.'){
                    scanf("%c", &a);
                }
                printf("no\n");
                flag++;
                count=0;
                continue;
            }
        }
        else if (a=='\n'){
            continue;
        }
        else {
            flag=0;
        }
    }
}