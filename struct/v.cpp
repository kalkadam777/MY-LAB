#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <algorithm>

using namespace std;

struct Human
{
	string name, surname, dob, location;
	double height, weight;

	string toString() {
		return name + ' ' + surname + ' ' + dob + ' ' + location + ' ' + to_string(height) + ' ' + to_string(weight);
	}

	Human(string n, string sn, string d, string l, double h, double w) {
		name = n;
		surname = sn;
		dob = d;
		location = l;
		height = h;
		weight = w;
	}

	Human() {

	}
};

struct Student
{
	Human personalInfo;

	vector<double> grades;

	double calcGPA() {
		double sum = 0;
		for (int i = 0; i < grades.size(); i++)
		{
			sum += grades[i];
		}
		sum /= grades.size();
		return sum;
	}
};

int main() {
	srand(time(NULL));
	Student s1;
	s1.personalInfo = Human("Makhsat", "Erlanov","13.10.2004","Almaty",1.76,74.1);
	for (int i = 0; i < 5; i++)
	{
		s1.grades.push_back((rand() % 301 + 100) / 100.0);
	}
	cout << ;asdasd
	cout << s1.personalInfo.name << ' ' << s1.calcGPA() << endl << s1.personalInfo.toString();
}