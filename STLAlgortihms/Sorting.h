#pragma once
#include<algorithm>
#include<vector>
#include <random>

struct E {
public:
	std::string s1;
	std::string s2;
	int i1;
	void print() {
		std::cout << '[' << s1 << ',' << s2 << ',' << i1 << "] ";
	}
};

void Sorting() {
	std::vector<int> Vector10{ 63,11,64,81,4,59,97,57,2,37 };
	std::vector<int> Vector10_1{ 63,11,-64,-81,4,59,-97,57,2,37 };
	std::vector<int> Vector10_2{ 63,11,-64,-81,4,59,-97,57,2,37 };

	std::sort(begin(Vector10), end(Vector10));
	std::sort(begin(Vector10_1), end(Vector10_1), [](auto elem1, auto elem2) {return elem1 > elem2; });
	std::sort(begin(Vector10_2), end(Vector10_2), [](auto elem1, auto elem2) {return abs(elem1) > abs(elem2); });
	std::for_each(begin(Vector10_1), end(Vector10_1), [](auto elem) {printf("%d,", elem); }); printf("\n");
	std::for_each(begin(Vector10_2), end(Vector10_2), [](auto elem) {printf("%d,", elem); }); printf("\n");
	std::printf("If is sosted %d\n", std::is_sorted(begin(Vector10), end(Vector10)));
	std::printf("If is sosted %d\n", std::is_sorted(begin(Vector10_1), end(Vector10_1)));
	std::printf("If is sosted %d\n", std::is_sorted(begin(Vector10_2), end(Vector10_2)));
	std::printf("max %d min %d\n", *std::max_element(begin(Vector10_2), end(Vector10_2)), *std::min_element(begin(Vector10_2), end(Vector10_2)));

	std::vector<E> VectorOfE{
		{"f","ds",10},
		{"g","ds",20},
		{"f","ds",30},
		{"e","ds",10},
		{"s","ds",20},
		{"f","ds",10} };

	std::for_each(begin(VectorOfE), end(VectorOfE), [](E elem) {elem.print(); }); printf("\n");
	std::sort(begin(VectorOfE), end(VectorOfE), [](E elem1, E elem2) {return elem1.s1 < elem2.s1; });
	std::for_each(begin(VectorOfE), end(VectorOfE), [](E elem) {elem.print(); }); printf("\n");
	std::sort(begin(VectorOfE), end(VectorOfE), [](E elem1, E elem2) {return elem1.i1 < elem2.i1; });
	std::for_each(begin(VectorOfE), end(VectorOfE), [](E elem) {elem.print(); }); printf("\n");
	std::stable_sort(begin(VectorOfE), end(VectorOfE), [](E elem1, E elem2) {return elem1.i1 < elem2.i1; });
	std::for_each(begin(VectorOfE), end(VectorOfE), [](E elem) {elem.print(); }); printf("\n");

	//Shuffle

	std::random_device randomDevice;
	std::mt19937 generator(randomDevice());
	std::shuffle(begin(Vector10), end(Vector10), generator);
	std::for_each(begin(Vector10), end(Vector10), [](auto elem) {printf("%d,", elem); }); printf("\n");
	std::partial_sort(begin(Vector10), begin(Vector10) + 4, end(Vector10));
	std::for_each(begin(Vector10), end(Vector10), [](auto elem) {printf("%d,", elem); }); printf("\n");

	//NthElement
	std::shuffle(begin(Vector10), end(Vector10), generator);
	printf("-----\n");
	std::for_each(begin(Vector10), end(Vector10), [](auto elem) {printf("%d,", elem); }); printf("\n");
	std::nth_element(begin(Vector10), begin(Vector10)+4, end(Vector10));
	std::for_each(begin(Vector10), end(Vector10), [](auto elem) {printf("%d,", elem); }); printf("\n");
	std::sort(begin(Vector10), end(Vector10));
	std::for_each(begin(Vector10), end(Vector10), [](auto elem) {printf("%d,", elem); }); printf("\n");
}