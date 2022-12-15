#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
         arr[i][j]=i*j;
         if(i==0){
            arr[i][j]=j;
         }
         else if (j==0){
            arr[i][j]=i;
         }
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}