#include <iostream>

using namespace std;

int main(){
    char ch;
    string str;
    cin >> ch >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]!=ch)
        {
            cout << str[i];
        }
        
    }
    return 0;
}