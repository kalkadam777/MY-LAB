#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' and str[i]<='z' ){
            cout << char(str[i]-32);
        }
        else{
            cout << str[i];
        }
    }
    return 0;
}