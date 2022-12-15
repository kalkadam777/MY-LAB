#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,k,c=0;
    cin >> n;
    vector<int>vec;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
    cin >> k;
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i]==k){
            c++;
        }
    }
    if(c>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }



    return 0;
}