#include <iostream>

using namespace std;
void transpose(int n, int m){
    int mtx[n][m];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin >> mtx[i][j];
        }
        
    }
    for (int s = 0; s < m; s++)
    {
       for (int i = 0; i < n; i++)
       {
        cout << mtx[i][0+s] << ' ';
       }
       cout << endl;
    }
}

int main (){
    int n,m;
    cin >> n >> m;
    transpose(n,m);
    return 0;
}