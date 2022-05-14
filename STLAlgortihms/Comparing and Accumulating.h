#pragma once
#include <algorithm>
void Compare() {

	std::vector<int> a{ 1,2,3,4,5 };
	std::vector<int> b{ 1,2,0,4 };
	bool same = a.size() == b.size();
	for (size_t i = 0; i < a.size() && same; i++) {
		if (a[i] != b[i]) {
			same = false;
		}
	}
	//check if two vectors are the same
	same = std::equal(begin(a), end(a), begin(b), end(b));
	for (size_t i = 0; i < 35; i++) {
		int to_print = 0;
		int calculate = 0;
		if (i > 0 && i < 9) {
			calculate = pow(2, log2(i));
		}
		else if (i >= 9&&i<=32) {
			calculate = i;
		}
		else {
			std::cout << "error";
			//ERROR TRACE
		}

		if (i == 0) {
			to_print = 0;
		}
		else if (i == 1) {
			to_print = 1;
		}
		else if (2 <= i && i < 4) {
			to_print = 2;
		}
		else if (4 <= i && i < 8) {
			to_print = 4;
		}
		else if (8 == i) {
			to_print = 8;
		}
		else {
			to_print = i;
		}
		printf("For %d is %d shoud be %d\n", i, calculate, to_print);
	}
}

void Accumulating() {

}