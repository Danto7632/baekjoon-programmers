#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    if (str=="miss"){
        cout << 0;
    }
    else if (str=="bad"){
        cout << n*200;
    }
    else if (str=="cool"){
        cout << n*400;
    }
    else if (str=="great"){
        cout << n*600;
    }
    else if (str=="perfect"){
        cout << n*1000;
    }
}