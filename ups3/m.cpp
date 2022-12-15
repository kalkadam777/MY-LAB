#include <iostream>

using namespace std;
void Test(string s){
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
        sum+=int(s[i]);
    }
    if(sum>300){
        cout << "It is tasty!";
    }
    else{
        cout << "Oh, no!";
    }
}

int main(){
    string a;
    cin >> a;
    Test(a);
    return 0;
}