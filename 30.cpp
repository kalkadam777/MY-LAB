# include <iostream>

using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c;
    cout << boolalpha << ((a==b) and (b==c) and (a==c));
    return 0;
}