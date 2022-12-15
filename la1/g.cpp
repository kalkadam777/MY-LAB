#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='1' and str[i+1]=='1')
        {
            str.erase(i,2);
            i--;
        }
        
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
}