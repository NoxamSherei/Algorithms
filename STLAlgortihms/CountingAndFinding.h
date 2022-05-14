#pragma once
#include <algorithm>
#include <vector>

void CountingAndFindingRun() {
	//Data for experimenting
	std::vector<int> V1 = { 1,1,1,0,0,1,0,0,0,1 };
	std::vector<int> V2 = { 1,2,4,1,7,6,3,4,9,7 };
	std::string S1 = "Hello world, this is sentence for testing STL algorithm";
	int V3[]{ 1,1,1,0,0,1,0,0,0,1 };
	//Counting
	int target = 1;
	
	int resoult1 = count(V1.begin(), V1.end(), target);
	//container.begin/end() is member function avaliable for all collection in labrery like vector, string, map
	int resoult2 = count(begin(V1), end(V1), target);
	int resoult3 = std::count(std::begin(V3), std::end(V3), target);
	//begin/end(container) is nonmember calls  begin and end if it exist
	//works for C-Style array 
	//you can write a free functrion for a collection without member begin() and end()
	printf("resoult %d, %d\n", resoult1, resoult2);
	int resoult1if = std::count_if(begin(V2), end(V2), [](auto elem) {return elem % 2 == 0; });
	int resoult2if = std::count_if(begin(V2), end(V2), [](auto elem) {return elem % 2 != 0; });
	printf("resoult %d, %d\n", resoult1if, resoult2if);
	//are all any or norn of the values are odd
	bool allof, noneof, anyof;

	allof = std::all_of(begin(V2), end(V2), [](auto elem) {return elem % 2 != 0; });
	//false
	noneof = std::none_of(begin(V2), end(V2), [](auto elem) {return elem % 2 != 0; });
	//false
	anyof = std::any_of(begin(V2), end(V2), [](auto elem) {return elem % 2 != 0; });
	//true

	//Finding
	//std::vector<int> V2 = { 1,2,4,1,7,6,3,4,9,7 };
	auto resoultFinding1 = std::find(begin(V2), end(V2), 7);
	auto resoultFinding2 = std::find(resoultFinding1+1, end(V2), 7);
	//find if
	//find if not

	//find first of
	std::vector<int> searched = { 7,3,9 };
	auto resoutlFinding5 = std::find_first_of(begin(V2), end(V2), begin(searched), end(searched));
	int a = ceil(std::log2(15));
	//auto res= std::search(begin(S1), end(S1), "STL");
}