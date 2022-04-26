#pragma once

int binarySearchGetIndex(int* arr, const int size, int searched) {
	int leftPivot = 0;
	int rightPivot = size-1;
	while (leftPivot <= rightPivot) {
		int checkedPivot = (leftPivot + rightPivot) / 2;
		int value = arr[checkedPivot];
		if (value == searched) {
			return checkedPivot;
		}
		else if (value > searched) {
			rightPivot = checkedPivot-1;
		}
		else {
			leftPivot = checkedPivot+1;
		}
	}
	return -1;
}