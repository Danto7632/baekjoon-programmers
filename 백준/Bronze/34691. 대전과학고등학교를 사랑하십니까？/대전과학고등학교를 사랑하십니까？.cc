#include <iostream>

using namespace std;

int main() {
    string str;
    while (cin>>str&&str!="end"){
        if (str=="animal"){
            cout << "Panthera tigris" << "\n";
        }
        else if (str=="tree"){
            cout << "Pinus densiflora" << "\n";
        }
        else {
            cout << "Forsythia koreana" << "\n";
        }
    }
}