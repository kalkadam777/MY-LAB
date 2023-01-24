#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>myset;
    set<int>::reverse_iterator rit;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        myset.insert(in);
    }
    for(rit = myset.rbegin(); rit != myset.rend(); rit++){
        cout << *rit << ' ';
    }
    return 0;
}