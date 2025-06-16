#include <iostream>

using namespace std;

int main() {
    int n,year,month;
    cin >> n;
    year = 2024+(n*7)/12;
    month = 1+(n*7)%12;
    cout << year << " " << month;
}