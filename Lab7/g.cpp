#include <iostream>
#include <cmath>

using namespace std;
int Fact(int a){
    if (a>0)
    {
        return a*Fact(a-1);
    }
    else{
        return 1;
    }
    
}

int main(){
    int n;
    cin >> n;
    cout << Fact(n);
    return 0;
}