#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n,m;
  cin >> n;
  int mtx[n][n];
  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
          mtx[i][j] = i*j;
              if (i==0){
                mtx[i][j] = j;
          } 
          else if (j==0){
            mtx[i][j] = i;
          }
      }
  }
  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
        cout << mtx[i][j] << ' ';
      }
      cout << endl;
  }
  return 0;
}