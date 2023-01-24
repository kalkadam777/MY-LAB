#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,string>mp;
    map<string,string>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s,t;
        cin >> s >> t;
        mp[s] = t;
    }
    string st;
    cin >> st;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->second == st){
            cout << it->first;
        }
        else if(it->first == st){
            cout << it->second;
        }
    }
    return 0;
}