#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        cin >> arr[i][j];
       }
    }
    cout << endl;
    int s=0;
    int rez=0;
       for (int s = 0; s < n; s++)
       { 
        for (int j = 0; j < n-1; j++)
       {
       rez+=arr[s][j];
       cout << rez << ' ';
       }
       
       }
       
    return 0;
}
/*
5 4
1 2 3 4  
1 2 3 4  
2 2 2 2  
2 2 3 2 
3 2 3 4 
~ 3 3 2 2 3
*/