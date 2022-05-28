#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <memory>
#include <functional>
#include <ctime>

using namespace std;

template<class C>
void changeMassive(C* mas, function<void(int sum)> f);

template<typename T>
int sumElem(int size, T* mas);

#endif // !Header

