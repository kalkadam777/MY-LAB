#include <iostream>

using namespace std;

int main(){
    int n,c=0,z=0;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
   for (int s = 1; s < n; s++)
   {
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(i+s==j){
                c+=arr[i][j];
                }
            else if(i==j+s){
                z+=arr[i][j];
            }
        }
    }
   }
   if(c==z){
    cout << "Perfect.";
   }
   else{
    cout << "Not perfect.";
   }
    return 0;
}