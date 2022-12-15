#include <iostream>

using namespace std;

int main(){
    int n,m,d;
    cin >> n >> m;
    int mtx[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mtx[i][j];
        }
        
    }
    cin >> d;
    int max = mtx[0][0];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(mtx[i][j]>max){
            max = mtx[i][j];
           }
        }
    }
    if(max>d){
        cout << "Penalty!";
    }
    else {
        cout << "No penalty for today.";
    }
    return 0;
}