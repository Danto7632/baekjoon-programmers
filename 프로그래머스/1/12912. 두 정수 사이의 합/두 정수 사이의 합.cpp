#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a>b){
        answer=(long long)(a-b+1)*(a+b)/2;
    }
    else {
        answer=(long long)(b-a+1)*(a+b)/2;
    }
    return answer;
}