#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    string name;
    int korean;
    int english;
    int math;
};

bool compare(const student& p1, const student& p2);

int main() {
    int n;
    cin >> n;
    vector<student> member(n);
    for (int i=0;i<n;i++){
        cin >> member[i].name >> member[i].korean >> member[i].english >> member[i].math;
    }
    sort(member.begin(),member.end(),compare);

    for (int i=0;i<n;i++){
        cout << member[i].name << "\n";
    }
}

bool compare(const student& p1, const student& p2){
    if (p1.korean > p2.korean){
        return true;
    }
    else if (p1.korean==p2.korean){
        if (p1.english < p2.english){
            return true;
        }
        else if (p1.english == p2.english){
            if (p1.math > p2.math){
                return true;
            }
            else if (p1.math == p2.math){
                return p1.name<p2.name;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}