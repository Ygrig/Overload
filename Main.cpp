#include <iostream>
using namespace std;

//Встроенная функция
inline int sum(int num1, int num2) {
	return num1 + num2;
}

// Т.к. функцию не удается встроить, она становится обычной функцией
inline int sum_AB(int A, int B) {
	int res = 0;
	for (int i = A ; i <= B; i++)
		res += i;
	return res;

}

//Перегруженная функция
int max_val(int num1, int num2) {
	cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max_val(double num1, double num2) {
	cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
float max_val(float num1, float num2) {
	cout << "FLOAT\n";
	return num1 > num2 ? num1 : num2;
}
int max_val(int num1, int num2, int num3) {
	cout << "THREE INT\n";
	return num1 > (num2 > num3 ? num2 : num3) ? //ВЛОЖЕННЫЙ ТЕРНАРНЫЙ ОПЕРАТОР!!!!!! запомнить, что можно "вкладывать", будет вопрос на экзе
		num1 : (num2 > num3 ? num2 : num3);
}

//Шаблонная функция
template <typename T> 
T abs(T num) {
	return num < 0 ? -num : num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	
	//SUM SUM_AB
	/*cout << "Введите 2 числа: ";
	cin >> n >> m;
	cout << sum_AB(n, m) << "\n";*/
	//cout << sum(n, m) << "\n";

	//MAX_VAL
	/*cout << max_val(4, 6) << "\n"; //6
	cout << max_val (1.2, 1.1) << "\n"; //1.2
	cout << max_val(5.5f, 5.9f) << "\n"; //5.9
	cout << max_val(5,7,4) << "\n"; //7
	*/

	cout << abs(-5) << "\n"; //5
	cout << abs(7.4) << "\n"; //7.4

	return 0;
}