#include <iostream>
#include <map>
#include <iterator>
// count all letters

using namespace std;

int main(){
    string s;
    cin >> s;

    map<char,int> cnt;
    map<char,int> ::iterator it;
    for (size_t i = 0; i < s.size(); i++)
    {
        cnt[s[i]]++;
    }
    for (it= cnt.begin(); it!=cnt.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        break;
    }

    return 0;
}