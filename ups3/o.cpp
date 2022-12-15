// #include <iostream>
// #include <map>
// #include <iterator>
// #include <algorithm>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     map<char,int> cnt;
//     map<char,int> ::iterator it;
//     for (size_t i = 0; i < s.size(); i++)
//     {
//         cnt[s[i]]++;
//     }
//     cout << max_element(cnt.begin(),cnt.end())->first << " " << max_element(cnt.begin(),cnt.end())->second << endl;
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr;
    getline(cin, mystr);
    int temp = 0;
    int maximum = 0;
    int maxi = 0;
    for(int i = 1 ; i != mystr.length() ; i++)
    {
        if(mystr[i - 1] == mystr[i])
        {
            temp++;
        }
        else
        {
            temp = 0;
        }
        if(maximum < temp)
        {
            maxi = i;
            maximum = temp;
        }
    }
    cout << mystr[maxi] << " " << maximum + 1;
}