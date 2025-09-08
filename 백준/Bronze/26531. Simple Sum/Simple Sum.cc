#include <iostream>

using namespace std;

int main() {
    int num1,num2,num3;
    char op,trash;

    cin >> num1 >> op >> num2 >> trash >> num3;
    cout << (num1+num2==num3?"YES":"NO");
}