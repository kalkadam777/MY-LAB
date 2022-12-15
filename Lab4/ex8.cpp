#include <iostream>

using namespace std;

int main(){
    int cap=0,sml=0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
       if(str[i]>='a' and str[i]<='z'){
        cap++;
       }
    }
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='A' and str[i]<='Z'){
            sml++;
        }
    }
    cout << cap << ' ' << sml;
    return 0;
}