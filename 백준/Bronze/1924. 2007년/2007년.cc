#include <iostream>

using namespace std;

int main() {
    int month,day;
    cin >> month >> day;
    for (int i=1;i<month;i++){
        if (i==2){
            day+=28;
        }
        else if (i==4||i==6||i==9||i==11){
            day+=30;
        }
        else {
            day+=31;
        }
    }
    if (day%7==0){
        cout << "SUN";
    }
    else if (day%7==1){
        cout << "MON";
    }
    else if (day%7==2){
        cout << "TUE";
    }
    else if (day%7==3){
        cout << "WED";
    }
    else if (day%7==4){
        cout << "THU";
    }
    else if (day%7==5){
        cout << "FRI";
    }
    else if (day%7==6){
        cout << "SAT";
    }
}