#include <iostream>

using namespace std;
void glasny(string str){
     for (int i = 0; i < str.length(); i++)
   {
    if(str[i]!='A' && str[i]!='a' && str[i]!='E' && str[i]!='e' && str[i]!='I' && str[i]!='i' && str[i]!='O' && str[i]!='o' && str[i]!='U' && str[i]!='u'){
        cout << str[i];
    }
   }
}

int main (){
    string str;
    getline(cin,str);
   glasny(str);
    return 0;
}
