//Задача 3
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int A;
    double r;
    cout << "Enter R:";
    cin >> r;
    cout << "Enter A:";
    cin >> A;
    switch (A)
    {
    case 1:
        cout << r;
        break;
    case 2:
        cout << r*2;
        break;
    case 3:
        cout << M_PI*r*2;
        break;
    case 4:
        cout << M_PI*r*r;
        break;
    default:
        break;
    }

}