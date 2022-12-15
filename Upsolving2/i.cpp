#include <iostream>

using namespace std;

int main(){
    int n; 
    
    cin >> n;
    int arr[n][n];
    int max=-1e9;
    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        cin >> arr[i][j];
    }
    }
    for (int i = 0; i < n; i++)
    { 
        max = -1e9;
        for (int j = 0; j < n; j++)
        {
            if(max < arr[i][j])
                max = arr[i][j];
        }
        for(int j = 0; j < n; j++){
            arr[i][j] = max;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}