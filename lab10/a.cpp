#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int x;
    cin >> x;
    vector<string>str;
    vector<int>n;
    for (int i = 0; i < x ; i++)
    {
       string s;
       int c;
       cin >> s >> c;
       str.push_back(s);
       n.push_back(c);
    }
    sort(str.begin(),str.end());
    sort(n.begin(),n.end());
    for (int i = 0; i < x; i++)
    {
        cout << str[i] << ' ' << n[i] << endl;
    }
    return 0;
}