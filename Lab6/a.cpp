#include <iostream>

using namespace std;
int Summa(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << Summa(x,y);
    return 0;
}