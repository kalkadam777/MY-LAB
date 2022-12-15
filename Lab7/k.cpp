#include <iostream>

using namespace std;


int main(){
    int max=-1e9;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i]-='0';
    }
    
     for (int i = 0; i < str.length(); i++)
    {
        if (max<str[i])
        {
            max=str[i];
        }
    }
    cout << max;
    return 0;
}