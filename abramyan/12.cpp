# include <iostream>

using namespace std;

int main (){
   int a,b,c;
   cin >> a >> b >> c;
   if ((a>b) and (c>b)) {
    cout << b;
   }
   else if ((b>a)and (c>a) ) {
    cout << a;
   }
   else if ((b>c)and (a>c)) {
    cout << c;
   }
    return 0;
}
