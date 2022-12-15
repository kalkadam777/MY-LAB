#include <iostream>
#include <cmath>

using namespace std;
void Positive(int n){
    if(n<0){
        cout << abs(n);
    }
    else{
        cout << n;
    }
}
int main (){
    int n;
    cin >> n;
    Positive(n);
    return 0;
}