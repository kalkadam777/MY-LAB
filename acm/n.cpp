#include <iostream>

using namespace std;

int main()
{ 
string str;
cin >> str;
for (int i = 0; i < str.length(); i++)
{
   cout << str[i] << "#";
   str.erase(str.length());
}
 
return 0;
}