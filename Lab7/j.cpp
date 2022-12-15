#include <iostream>

using namespace std;
void Sums(string n){
    int sum=0;
    for (int i = 0; i < n.length(); i++)
    {
        n[i]-='0';
        sum+=n[i]/2;
    }
    cout << sum;
}

int main(){
    string str;
    cin >> str;
    Sums(str);
    return 0;
}