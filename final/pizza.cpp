// #include <iostream>
// #include <map>
// #include <set>
// #include <algorithm>
// #include <vector>


// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<string>ing(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ing[i];
//     }
//     int m;
//     cin >> m;
//     map<string,string>mp;
//     map<string,string>::iterator it1;
//     for (int i = 0; i < m; i++)
//     {
//         string s,t;
//         cin >> s >> t;
//         mp[s] = t;
//         mp[t] = s;
//     }
//     string find;
//     cin >> find;
//     cout << endl;
//     set<string>st;
//     set<string>::iterator it;
//     for (it1 = mp.begin(); it1 != mp.end(); it1++)
//     {
//         if(it1->first == find){
//             st.insert(it1->second);
//         }
//         else if(it1->second == find){
//             st.insert(it1->first);
//         }
//     }
//     for(it = st.begin(); it != st.end(); it++){
//         cout << *it << ' ';
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    string currIng, firstIng, secondIng, targetIng;
    cin >> n;
    map<string, int> shop;
    for(int i = 0; i < n; i++){
        cin >> currIng;
        shop[currIng]++;
    }
    cin >> n;
    vector<pair<string, string> > ingPairs;
    vector<string> shoppingList;
    for(int i = 0; i < n; i++){
        cin >> firstIng >> secondIng;
        ingPairs.push_back(make_pair(firstIng, secondIng));
    }
    cin >> targetIng;
    vector<pair<string, string> >::iterator it;
    for(it = ingPairs.begin(); it != ingPairs.end(); it++){
        if(it -> first == targetIng){
            if(shop.count(it -> second) > 0){
                shoppingList.push_back(it -> second);
            }
        }
        if(it -> second == targetIng){
            if(shop.count(it -> first) > 0){
                shoppingList.push_back(it -> first);
            }
        }
    }
    sort(shoppingList.begin(), shoppingList.end());
    vector<string>::iterator it1;
    cout << shoppingList.size() << endl;
    for(it1 = shoppingList.begin(); it1 != shoppingList.end(); it1++){
        cout << *it1 << " ";
    }
    return 0;
}