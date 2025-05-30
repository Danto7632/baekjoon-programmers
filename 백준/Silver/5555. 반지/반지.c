#include <stdio.h>
#include <string.h>

int main() {
    int n,len,count=0;
    char str[11],ring[11];
    scanf("%s", str);
    len = strlen(str);
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%s", ring);
        for (int j=0;j<10;j++){
            for (int k=0;k<len;k++){
                if (str[k]==ring[(j+k)%10]){
                    if (k==len-1){
                        count++;
                        j=10;
                    }
                    continue;
                }
                else {
                    break;
                }
            }
        }
    }
    printf("%d", count);
}