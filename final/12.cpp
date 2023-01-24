#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    string currIng, firstIng, secondIng, targetIng;
    cin >> n;
    map<string, int> shop;
    map<string, int> ::iterator it;
    for(int i = 0; i < n; i++){
        cin >> currIng;
        shop[currIng]++;
    }
    for(it = shop.begin(); it != shop.end(); it++){
        cout << it->first << ' ' << it->second << endl;
    }
    return 0;
}