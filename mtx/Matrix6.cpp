#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m,q;
    cin >> n >> m >> q;
    int mtx[n][m];
    for (int j=0; j < m; j++)
    {
        cin >> mtx[0][j];
        for (int i = 1; i < n; i++)
    {
            for (int j = 0;  j< m; j++)
            {
                mtx[i][j] = mtx[i-1][j]*q;
            }
    }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j< m; j++)
        {
            cout << mtx[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}