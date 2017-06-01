#include <iostream>
#include <math.cpp>
#include <branch.cpp>
using namespace std;

int main(){
    setlocale(0,"");
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum nuburs = " << plus_number(a,b)<< endl;
    for (int i=1; i<= plus_number(a,b); i++){
        cout<<  bran(i)<< endl;}

    return 0;
}
