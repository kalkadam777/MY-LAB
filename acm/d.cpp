#include <iostream>
#include <cmath>

using namespace std;
int IsPrime(int a){
    for (int i = 2; i < a; i++)
    {
        if(a%i==0)
    }
    
    return a;
    return 0;
}

int main(){
    int n,c,k,sum;
    cin >> n >> c >> k;
    sum=IsPrime(n) + IsPrime(c) + IsPrime(k);
    cout << sum << endl;
    if(IsPrime(sum)==0){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    return 0;
}