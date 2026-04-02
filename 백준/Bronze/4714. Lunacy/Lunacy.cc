#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double w;
    cout << fixed << setprecision(2);
    while (1){
        cin >> w;
        if (w<0){
            break;
        }
        cout << "Objects weighing " << w << " on Earth will weigh " << w*0.167 << " on the moon.\n";
    }
}