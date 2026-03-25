#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N,com,a;
    deque<int> d;
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i=0;i<N;i++){
        
        cin >> com;
        
        if (com==1){
            cin >> a;
            d.push_front(a);
        }
        else if (com==2){
            cin >> a;
            d.push_back(a);
        }
        else if (com==3){
            if (d.empty()){
                cout << "-1\n";
            }
            else {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (com==4){
            if (d.empty()){
                cout << "-1\n";
            }
            else {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (com==5){
            cout << d.size() << "\n";
        }
        else if (com==6){
            cout << d.empty() << "\n";
        }
        else if (com==7){
            if (d.empty()){
                cout << "-1\n";
            }
            else {
                cout << d.front() << "\n";
            }
        }
        else if (com==8){
            if (d.empty()){
                cout << "-1\n";
            }
            else {
                cout << d.back() << "\n";
            }
        }
    }
}