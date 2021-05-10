//Case20
#include <iostream>
using namespace std;

int main() {
    int d,m;
    cout << "Enter day:";
    cin >> d;
 
    cout << "Enter month:";
    cin >> m;
    switch (m) {
    case 1:
       if (d>19) cout << "Водолей";
       else cout << "Козерог";
       break;
    case 2:
       if (d>18) cout << "Рыбы";
       else cout << "Водолей";
       break;
    case 3:
       if (d>20) cout << "Овен";
       else cout << "Рыбы";
       break;
    case 4:
       if (d>19) cout << "Телец";
       else cout << "Овен";
       break;
    case 5:
       if (d>20) cout << "Близнецы";
       else cout << "Телец";
       break;
    case 6:
       if (d>21) cout << "Рак";
       else cout << "Близнецы";
       break;
    case 7:
       if (d>22) cout << "Лев";
       else cout << "Рак";
       break;
    case 8:
       if (d>22) cout << "Дева";
       else cout << "Лев";
       break;
    case 9:
       if (d>22) cout << "Весы";
       else cout << "Дева";
       break;
    case 10:
       if (d>22) cout << "Скорпион";
       else cout << "Весы";
       break;
    case 11:
       if (d>22) cout << "Стрелец";
       else cout << "Скорпион";
       break;
    case 12:
       if (d>21) cout << "Козерог";
       else cout << "Стрелец";
       break;
   }
}