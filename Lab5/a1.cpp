#include <iostream>
#include <cmath>

using namespace std;
void isDiff(int a[],int b[], int d[], int n){
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        if(i==j){
         d[i]= abs(a[i]-b[j]);
        }
      }
      cout << d[i] << " ";
   }
}
int main(){
   int n;
   cin >> n;
   int a[n],b[n],d[n];
   for (int i = 0; i < n; i++)
   {
     cin >> a[i];
   }
   for (int j = 0; j < n; j++)
   {
      cin >> b[j];
   }
   isDiff(a,b,d,n);
   return 0;
}