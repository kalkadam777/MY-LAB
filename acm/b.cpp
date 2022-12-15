#include <iostream>

using namespace std;
    int IsLetter(char ch){
        if (ch>='A' and ch<='Z' or ch>='a' and ch<='z')
            return 1;
            return 0;
    }

int main(){
    int c=0;
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
     c+=IsLetter(str[i]);   
    }
    cout << c;
}