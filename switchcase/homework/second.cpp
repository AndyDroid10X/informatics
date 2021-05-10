//Case7

#include <iostream>
using namespace std;

int main() {
    int inp;
    double data;
    cout << "Enter a data:";
    cin >> data;
    cout << "Enter a num:";
    cin >> inp;
    switch (inp)
    {
    case 1:
        cout << data << " kg";
        break;
    case 2:
        cout << data/1000000 << " kg";
        break;
    case 3:
        cout << data/1000 << " kg";
        break;
    case 4:
        cout << data*1000 << " kg";
        break;
    case 5:
        cout << data*100 << " kg";
        break;
    default:
        break;
    }
}