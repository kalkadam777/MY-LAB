#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> myvec(size);
    vector<int>::iterator iter = myvec.begin();
    for(int i = 0 ; i != size ; i++)
    {
        cin >> myvec[i];
    }
    sort(myvec.begin(), myvec.end());
    int pairs = 0;
    for(int i = 1 ; i != myvec.size() ; i++)
    {
        if(myvec[i - 1] == myvec[i])
        {
            pairs++;
            myvec.erase(iter, iter + 1);
            --iter;
        }
        ++iter;
    }
    cout << pairs;
}
