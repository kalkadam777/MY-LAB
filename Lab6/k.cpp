#include <iostream>

using namespace std;
void Sums(int n,int sum){
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    cout << sum;
}

int main(){
    int n,sum=0;
    cin >> n;
    Sums(n,sum);
    return 0;
}