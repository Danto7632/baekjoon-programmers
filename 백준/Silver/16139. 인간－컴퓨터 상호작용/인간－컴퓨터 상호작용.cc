#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,b,c,count;
    vector<vector<int>> arr(26,vector<int>(200000,-1));
    char a;
    string str;
    cin >> str;
    cin >> n;
    for (int i=0;i<n;i++){
        count=0;
        cin >> a >> b >> c;
        if (arr[a-97][c]==-1){
            for (int i=0;i<=c;i++){
                if (str[i]==a){
                    count++;
                }
                arr[a-97][i]=count;
            }
        }
        cout << arr[a-97][c]-(b==0?0:arr[a-97][b-1]) << "\n";
    }
}