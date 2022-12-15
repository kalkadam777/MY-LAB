#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
	cin >> n;
	multimap<int, int> map1, rev;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		map1.insert(pair<int,int>(x,y));
	}
	for (auto a : map1) {
		rev.insert({ a.second, a.first });
	}
	map1.clear();
	for (auto a : rev) {
		map1.insert({ a.second, a.first });
	}

	for (auto a : map1) {
		cout << a.first << ' ' << a.second << endl;
	}
}