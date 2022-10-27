#include <iostream>

using namespace std;

int main (){
int a,b,c;
    cin >> a >> b >> c;
    cout << boolalpha << (((a==b) and (a!=c) and (b!=c)) or ((b==c) and (b!=a) and (b!=c)) or ((a==c) and (a!=b) and (a!=c)));
    return 0;
}
