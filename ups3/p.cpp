#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.size()<2){
        if(s[0]=='1')
        cout<<"true";
        else if(s[0]=='0')
        cout<<"false";
    }
    else
    {
    cout<<s;
    }
}