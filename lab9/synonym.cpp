#include <iostream>
#include <map>

using namespace std;

int main (){
    map<string,string> syn;
    map<string,string>:: iterator it;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s,s2;
        cin >> s >> s2;
        syn[s] = s2;
    }
    string s1;
    cin >> s1;
    for (it= syn.begin();it!=syn.end(); it++)
    {
        if (s1==it->second)
        {
          cout << it->first << endl;
        }
        else if(s1==it->first){
            cout << it->second << endl;
        }
    }
    return 0;
}