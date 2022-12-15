#include <iostream>

using namespace std;
void isdigit(int n,int* a,int* b,int cnt,int m){
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if(a[i]==b[j]){
      b[j]= b[m-1]; 
      m--;
      cnt++;
      break;
  }
    }
    
  }
 cout << cnt;
}

int main (){
  int n,cnt=0;
  cin >> n;
  int a[n];
  int b[n];
  int m=n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int j = 0; j < m; j++)
  {
    cin >> b[j];
  }
  isdigit(n,a,b,cnt,m);
  return 0;

}