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
    int n,c;
    cin >> n;
    c=log2(n);
    if(n==Power(c)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}