//Дано число А и степень P, найти Ap
#include <iostream>
using namespace std;
int main(){
    int A, p, AB;
    cin >> A >> p;
    AB = A;
    for (int i = 1; i < p; ++i) A = A*AB;
    cout << A;
}