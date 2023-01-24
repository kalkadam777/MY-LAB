#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	int n;
	cin >> n >> ws;
	map<string, vector<string> > map1, map2;
	map<string, vector<string> >::iterator it;
	map<string, vector<string> >::iterator it1;
	string tmp;

	for (int i = 0; i < n; i++)
	{
		getline(cin, tmp);
		string key;
		int j = 0;
		while (tmp[j]!=' ')
		{
			key += tmp[j++];
		}
		j += 3;
		while (j<tmp.length())
		{
			string val;
			while (tmp[j] != ',' and j<tmp.length()) {
				val += tmp[j];
				j++;
			}
			j += 2;
			map1[key].push_back(val);
		}
	}

	for (it = map1.begin(); it != map1.end(); it++)
	{
		for (int i = 0; i < it->second.size(); i++)
		{
			map2[it->second[i]].push_back(it->first);
		}
	}
	
	for (it1 = map2.begin(); it1 != map2.end(); it1++)
	{
		cout << it1->first << " - ";
		for (int i = 0; i < it1->second.size(); i++)
		{
			cout << it1->second[i];
			if (i<it1->second.size()-1)
			{
				cout << ", ";
			}
		}
		cout << endl;
	}
}