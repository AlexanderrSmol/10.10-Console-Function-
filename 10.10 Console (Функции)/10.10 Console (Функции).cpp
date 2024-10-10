#include <iostream>
#include <list>
#include <string>
#include <windows.h>
using namespace std;

void PrintDots() 
{
	for (size_t i = 0; i < 3; i++)
	{
		cout << " .";
		Sleep(300);
	}
	cout << "\b\b\b\b\b\b";
	cout << "      ";
	cout << "\b\b\b\b\b\b";
}

list<int> GenerateList() 
{
	list<int> arr1;
	for (size_t i = 0; i < rand() % 6 + 5; i++)
	{
		arr1.push_back(rand() % 50 - 25);
	}

	cout << "Генерируется массив: " << endl;
	PrintDots();
	PrintDots();
	PrintDots();
	cout << "{ ";
	for (int i : arr1)
	{
		cout << i << ", ";
	}
	cout << "\b\b ";
	cout << "} \n\n";

	return arr1;
}

void PrintNegativeAndPositive(list<int> arr)
{
	cout << "Отрицательные: " << endl;
	Sleep(1000);
	PrintDots();
	for (int i : arr)
	{
		if (i < 0) cout << endl << i << ",";
		Sleep(100);
	}
	cout << "\b" << " \n";
	cout << endl;

	cout << "Положительные: " << endl;
	Sleep(1000);
	PrintDots();
	for (int i : arr)
	{
		if (i > 0) cout << endl << i << ",";
		Sleep(100);
	}
	cout << "\b" << " \n";
	cout << endl;
}

int Mean(int a1, int a2)
{
	return (a1 + a2) / 2;
}

void PrintEvenAndOdd(list<int> arr)
{
	cout << "Чётные: " << endl;
	Sleep(1000);
	PrintDots();
	for (int i : arr)
	{
		if (i % 2 == 0) cout << endl << i << ",";
		Sleep(100);
	}
	cout << "\b" << " \n";
	cout << endl;

	cout << "Нечётные: " << endl;
	Sleep(1000);
	PrintDots();
	for (int i : arr)
	{
		if (i % 2 != 0) cout << endl << i << ",";
		Sleep(100);
	}
	cout << "\b" << " \n";
	cout << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	cout << "Введите первое число: " << endl;
	cin >> a;
	cout << "Введите второе число: " << endl;
	cin >> b;

	cout << "Среднее значение " << a << " и " << b << ":" << endl;
	cout << Mean(a, b) << endl;
	cout << endl;

	list<int> arr1 = GenerateList();

	PrintNegativeAndPositive(arr1);
	PrintEvenAndOdd(arr1);
}

