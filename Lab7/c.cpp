#include <iostream>

using namespace std;

int main(){
    int n,k,c=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    cin >> k;
   for (int i = 0; i < n; i++)
   {
    if(arr[i]==k){
        c++;
    }
   }
   if (c>0)
   {
    cout << "Yes";
   }
   else{
    cout << "No";
   }
   
    




}