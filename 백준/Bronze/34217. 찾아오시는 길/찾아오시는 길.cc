#include <iostream>

using namespace std;

int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (A+C==B+D){
        cout << "Either";
    }
    else if (A+C>B+D){
        cout << "Yongdap";
    }
    else {
        cout << "Hanyang Univ.";
    }
}