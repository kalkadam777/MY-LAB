#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>st;
    set<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        st.insert(in);
    }
    if (st.size()==n)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    


    return 0;
}