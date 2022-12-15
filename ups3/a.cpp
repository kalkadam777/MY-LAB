#include <iostream>
#include <string>

using namespace std;

bool isTruth(string s) {
  int c = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i]>='0' and s[i]<='9')
    {
      return 0;
    }
  }
  return 1;
}

int main() {
  string s;
  getline(cin, s);
  string t = "";
  for (int i = 0; i < s.length(); i++)
  {
    t += s[i];
    if (s[i] == ' ' or i==s.length()-1) {
      if (isTruth(t)) {
        cout << t << endl;
      }
      t = "";
    }
  }
}