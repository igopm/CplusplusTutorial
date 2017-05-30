#include <iostream>
using namespace std;
//int main()
//{
//    cout << "Hello User!" << endl;
//    return 0;
//}

int main(){
    setlocale(0, "");
       /*7*/ int a, b; // объявление двух переменных a и b целого типа данных.
       cout << "Enter first number: ";
       cin >> a; // пользователь присваивает переменной a какое-либо значение.
       cout << "Enter second number: ";
       cin >> b;
       /*12*/  int c = a + b; // новой переменной c присваиваем значение суммы введенных пользователем данных.
       cout << "Sum nuburs = " << c << endl; // вывод ответа.
    return 0;
}
