#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

vector<int> creatVec(int _size, int _left, int _right) {
	srand(time(0));
	vector<int> vec;
	for (int i = 0; i < _size; i++)
	{	
		vec.push_back(rand() % (_right - _left + 1) + _left);
	}
	return vec;
}
vector<int> creatVec(int _size) {
	
	vector<int> vec;
	for (int i = 0; i < _size; i++)
    {
        int in;
        cin >> in;
        vec.push_back(in);
    }
	return          vec;
} 

void coutVec(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << ' ';
	}
}