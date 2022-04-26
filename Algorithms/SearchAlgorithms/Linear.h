#pragma once

int* linearSearchGetPtr(int* arr, const int size, const int searched) {
	int* NotFoundPtr = nullptr;
	int* end = arr + size;
	while (arr != end) {
		if (*arr == searched) return arr;
		arr++;
	}
	return NotFoundPtr;
}

int linearSearchGetIndex(int* arr, const int size, const int searched) {
	int NotFound = -1;
	for (size_t i = 0; i < size; i++) {
		if (arr[i] == searched)return i;
	}
	return NotFound;
}