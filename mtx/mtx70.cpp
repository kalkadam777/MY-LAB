#include <iostream>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
   int n,m,k;
   cin >> n >> m >> k;
   int mtx[n][m];
   for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        mtx[i][j] = rand()%50+1;
        }
    }
   cout << endl;
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < m; j++)
        {
        cout << mtx[i][j] << '\t';
        } 
        cout << endl;
   }
   cout << endl;
    for (int j = 0; j < m; j++)
        {
        cout << mtx[k][j] << '\t';
        } 
    return 0;
}
