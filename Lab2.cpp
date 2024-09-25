#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
    int a = 0, b = 1, fib = 0;
    int sum = 0;

     for (fib = 0; fib < 1000; fib = a + b) {
        sum += fib;
        a = b;
        b = fib;
    }    

    cout << "сума Чисел фібоначі що меньші 1000: " << sum << endl;

    return 0;
}
