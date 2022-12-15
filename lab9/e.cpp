#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
   int n,c=0;
   cin >> n;
   map<string,int> mp;
   map<string,int> ::iterator it;
   for (int i = 0; i < n; i++)
   {
        string s;
        cin >> s;
        mp[s]++;
   }
   for (it = mp.begin(); it !=mp.end(); it++)
   {
        if(it->second==3){
            c++;
        }
   }
   cout << c;
    return 0;
}
