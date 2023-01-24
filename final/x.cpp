#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>myset;
    set<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        myset.insert(in);
    }
    cout << myset.size();
    return 0;
}