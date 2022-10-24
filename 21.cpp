#include <iostream>

using namespace std;

int main() {
 int n, s=1;
 cin >> n;
 while (n>0)
 {
  if (s%2==0 and s%7!=0)
  {
   n -= 4;
  }
  else if (s % 2 != 0 and s % 7 != 0) {
   n += 3;
  }
  s++;
 }
 cout << s;
}

