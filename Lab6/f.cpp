#include <iostream>

using namespace std;
void Alzhan(string str,int n,int c=0){
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>='0' and str[i]<='9'){
            c++;
        }
    }
    if(c>=n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    string str;
    cin >> str; 
    int n,c=0;
    cin >> n;
    Alzhan(str,n,c);
    return 0;
}