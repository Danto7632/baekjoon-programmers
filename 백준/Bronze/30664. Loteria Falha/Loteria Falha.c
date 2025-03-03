#include <stdio.h>
#include <string.h>

int main() {
    int len, flag, sum, count;
    char n[31];
    while(1){
        scanf("%s", n);
        if (strcmp(n,"0")==0){
            break;
        }
        else {
            flag=0;
            sum=0;
            count=0;

            len = strlen(n);
            for (int i=len-1;i>-1;i--){
                if (flag==0){
                    if ((n[i]-48)%2==0){
                        flag++;
                        i=len;
                    }
                    else {
                        break;
                    }
                }
                else if (flag==1){
                    sum+=(n[i]-48);
                    if (i==0&&sum%3==0){
                        flag++;
                        i=len;
                        sum=0;
                    }
                }
                else if (flag==2){
                    if (count%6==0){
                        sum+=(n[i]-48);
                    }
                    else if (count%6==1){
                        sum+=(n[i]-48)*3;
                    }
                    else if (count%6==2){
                        sum+=(n[i]-48)*2;
                    }
                    else if (count%6==3){
                        sum+=(n[i]-48)*6;
                    }
                    else if (count%6==4){
                        sum+=(n[i]-48)*4;
                    }
                    else if (count%6==5){
                        sum+=(n[i]-48)*5;
                    }
                    count++;
                    if (i==0){
                        flag++;
                    }
                }
                
                if (flag==3&&sum%7==0){
                    flag++;
                }
            }
            printf("%s\n", flag==4?"PREMIADO":"TENTE NOVAMENTE");
        }
    }
}