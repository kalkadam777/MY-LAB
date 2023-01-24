#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,string>mp;
    
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        string s,t;
        cin >> s >> t;
        map<string,string>::iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second == s){
                mp[it->first] = t;
                flag = true;
            }   
        }
        if(!flag){
            mp[s] = t;
        }
    }
    cout << endl;
     map<string,string>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ' ' << it->second << endl;
    }
    return 0;
}