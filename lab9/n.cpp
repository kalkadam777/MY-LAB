#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, count = 0; 
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        int a;
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = 0; k < n; k++)
                if(v[k] == (v[i] ^ v[j])){
                    count++;
                    break;
                }
    cout << count;    
}
