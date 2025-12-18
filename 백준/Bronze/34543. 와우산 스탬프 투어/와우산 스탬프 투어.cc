#include <iostream>

using namespace std;

int main() {
    int a,b,score=0;
    cin >> a >> b;
    score=a*10;
    if (a>2){
        score+=20;
    }
    if (a==5){
        score+=50;
    }
    if (b>1000){
        score-=15;
    }
    if (score<0){
        score=0;
    }
    cout << score;
}