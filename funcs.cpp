#include "Header.h"

template <typename C>
int sumElem(int size, C* mas) {
	int sum = 0;
	for (int i = 0; i < size; i++) sum += mas[i];
	return sum;
}

template int sumElem<int>(int, int*);
template int sumElem<double>(int, double*);
template int sumElem<char>(int, char*);




template <typename T>
void changeMassive(T* mas, function<void(int sum)> f) {
	int sum = sumElem(20, mas);
	f(sum);
}

template void changeMassive<int>(int*, function<void(int sum)>);
template void changeMassive<double>(double*, function<void(int sum)>);
template void changeMassive<char>(char*, function<void(int sum)>);