#include <iostream>

using namespace std;

int IsDigit(char c){
    if(c>='0' and c<='9')
        return 1;
    return 0;
}

int main (){
    int c=0;
    string str;
    getline(cin,str);
        for (int i = 0; i < str.length(); i++)
        {
            c += IsDigit(str[i]);
        }

        cout << c;
    
}