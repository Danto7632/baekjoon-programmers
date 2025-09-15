#include <iostream>

using namespace std;

int main() {
    int dj,price;
    cin >> dj >> price;

    if (dj > 19){
        price = price*75/100>price-2000?price-2000:price*75/100;
    }
    else if (dj > 14){
        price = price*90/100>price-2000?price-2000:price*90/100;
    }
    else if (dj > 9){
        price = price*90/100>price-500?price-500:price*90/100;
    }
    else if (dj > 4){
        price = price-500;
    }

    cout << (price<0?0:price);
}