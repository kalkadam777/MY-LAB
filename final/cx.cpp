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
        string s,c;
        cin >> s >> c;
        mp[s] = c;
    }
    string m;
    cin >> m;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->first == m){
            cout << it->second;
        }
        else if(it->second == m){
            cout << it->first;
        }
    }
    return 0;
}