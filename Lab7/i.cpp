#include <iostream>
#include <cmath>
using namespace std;

int digit(){
    int a;
    cin >> a;
    if(a == 0) 
    return 0;
    return a + digit();
}

int main(){
    cout << digit();
}