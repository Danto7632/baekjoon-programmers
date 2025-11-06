#include <iostream>

using namespace std;

int main() {
    double w,h;
    cin >> w >> h;
    if (w/(h*h)>25){
        cout << "Overweight";
    }
    else if (w/(h*h)>=18){
        cout << "Normal weight";
    }
    else {
        cout << "Underweight";
    }
}