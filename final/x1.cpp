#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;int x;
    cin >> n;
    set <int> s;
    set <int> ::iterator it;
    for (int i = 0; i < n; i++){
        
        cin >> x;
        if(s.insert(x).second == true){
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    return 0;
}