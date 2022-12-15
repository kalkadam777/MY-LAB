#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int mtx[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mtx[i][j];
        }
        
    }
     for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(pow(int (sqrt(mtx[i][j])),2)==mtx[i][j]){
                mtx[i][j]=sqrt(mtx[i][j]);
            }
            cout << mtx[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

