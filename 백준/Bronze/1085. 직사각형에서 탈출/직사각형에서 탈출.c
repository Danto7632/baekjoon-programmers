#include <stdio.h>

int main() {
    int x, y, w, h, i=0;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    while ((x!=w && y!=h)&&(x!=0 && y!=0)){
        if ((x>w-x?w-x:x)>(y>h-y?h-y:y)){
            if(y > h-y){
                y++;
                i++;
            }
            else{
                y--;
                i++;
            }
        }
        else {
            if (x > w-x){
                x++;
                i++;
            }
            else{
                x--;
                i++;
            }
        }
    }
    printf("%d", i);
}