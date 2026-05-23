#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    if (s.length()==4||s.length()==6){
        for (int i=0;i<s.length();i++){
            if (!(s[i]>47&&s[i]<58)){
                break;
            }
            else if (i+1==s.length()){
                answer=true;
            }
        }
    }
    return answer;
}