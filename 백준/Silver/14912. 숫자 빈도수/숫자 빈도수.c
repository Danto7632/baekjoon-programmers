#include <stdio.h>

int main() {
    int a,b,save,count=0;
    scanf("%d %d", &a, &b);
    for (int i=1;i<=a;i++){
        save = i;
        while(save!=0){
            if (save%10==b){
                count++;
            }
            save/=10;
        }
    }

    printf("%d", count);
}