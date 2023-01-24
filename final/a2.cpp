#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,c=0;
    cin >> n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < vec.size()-1; i++)
    {
        if(vec[i]<vec[i+1]){
            c++;
        }
    }
    cout << c;
    return 0;
}