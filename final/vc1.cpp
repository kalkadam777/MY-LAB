#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int m,c=0;
    cin >> m;
    int n;
    cin >> n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < n; i++)
    {
        if(vec[i]>=m and c==0){
            m = vec[i];
            c++;
        }
        else if(vec[i]-m>=3){
            m=vec[i];
            c++;
        }
    }
    cout << c;
    return 0;
}