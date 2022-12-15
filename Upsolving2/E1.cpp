#include <iostream>

using namespace std;

int main(){
    int rez=0;
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        str[i]-=48;
    }
    for (int i = 1; i < str.length(); i++)
    {
        rez+=str[i];
    }
    if (str[0]==rez%10)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    



    return 0;
}