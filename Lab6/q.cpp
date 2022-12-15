#include <iostream>

using namespace std;
 double percent(double a,double b){
  double k;
   k= (b*100)/a;
   return k;
}

int main(){
    int n,m,k;
    cin >> n >> m;
    cout << percent(n,m);
    return 0;
}