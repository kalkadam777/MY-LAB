#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>

using namespace std;

int main(){
    string str;
    int n;
    cin >> n;
    map<string,string>mp;
    map<string,string>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s,x;
        cin >> s >> x;
        mp[s] = x;
    }
    cin >> str;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->first == str){
            cout << it->second;
        }
    }
    return 0;
}
/*input
3
word slova 
test test
thin tonkyy
thin

output
tonkyy
*/