# include <iostream>

using namespace std;

int main (){
  double a,rez=0,num =1.1,s=1;
  cin >> a;
  for (double i = 0; i<a; i++ ){
    cout << num *s << " ";
    rez+=num*s;
    num+=0.1;
    s*=-1;
  }
  cout << rez << endl;
      return 0; 
}