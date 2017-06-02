#include <iostream>
#include <math.cpp>
#include <branch.cpp>
#include <arr.cpp>
#include <string>
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
    int dc=(plus_number(a,b) > 10) ? 10 : plus_number(a,b);

    for (int as = 0; as < dc; as++) {
        std::cout << mynumbers[as] << std::endl;
    }

    return 0;
}
