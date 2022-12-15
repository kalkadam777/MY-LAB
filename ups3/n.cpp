#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i]>='A' and str[i]<='Z') or (str[i]>='a' and str[i]<='z'))
        {
            cout << str[i];
        }
        
    }
    return 0;
}