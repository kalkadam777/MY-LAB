#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> myset;
    set<int>::iterator it;
    for (int i = 0; i < n; i++)
    {   
        int in;
        cin >> in;
        myset.insert(in);
    }
    for (it = myset.begin(); it!=myset.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << myset.size();
}