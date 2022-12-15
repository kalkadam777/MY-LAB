#include <iostream>

using namespace std;
void topper(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='a' and str[i]<='z'){
            cout << char(str[i]-32);
        }
        else{
            cout << str[i];
        }
    }
    
}
int main(){
    string str;
    cin >> str;
    topper(str);
    return 0;
}