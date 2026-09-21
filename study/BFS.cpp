#include <iostream>
#include <vector>
#include <queue> // BFS를 위한 큐 라이브러리 추가

using namespace std;

// BFS 함수는 재귀를 쓰지 않고 큐(Queue)와 반복문을 사용합니다.
void bfs(const vector<vector<int>>& graph, int start, vector<bool>& visited) {
    queue<int> q;

    // 1. 시작 정점을 큐에 넣고 방문 처리
    q.push(start);
    visited[start] = true;

    // 2. 큐가 빌 때까지 반복
    while (!q.empty()) {
        // 큐의 맨 앞에 있는 정점을 꺼냅니다.
        int cur = q.front();
        q.pop();
        
        // 현재 방문한 정점 출력
        cout << cur << " ";

        // 3. 현재 정점(cur)의 이웃 정점(nxt)들을 확인
        for (int nxt : graph[cur]) {
            // 아직 방문하지 않은 이웃이 있다면
            if (!visited[nxt]) {
                visited[nxt] = true; // 방문 표시를 '큐에 넣을 때' 미리 해줍니다.
                q.push(nxt);         // 큐에 삽입
            }
        }
    }
}

int main() {
    // 인접 리스트 그래프 정의 (질문하신 데이터와 동일)
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

    // 방문 여부를 기록할 배열 (크기 9, false로 초기화)
    vector<bool> visited(9, false);

    cout << "BFS 방문 순서: ";
    // 1번 정점부터 탐색 시작
    bfs(graph, 1, visited); 
    cout << "\n";

    return 0;
}
