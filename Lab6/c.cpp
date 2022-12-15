#include <iostream>
#include <cmath>

using namespace std;
void Dev(int a[],int b[], int n,int c){
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        if(a[i]==b[j]){
         c++;
         a[i] = 0;
         b[j] = 0;
         break;
        }
      }
   }
   cout << c;
}
int main(){
   int n,c=0;
   cin >> n;
   int a[n],b[n];
   for (int i = 0; i < n; i++)
   {
     cin >> a[i];
   }
   for (int j = 0; j < n; j++)
   {
      cin >> b[j];
   }
   Dev(a,b,n,c);
   return 0;
}