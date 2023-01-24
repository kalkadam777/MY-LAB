#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int i =1;
    while (i < n)
    {
       i*=2;
    }
    if (i == n)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    return 0 ;
}