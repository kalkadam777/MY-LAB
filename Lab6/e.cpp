#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double Pif(int a, int b){
    a=a*a;
    b=b*b;
    
    return sqrt(a+b);
}

int main(){
    int a,b;
    cin >> a >> b; 
    cout << setprecision(4) << Pif(a,b);
  
}