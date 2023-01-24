#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack < int > st;
	st.push(5);
	// 5
	st.push(7);
	// 5 7
	st.push(13); // закинуть в верхушку
	// 5 7 13
	st.pop(); // удалить верхушку
	// 5 7
	st.size(); // Длина стэка
	st.top(); // Верхушка стэка
	
	return 0;
}
