#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s,s1,s2;
    cin >> s >> s1;
    reverse(s1.begin(),s1.end());
    if (s==s1)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}