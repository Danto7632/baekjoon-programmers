#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0, sub;
    if (n > 10) {
        sub = n / 10;
        k -= sub;
    }
    answer = 12000 * n + 2000 * k;
    
    return answer;
}