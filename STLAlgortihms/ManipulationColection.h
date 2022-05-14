#pragma once

#include <algorithm>


void Copying() {
	std::vector<int> source{ 3,6,1,0,-2,5 };

	std::vector<int> v2(source.size());
	std::copy(std::begin(source), std::end(source), std::begin(v2));
	//same operation we can write in one line
	auto v3 = source;

	//copy from 3 to 1
	auto position = std::find(begin(source), end(source), 1);
	std::vector<int> v4(source.size());
	std::copy(begin(source), position, begin(v4));

	std::vector<int>v5(source.size());
	std::copy_if(begin(source), end(source), begin(v2), [](auto elem) {return elem % 2 == 0; });

	std::vector<int>v6(source.size());
	std::copy_n(begin(source), 3, begin(v6));

	//{ 3,6,1,0,-2,5 };
	//{ 3,6,1,3,6,1 };
	std::copy(begin(source), position + 1, position + 1);

	std::copy_backward(begin(v3), end(v3), end(source));

	auto newend = std::remove(begin(source), end(source), 3);
	int s = source.size();
	int logicalSize = newend - begin(source);
	source.erase(newend, end(source));

	source = v3;
	source.erase(remove(begin(source), end(source), 3), end(source));
}

#include <numeric> //need for iota

void Filling() {
	std::vector<int> V1(10);
	std::fill(begin(V1), end(V1), 5);
	std::fill_n(begin(V1), 5, 3);
	std::vector<int> Viota(10);
	std::iota(begin(Viota), end(Viota), 1);
	std::iota(begin(V1)+5, end(V1), 1);
	
	int i = 0;
	std::vector<int> V2(10);
	std::generate(begin(V2), end(V2), [&i]() { return std::pow(2, i++); });
	
	std::vector<int> V3(10);
	V3.erase(std::generate_n(begin(V3), 7, []() {return 3; }), end(V3));

	std::replace(begin(V1), end(V1), 3, 12);
	std::replace_if(begin(V1), end(V1), [](int elem) {return elem % 2 == 0; }, 13);

	std::transform(begin(Viota), end(Viota), begin(V1), [](int elem) {return elem * 2; });
}