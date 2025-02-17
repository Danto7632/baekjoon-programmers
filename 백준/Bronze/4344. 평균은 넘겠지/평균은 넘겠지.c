#include <stdio.h>

int main() {
    int n, score[1001], sum=0;
    double m, count=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%lf", &m);
        for (int j=0;j<m;j++){
            scanf("%d", &score[j]);
            sum+=score[j];
        }
        sum/=m;
        for (int j=0;j<m;j++){
            if (score[j]>sum){
                count++;
            }
        }
        printf("%.3f%%\n", count/m*100);
        count=0;
        sum=0;
    }
}