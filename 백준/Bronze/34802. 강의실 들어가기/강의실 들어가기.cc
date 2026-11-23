#include <iostream>

using namespace std;

int main() {
    double sum=0,sum2=0,t,k;
    string str,str2;
    cin >> str;
    cin >> str2;
    cin >> t;
    cin >> k;
    str[0]!=0?sum+=(str[0]-48)*36000:0;
    str[1]!=0?sum+=(str[1]-48)*3600:0;
    str[3]!=0?sum+=(str[3]-48)*600:0;
    str[4]!=0?sum+=(str[4]-48)*60:0;
    str[6]!=0?sum+=(str[6]-48)*10:0;
    str[7]!=0?sum+=str[7]-48:0;
    str2[0]!=0?sum2+=(str2[0]-48)*36000:0;
    str2[1]!=0?sum2+=(str2[1]-48)*3600:0;
    str2[3]!=0?sum2+=(str2[3]-48)*600:0;
    str2[4]!=0?sum2+=(str2[4]-48)*60:0;
    str2[6]!=0?sum2+=(str2[6]-48)*10:0;
    str2[7]!=0?sum2+=str2[7]-48:0;
    cout << (sum+t-t*k/100<=sum2?1:0);
}