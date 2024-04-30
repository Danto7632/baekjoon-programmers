#include <stdio.h>

int main(){
    int n, x, y, minx, miny, maxx, maxy;
    scanf("%d", &n);
    scanf("%d %d", &x, &y);
    minx=x;
    miny=y;
    maxx=x;
    maxy=y;
    
    for (int i=1;i<n;i++){
        scanf("%d %d", &x, &y);
        if (x > maxx){
            maxx=x;
        }
        else if (x < minx){
            minx=x;
        }
        if (y > maxy){
            maxy=y;
        }
        else if (y < miny){
            miny=y;
        }
    }
    printf("%d", (maxx-minx)*(maxy-miny));
}