#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    set<int>s,s1,s2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
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
    cout << s2.size();
    return 0;
}