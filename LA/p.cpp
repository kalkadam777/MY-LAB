#include <iostream>
#include <algorithm>

using namespace std;

int main(){
   string str;
   cin >> str;
   for (int i = 0; i < str.length(); i++)
   {
     if(str[i]>='a' and str[i]<'z'){
        str[i]+=1;
     }
     else{
        str[i]='a';
     }
     cout << str[i];
   }
   
    return 0;
}