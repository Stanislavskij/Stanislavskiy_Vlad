#include <iostream>
#include <cstdlib>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int totalday;
	cout << "Введіть кількість днів: ";
	cin >> totalday;
	
	int year = totalday / 360;
	int month = totalday / 30;
	int day = totalday % 30;
	
	cout << "Це становить: " << year << "-" << "Років" << " " << month << "-" << "Місяців" << " " << day << "-"  << "Днів." ;
	
	return 0;
}
