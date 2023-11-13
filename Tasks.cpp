﻿#include <iostream>

// Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

// Линейный поиск первого вхождения элемента key массива arr с длиной length начиная с позиции
// begin (по умолчанию - 0)
template <typename T>
int search_index(T arr[], const int length, T key, int begin = 0){
	for (int i = begin; i < length; i++)
		if (arr[i] == key)
			return i;
	return -1;
}

// Линейный поиск последнего вхождения элемента key в массив arr с длинной length
template <typename T>
int search_last_index(T arr[], const int length, T key) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}


// Линейный поиск последнего вхождения элемента key в массив arr с длинной length
// Начиная с позиции begin (идёт в обратную сторону)
template <typename T>
int search_last_index(T arr[], const int length, T key, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	const int size = 10;
	int arr[size]{ 10, 20, 15, 30, 45, 20, 54, 15, 66, 29 };
	std::cout << "Массив:\n";
	print_arr(arr, size);
	std::cout << "\nВведите число для поиска -> ";
	std::cin >> n;
	int index1 = search_index(arr, size, n, 4);
	if (index1 != -1)
		std::cout << "Позиция числа в массиве: " << index1 << std::endl;
	else
		std::cout << "Такого числа нет!" << std::endl;

	int index2 = search_last_index(arr, size, n);
	if (index2 != 1)
		std::cout << "Последняя позиция вхождения числа в массив: " << index2 << std::endl;
	else
		std::cout << "Числа нет в массиве!\n";















	return 0;
}