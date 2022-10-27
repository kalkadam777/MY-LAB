#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    int n,m,d;
    cin >> n >> m >> d;
    int arr[n][m];
    for (int i=0; i<n; i++)
    {
        cin >> arr[i][0];
    }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)		
            {
                arr[i][j] = arr[i][j-1]+d;
            }
        }

     for(int i = 0; i < n; i++)
     {
        for(int j = 0; j < n; j++)
        {
           cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}