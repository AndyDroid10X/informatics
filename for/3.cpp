//Дано число А и степень P, найти Ap
#include <iostream>
using namespace std;
int main(){
    int n, s;
    cin >> n;
    for (s=0; n>0; n=n) {
        s += n%10;
        n = n/10;
    }
    cout << s; 
}