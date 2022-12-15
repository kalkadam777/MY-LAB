#include <iostream>
#include <map>
#include <iterator>
using namespace std;


string numberName(string color) {
	if (color == "red")
	{
		color = '1' + color;
	}
	else if (color == "orange") {
		color = '2' + color;
	}
	else if (color == "yellow") {
		color = '3' + color;
	}
	else if (color == "green") {
		color = '4' + color;
	}
	else if (color == "blue") {
		color = '5' + color;
	}
	else if (color == "indigo") {
		color = '6' + color;
	}
	else if (color == "purple") {
		color = '7' + color;
	}
	return color;
}

int main() {
	multimap<string, int> map1;
	multimap<string, int>::iterator it;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string color;
		int p;
		cin >> color >> p;
		map1.insert(pair<string,int>(numberName(color),p));
	}
	
	cout << endl;

	multimap<int, string> map2;
	multimap<int, string>::iterator it;
	for (auto a:map1)
	{
		map2.insert({ a.second,a.first });
	}
	map1.clear();
	for (auto a : map2)
	{
		map1.insert({ a.second,a.first });
	}
	for (auto a : map1) {
		cout << a.first.substr(1,a.first.length()-1) << ' ' << a.second << endl;
	}
}

/*
5
red 85
yellow 3
red 14
orange 8
blue 50

*/
