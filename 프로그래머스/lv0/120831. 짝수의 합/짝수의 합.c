#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int(n)) {
    int answer = 0;
    while (0<n)
    {
        if(n % 2 == 0)
        {   
            answer += n;
            n-=2;
        }
        else
        {
            n-=1;
        }
    }
    return answer;
}