#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n,c;
    cin >> n;
    map<string,string>mp;
    map<string,string>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s,t;
        cin >> s >> t;
        mp[s] = t;
    }
    
    c = 0;
    for( it = mp.begin(); it = mp.end(); it++)
    {
        if(it->first.re)
    }
   



    return 0;
}