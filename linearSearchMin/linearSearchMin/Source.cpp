#include <iostream>
#include <ctime>
#include <chrono>
#include <random>
#include <array>
#include <iomanip>

using namespace std;

static const int size_a = 1000;

int linearSearch(array<int, size_a> a) {
	
	int min = INT16_MAX;

	for (int i = 0; i < size_a; i++) {
		
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}


int main() {
	array<int, size_a> a;
	srand(time(NULL));                      // инициализация функции rand значением функции time
	for (int i = 0; i < size_a; i++) {
		a[i] = rand() % size_a + 10;                 // сгенерировать секретное число
	}
	
	clock_t time;
	time = clock();
	auto mytime = (float)time / CLOCKS_PER_SEC;
	auto res = linearSearch(a);
	cout << res << endl;
	time = clock() - time;
	float itsthetime = (float)time / CLOCKS_PER_SEC;
	cout << setprecision(40) << itsthetime << endl;
 	getchar();
	return 0;
}