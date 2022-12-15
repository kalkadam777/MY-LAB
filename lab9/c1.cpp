#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>NameandAge;
    map<string,int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        // nameandAge.insert(make_pair(s,x));
        NameandAge[s] = x;
    }
    
    for (it = NameandAge.begin(); it != NameandAge.end(); it++)
    {
        // cout << *it.first << ' ' << *it.second << endl;
        cout << it->first << ' ' << it->second << endl;
    }
    
   
    return 0;
}