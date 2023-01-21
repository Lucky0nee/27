#include <iostream>
#include <math.h>
using namespace std;

int function(int num1, int num2) { 
	long long int temp = pow(num1, num2);
	return temp % 100; 
}

int main() {
	system("chcp 1251>nul");
	long long int temp;

	for (int i = 2; i <= 16; i++)
		temp = function(6, i);

	cout << "Число, складене з цих двох останніх цифр: " << temp;
}

/*
Напишіть функцію, яка б знаходила дві останні цифри числа 6
піднесеного до натурального степеня n. 
Функція має повертати двозначне число,складене з
цих двох останніх цифр.
Далі застосуйте в циклі цю функцію зі значенням аргументів від 2 до 16.
Наслідки обчислень виведіть на екран.
*/
