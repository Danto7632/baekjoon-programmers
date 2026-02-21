#include <iostream>

using namespace std;

int main() {
    int X,Y;
    cin >> X >> Y;
    while (1){
        if (X<=Y){
            cout << "All positions change in year " << X << "\n";
            X+=60;
        }
        else {
            break;
        }
    }
}