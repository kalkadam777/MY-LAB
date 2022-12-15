#include <iostream>
#include <cmath>

using namespace std;
int Fib(int a){
   if (a<=1)
   {
    return a;
   }
   else{
    return Fib(a-1)+Fib(a-2);
   }
   
    
}

int main(){
    int n;
    cin >> n;
    cout << Fib(n-1);
    return 0;
}