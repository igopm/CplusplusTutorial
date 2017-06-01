#include <iostream>
#include <plus.h>
#include <math.cpp>
using namespace std;

int main(){

    setlocale(0,"");
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum nuburs = " << plus_number(a,b)<< endl;

    return 0;
}

//int plus_number ()
//{
//    return 5;
//   return  a + b;
//   int a, int b
//}
//int minus_number (int a, int b)
//{
//    return  a - b;
//}
//int multiplication_number (int a, int b)
//{
//    return a * b;
//}
//double division_number (int a, int b)
//{
//    return a / b;
//}

