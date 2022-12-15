#include <iostream>

using namespace std;

int main(){
    int c=0,c1=0;
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A' and str[i]<='Z' ){
            c++;
        }
        else if(str[i]>='a' and str[i]<='z'){
            c1++;
        }
    }
    cout << c1 << ' ' << c;
    return 0;
}