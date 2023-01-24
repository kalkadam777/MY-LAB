#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,x;
    cin >> n;
    int i = 1;
    while ( x <= n)
    {
        cout << x << ' ';
        i++;
        x = i*i;
    }
    return 0;
}