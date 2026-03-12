#include <iostream>

using namespace std;

int main() {
    int N,student,apple,sum=0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> student >> apple;
        sum+=apple%student;
    }
    cout << sum;
}