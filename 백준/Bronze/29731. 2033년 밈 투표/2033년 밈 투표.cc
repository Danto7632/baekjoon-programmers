#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,count;
    string str;
    vector<string> GY={ "Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop" };
    cin >> n;
    for (int i=0;i<n;i++){
        getline(cin>>ws, str);
        count=0;
        for (int j=0;j<7;j++){
            if (GY[j]==str){
                count++;
            }
        }
        if (count==0){
            cout << "Yes";
            break;
        }
    }
    if (count==1){
        cout << "No";
    }
}