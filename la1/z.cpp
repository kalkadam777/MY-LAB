#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    vector<int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);

    }
    for(vector<int>::iterator it = vec.begin(); it != vec.end();it++){
        cout << *it << ' ';
    }
    cout << endl;

    vector<int>::iterator iterase = vec.begin();
    vec.erase(iterase,iterase+5);

    for(it = vec.begin();it != vec.end(); it++){
        cout << *it << ' ';
    }
    return 0;
}