#include <iostream>
#include <map>

using namespace std;

int main() {
    int N,min=1001,count=0;
    string key,change[1001];
    map<string,int> m;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> key;
        m[key]=i;
    }
    for (int i=0;i<N;i++){
        cin >> change[i];
    }
    for (int i=N-1;i>=0;i--){
        min=min<m[change[i]]?min:m[change[i]];
        if (m[change[i]]>min){
            count++;
        }
    }
    cout << count;
}