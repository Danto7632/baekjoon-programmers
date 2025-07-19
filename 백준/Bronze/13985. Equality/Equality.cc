#include <iostream>

using namespace std;

int main() {
	string str;
	getline(cin, str);
    
	cout << (str[0]-48+str[4]-48==str[8]-48?"YES":"NO");
}