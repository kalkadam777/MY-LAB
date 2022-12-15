#include <iostream>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <iterator>

using namespace std;

int main(){
	set<char>myset;
	set<char>::iterator it;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		myset.insert(tolower(str[i]));;
	}
	cout << myset.size();
	cout << endl;
	for (it = myset.begin(); it!= myset.end(); it++)
	{
		cout << *it << ' ';
	}
	return 0;
}
