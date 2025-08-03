#include <iostream>

using namespace std;

int main() {
    int limit,record;
    cin >> limit >> record;
    if (record-limit>30){
        cout << "You are speeding and your fine is $500.";
    }
    else if (record-limit>20){
        cout << "You are speeding and your fine is $270.";
    }
    else if (record-limit>0){
        cout << "You are speeding and your fine is $100.";
    }
    else {
        cout << "Congratulations, you are within the speed limit!";
    }
}