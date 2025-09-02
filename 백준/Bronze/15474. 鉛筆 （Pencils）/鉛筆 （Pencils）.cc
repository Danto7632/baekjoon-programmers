#include <iostream>

using namespace std;

int main() {
    int N,A,B,C,D;
    cin >> N >> A >> B >> C >> D;

    cout << ((N/A+(N%A==0?0:1))*B>(N/C+(N%C==0?0:1))*D?(N/C+(N%C==0?0:1))*D:(N/A+(N%A==0?0:1))*B);
}