# include <iostream>
# include <cmath>

using namespace std;

int main (){
   int n,a,b;
   cin >> b >> a;
   n = log2(b/a);
   if(n == log2(b/a)){
    cout << "YES " << n;
   }
   else{
    cout << "NO " << n;
   }
    return 0;
}
