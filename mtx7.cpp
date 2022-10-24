#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    int m,n,k;
    cin >> m >> n >> k;
    int mtx[m][n];
    for ( int i = 0; i < n; i++)
    {
        mtx[i][0] = mtx[k][0];
        
        for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < m; j++)
            {
                mtx[i][j] = rand()%21;
            }
    }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mtx[i][j] << '\t';
        }
        cout << endl;
    }
    cout << mtx[k];
    return 0;
}