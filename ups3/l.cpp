#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    for (int i = 0; i < str.size(); i++)
    {
        if((str[i]>='A' and str[i]<='Z') or (str[i]>='a' and str[i]<='z')){
            if(str[i]!='Z' and str[i]!='z'){
                str[i]++;
            }
            else{
                str[i]-=25;
            }
        }
    }
    cout << str;
    return 0;
}