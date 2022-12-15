#include <iostream>
#include <cmath>

using namespace std;
void isDiff(int a[],int b[], int n,int c=0){
   for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        if(a[i]==b[j]){
         c++;
        }
      }
      cout << c << ' ';
   }
}

int main(){
   int n,c=0;
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
   isDiff(a,b,n,c=0);
   return 0;
}