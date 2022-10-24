#include <iostream>

using namespace std;

int main (){
    double n,rez=0;
    cin >> n;
    for (double i=0; i<n; i++){
        cout << (n+i)*(n+i) << " ";
        rez+=(n+i)*(n+i);
    }
    cout << "\nSum = " << rez;
    return 0;
}