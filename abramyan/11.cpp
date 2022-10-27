# include <iostream>

using namespace std;

int main (){
    int a,b;
    cin >> a >> b;
    if ((a!=b) and (a>b)) {
        cout << a+a << " " << b+a;
    }
    else if ((a!=b) and (b>a)) {
        cout << a+b << " " << b+b;
    }
    else {
        cout << a << " " << b;
    }
    return 0;
}