#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<string>st;
    set<string>::iterator it;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (st.insert(s).second==true)
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
        
    }
    



    return 0;
}