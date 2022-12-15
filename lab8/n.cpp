#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n,a,b;
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
        if(*it%2!=0){
            cout << *it << ' ';
        }
    }
    
}