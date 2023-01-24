#include <iostream>

using namespace std;

int main(){
    int n,rez=0;
    while (n!=0)
    {
        cin >> n;
        rez+=n;
    }
    cout << rez;
    return 0;
}