#include <iostream>

using namespace std;
void Str(string str){
    for (int i = 0; i < str.length(); i++)
    {
        if(i%2==0){
        str[i] = toupper(str[i]);
        }
    }
    cout << str;
}
int main(){
    string str;
    cin >> str;
    Str(str);
    return 0;
}