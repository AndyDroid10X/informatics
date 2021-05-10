//Задача 4
#include <iostream>
using namespace std;

int main(){
    string data, name, surname, year, pro;
    char letter;
    cout << "Enter name, surname, year and proffesion:";
    cin >> name;
    cin >> surname;
    cin >> year;
    cin >> pro;
    cout << "Enter a letter and data:";
    cin >> letter;
    cin >> data;
    switch (letter)
    {
    case 'n':
        if (data==name) cout << "YES";
        else cout << "NO";
        break;
    case 'l':
        if (surname==name) cout << "YES";
        else cout << "NO";
        break;
    case 'y':
        if (year==name) cout << "YES";
        else cout << "NO";
        break;
    case 'P':
        if (pro==name) cout << "YES";
        else cout << "NO";
        break;
    default:
        break;
    }

}