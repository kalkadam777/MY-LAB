#include <iostream>
#include <cmath>

using namespace std;
long long  Power(int n){
    if(n>0){
        return 2*Power(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int b;
    cin >> b;
   cout << Power(b);
    return 0;
}