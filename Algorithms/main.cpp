#include <iostream>
#include "SearchAlgorithms/Linear.h"

int main() {
	int* table = new int[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int* founded1=linearSearchGetPtr(table, 10, 8);
	
	int* founded2= linearSearchGetPtr(table, 10, 12);
	
	return 0;
}