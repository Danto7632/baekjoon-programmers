#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N,M,gn,kind;
    string group,name,str;
    vector<string> grouplist;
    map<string,vector<string>> list;
    cin >> N >> M;
    for (int i=0;i<N;i++){
        cin >> group >> gn;
        grouplist.push_back(group);
        for (int j=0;j<gn;j++){
            cin >> name;
            list[group].push_back(name);
        }
        sort(list[group].begin(),list[group].end());
    }
    for (int i=0;i<M;i++){
        cin >> str >> kind;
        if (kind==0){
            for (int j=0;j<list[str].size();j++){
                cout << list[str][j] << "\n";
            }
        }
        else {
            for (int j=0;j<N;j++){
                if (find(list[grouplist[j]].begin(), list[grouplist[j]].end(), str) != list[grouplist[j]].end()){
                    cout << grouplist[j] << "\n";
                }
            }
        }
    }
}