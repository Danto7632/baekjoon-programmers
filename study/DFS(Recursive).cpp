#include <iostream>
#include <vector>

using namespace std;

void dfs(const vector<vector<int>>& graph, int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";

    for (int nxt : graph[v]) {
        if (!visited[nxt]) {
            dfs(graph, nxt, visited);
        }
    }
}

int main() {
    // 인접 리스트 그래프 정의 (vector의 vector 구조)
    vector<vector<int>> graph = {
        {},          
        {2, 3, 8},   
        {1, 7},      
        {1, 4, 5},   
        {3, 5},      
        {3, 4},      
        {7},         
        {2, 6, 8},   
        {1, 7}       
    };

    // 방문 여부를 기록할 배열 (정점이 1~8번이므로 크기 9로 선언, false로 초기화)
    vector<bool> visited(9, false);

    cout << "DFS 방문 순서: ";
    // 1번 정점부터 탐색 시작
    dfs(graph, 1, visited); 
    cout << "\n";

    return 0;
}
