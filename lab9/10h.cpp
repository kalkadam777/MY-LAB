// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> vec;
//     for (int i = 0; i < n; i++)
//     {
//         int in;
//         cin >> in;
//         vec.push_back(in);
//     }
//     do
//     {
//         for (int i = 0; i < vec.size(); i++)
//         {
//             cout << vec[i] << ' ';
//         }
//         cout << endl;
//     } while (next_permutation(vec.begin(),vec.end()));
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void removing(vector<int> &v)
{
 auto end = v.end();
 for (auto it = v.begin(); it != end; ++it)
 {
  end = remove(it + 1, end, *it);
 }
 v.erase(end, v.end());
}

int main()
{
 int n;
 cin >> n;
 vector<int> v;
 while (n--)
 {
  int number;
  cin >> number;
  v.push_back(number);
 }
 removing(v);
 do
 {
  for (auto it = v.cbegin(); it != v.cend(); ++it)
  {
   cout << *it << ' ';
  }
  cout << endl;
 } while (next_permutation(v.begin(), v.end()));

 return 0;
}