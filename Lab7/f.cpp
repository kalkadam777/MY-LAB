#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int c=0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i]-='0';
        if (str[i]%2==0)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}