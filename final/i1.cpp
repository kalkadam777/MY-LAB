#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>s;
    for (int i = 0; i < 6; i++)
    {
        int x;
        cin >> x;
        if (s.insert(x).second == true)
        {
            cout << "No\n";
        }
        else{
            cout << "Yes\n";
        }
    }
    return 0;
}
