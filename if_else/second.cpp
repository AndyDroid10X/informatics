// Саша и Ян играют в лотерею. Им дают три числа X, Y и Z. Саша выигрывает если: 
// а) сумма всех чисел положительная и четная
// б) произведение всех чисел меньше 1000
// Ян выигрывает во всех остальных случаях. Определите, кто победит.

#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    if (((x+y+z>0) && ((x+y+z)%2==0)) || (x+y+z)<1000){
        cout << "Sasha won";
    } 
    else cout << "Yan won";
}