#include "pch.h"
#include "../Algorithms/SearchAlgorithms/Linear.h"
#include "../Algorithms/SearchAlgorithms/BinarySearch.h"

class SearchAlgorithmTestFixture :public ::testing::Test {
protected:
	int* arr = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const int size = 10;
	const int searchedExpected1 = 1;
	const int searchedExpected3 = 3;
	const int searchedExpected7 = 7;
	const int searchedExpected10 = 10;
	const int searchedWrong1 = 11;
	const int searchedWrong2 = 0;
};

TEST_F(SearchAlgorithmTestFixture, BinarySearchGetIndex) {
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedWrong2), -1);
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedExpected1), searchedExpected1 - 1);
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedExpected3), searchedExpected3 - 1);
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedExpected7), searchedExpected7 - 1);
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedExpected10), searchedExpected10 - 1);
	EXPECT_EQ(binarySearchGetIndex(arr, size, searchedWrong1), -1);
}

TEST_F(SearchAlgorithmTestFixture, LinearSearchGetPtr) {
	EXPECT_EQ(*linearSearchGetPtr(arr, size, searchedExpected1), searchedExpected1);
	EXPECT_EQ(*linearSearchGetPtr(arr, size, searchedExpected3), searchedExpected3);
	EXPECT_EQ(*linearSearchGetPtr(arr, size, searchedExpected7), searchedExpected7);
	EXPECT_EQ(*linearSearchGetPtr(arr, size, searchedExpected10), searchedExpected10);
	EXPECT_EQ(linearSearchGetPtr(arr, size, searchedWrong1), nullptr);
	EXPECT_EQ(linearSearchGetPtr(arr, size, searchedWrong2),nullptr);
}

TEST_F(SearchAlgorithmTestFixture, LinearSearchGetIndex) {
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedExpected1), searchedExpected1-1);
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedExpected3), searchedExpected3-1);
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedExpected7), searchedExpected7-1);
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedExpected10), searchedExpected10-1);
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedWrong1), -1);
	EXPECT_EQ(linearSearchGetIndex(arr, size, searchedWrong2), -1);
}