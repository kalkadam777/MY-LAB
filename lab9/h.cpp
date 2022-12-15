#include <iostream>
#include <vector>
#include <iterator>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    map<string, int>::iterator it;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if(!mp[s]){
        mp[s] = i;
        }
    }
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " "<< it->second << endl;
    }

    
    

    

    return 0;
}