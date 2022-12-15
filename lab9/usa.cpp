#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w",stdout);
    
    string s;
    int x;
    map<string,int> Ms;
    map<string,int> ::iterator it;
    while (cin >> s >> x)
    {
        Ms[s]+=x;
    }
    for (it=Ms.begin(); it!=Ms.end();it++)
    {
       cout << it->first << ' ' << it->second;
    }
    return 0;
}