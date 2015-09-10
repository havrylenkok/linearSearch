#include <iostream>

#include <chrono>
#include <random>
#include <array>

using namespace std;


int linearSearch(array<int, 1000> a, int toFind) {
	
	for (int i = 0; i < 1000; i++) {
		if (a[i] == toFind) {
			return i;
		}
	}
	return -1;
}


int main() {
	array<int, 1000> a;

	int guess;
	srand(time(NULL));                      // инициализация функции rand значением функции time
	for (int i = 0; i < 1000; i++) {
		a[i] = rand() % 1000 + 1;                 // сгенерировать секретное число
	}
	
	auto res = linearSearch(a, 3);
	if (res != -1) {
		cout << res;
	}
	else {
		cout << "Didn't found your element in a";
	}
 	getchar();
	return 0;
}