#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    set<int>myset;
    set<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        myset.insert(in);
    }
    for (it = myset.begin(); it!=myset.end(); it++)
    {
        sum+=*it;
    }
    cout << sum;
}