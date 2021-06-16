#include <iostream>
using namespace std;
 
int main(){
    int n, K, i;
    cout <<"Enter N: "; cin >>n;
    int a[n];

    for (i=0; i<n; ++i){
    cin >> a[i];
    }

    for(i=0; i<n; ++i){
        if(a[i]%2 == 0){
            cout << a[i] << " ";
        }
    }
    cout << endl;
    for(i=n-1; i>=0; --i){
        if(a[i]%2!=0 || a[i] == 1){
            cout << a[i] << " ";
        }

    }

}