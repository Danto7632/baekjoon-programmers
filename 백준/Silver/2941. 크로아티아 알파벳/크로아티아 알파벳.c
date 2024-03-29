#include <stdio.h>
#include <string.h>

int main(void) {
    int len, count = 0;
    char a[100]={0};

    scanf("%s", a);
    len = strlen(a);
    
    for (int i=0;i<len;i++){
        if (a[i]=='c' && a[i+1]=='=' || a[i+1]=='-') {
            i++;
        }
        else if (a[i]=='d' && (a[i+1]=='z' && a[i+2]=='=')) {
            i+=2;
        }
        else if (a[i]=='d' && a[i+1]=='-') {
            i++;
        }
        else if ((a[i]=='l' || a[i]=='n') && a[i+1]=='j') {
            i++;
        }
        else if ((a[i]=='s' || a[i]=='z') && a[i+1]=='=') {
            i++;
        }
        count++;
    }

    printf("%d", count);
}