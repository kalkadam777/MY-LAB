# include <iostream>
# include <cmath>

using namespace std;

int main (){
   float n,a,b;
   cin >> a >> b;
   n = log2(b/a);
   if(a*pow(2,n)==b){
    cout << "YES " << n;
   }
   else{
    cout << "NO ";
   }
    return 0;
}