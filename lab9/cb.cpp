#include <iostream>
#include <map>
#define sonic ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define pb push_back
#define pf push_front
#define F first
#define S second
#define ull unsigned long long int
using namespace std;
const ll MAXV = 1e5 + 50;
const ll INF = 1e18;
int main()
{
  sonic
  map<string, ll> demon;
  ll n, m;
  cin >> n;
  for(ll i = 1; i <= n; i ++) {
   string name, weakness;
   cin >> name >> weakness;
   demon[weakness] ++;
 }
 cin >> m;
 ll ans = n; //начальное кол-во демонов
 for(ll i = 1; i <= m; i ++) {
  string name, power;
  ll num;
  cin >> name >> power >> num;
  if(demon[power] > 0) { //если есть ещё живые демоны для нашей силы
   ans -= min(demon[power], num);
   demon[power] -= num;
  }
 }
 cout << ans;
}