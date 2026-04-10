#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    queue<int> answer;
    queue<int> q;
    cin >> n;
    for (int i=0;i<n;i++){
        q.push(i+1);
    }
    
    for (int i=0;i<n;i++){
        answer.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }

    for (int i=0;i<n;i++){
        cout << answer.front() << " ";
        answer.pop();
    }
}