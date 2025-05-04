#include <stdio.h>
#include <string.h>

int main() {
    int len,num,count=0;
    char arr[1000001];
    scanf("%s", arr);
    len = strlen(arr);
    num = arr[0];
    for (int i=1;i<len;i++){
        if (num!=arr[i]){
            num=arr[i];
            count++;
        }
    }
    printf("%d", (count+1)/2);
}