#include <stdio.h>

int main(void) {
    char a[50]={0};
    double hak, sum=0, score, haksum=0;
    char b[2]={0};
    
    for (int i=0;i<20;i++) {
        
        scanf("%s %lf %s", a, &hak, b);
        switch (b[0]) {
            case 'A' :
                if (b[1]=='+')
                    score=4.5;
                if (b[1]=='0')
                    score=4.0;
                break;
            case 'B':
                if (b[1]=='+')
                    score=3.5;
                if (b[1]=='0')
                    score=3.0;
                break;
            case 'C':
                if (b[1]=='+')
                    score=2.5;
                if (b[1]=='0')
                    score=2.0;
                break;
            case 'D':
                if (b[1]=='+')
                    score=1.5;
                if (b[1]=='0')
                    score=1.0;
                break;
            case 'F':
                score=0.0;
                break;
            case 'P':
                sum -= hak*score;
                haksum -= hak;
                break;
        }
        sum += hak*score;
        haksum += hak;
    }
    printf("%.6f", sum/haksum);
}