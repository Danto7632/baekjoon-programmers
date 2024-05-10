#include <stdio.h>

int main() {
    int n, answer=2000, sum, count;
    scanf("%d", &n);

    for (int i=0;i*5<=n;i++){
        sum = i*5;
        count = i;
        while (sum<n){
            sum += 3;
            count++;
        }
        if (sum == n){
            if (answer > count){
                answer = count;
            }
        }
    }
    if (answer == 2000){
        answer = -1;
    }
    printf("%d", answer);
}