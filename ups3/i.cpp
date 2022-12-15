#include <iostream>

using namespace std;

int main(){
    string s,s1;
    cin >> s >> s1;
    char ch;
    cin >> ch;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s1.size(); j++)
        {
            if(s[i]==s1[j]){
                s[i]=ch;
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
       cout << s[i];
    }
    return 0;
}