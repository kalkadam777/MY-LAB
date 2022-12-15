#include <iostream>

using namespace std;
void abs(string str,int n){
    int c=0;
    int max=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]>= '0' && str[i]<= '9'){
            c++;
        }
        else{ 
            if(c>max)
            max=c;
            c=0;
        }
    }
    if(max>=n){
        cout << "Valid";
    }
    else{
        cout << "Not valid";
    }
    
}

int main(){
    string str;
    cin >> str;
    int n;
    cin >> n;
    abs(str,n);
    return 0;
}