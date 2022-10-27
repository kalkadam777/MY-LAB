#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int j=0; j<n; j++){
        cin >> arr[0][j];
    }
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)		
		{
			 arr[i][j] = arr[0][j];
		}
	}

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}