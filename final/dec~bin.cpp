#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int rem,i = 1;
    long long bin = 0;
    while (n!=0)
    {
        rem = n%2;
        n/=2;
        bin+=i*rem;
        i*=10;
    }
    cout << bin;
    return 0;
}