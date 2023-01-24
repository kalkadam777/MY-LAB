#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    set<int>s1;
    set<int>s2;
    set<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        s1.insert(a);
        if (s.find(a)!=s.end())
        {
            s2.insert(a);
        }
    }
    for(it = s2.begin(); it != s2.end(); it++){
        cout << *it << ' ';
    }
    return 0;
}