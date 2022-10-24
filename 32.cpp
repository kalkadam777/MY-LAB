#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c;
    cout << boolalpha << ((c*c == a*a + b*b) or (a*a == b*b +c*c) or (b*b== a*a +c*c));
    return 0;
}