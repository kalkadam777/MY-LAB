#include <iostream>

using namespace std;

int F(int a){
    if(a>0){
        return a*F(a-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    cout << F(n)/(F(k)*F(n-k));
    return 0;
}