#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,x,y,temp,where;
    cin >> n;
    vector<int> cup(n,0);
    cup[0]=1;
    where=1;
    for (int i=0;i<n;i++){
        cin >> x >> y;
        temp=cup[x-1];
        cup[x-1]=cup[y-1];
        cup[y-1]=temp;
        if (cup[x-1]==1){
            where=x;
        }
        else if (cup[y-1]==1){
            where=y;
        }
    }
    cout << where;
}