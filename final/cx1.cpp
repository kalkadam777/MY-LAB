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
        string one,two;
        cin >> one >> two;
        mp[one] = two;
        mp[two] = one;
    }
    string rez;
    cin >> rez;
    cout << mp[rez];
    return 0;
}