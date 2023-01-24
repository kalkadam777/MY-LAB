#include "header.h"
#include "header1.h"
#include <vector>

int main() {
	string c;
	cin >> c;
	vector<Employee> vec;
	vec = loadFile("Employee.txt");
	fillter(vec,c);
}