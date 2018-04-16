// google_interview_questions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <bitset>

/*
Sum of bit differences among all pairs
Given an integer array of n integers, find sum of bit differences in all pairs that can be formed from array elements. 
Bit difference of a pair (x, y) is count of different bits at same positions in binary representations of x and y.
For example, bit difference for 2 and 7 is 2. Binary representation of 2 is 010 and 7 is 111 ( first and last bits differ in two numbers).
*/

std::string toBinary(int n)
{
	std::string res = "";
	while (n != 0) { 
		res = (n % 2 == 0 ? "0" : "1") + res; 
		n /= 2;
	}
	return res;
}

int sumBitDifferences(int arr[], int n) {
	int sum = 0;
	int val;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			val = arr[i] ^ arr[j];

			//count bit difference
			for (int k = 0; k < sizeof(int); k++) {
				if (val & (1 << k)) {
					++sum;
				}
			}
		}
	}
	return sum;
}

int main()
{
	// given integer array of n integers
	int int_vec[3] = {1,3,5};
	const int size = 3;
	
	int results = sumBitDifferences(int_vec, size);
	std::cout << results;
	
	char res[100];
	std::cin >> res;

    return 0;
}

