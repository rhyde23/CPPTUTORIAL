/*
 * Multi-line
 * Comment
 */
 
// Single line comment
 
// Includes functions used to read and write data
#include <iostream>
 
// Contains functions for converting from 1 data type to
// another, random number generation, memory management,
// searching, math, sorting and other general purpose functions
#include <cstdlib>
 
// Allows you to use the STL string class
#include <string>
 
// Provides functions to find min and max values
// for data types
#include <limits>
 
// Will be introduced below
#include <string>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
using namespace std;

int multiplyNumbers(int x, int y);
//void for returning nothing
//pointers point to address in memory
//Exception handling, try-catch instead of try-except
//pointers are a way to keep things global kinda

void doubleArray(int *arr, int size);

int main(int argc, char** argv) {

    cout << "Hello World" << endl;
	
	cout << multiplyNumbers(5, 4) << endl;
	
	int array[5] = {3, 5, 7, 9, 11};
	
	doubleArray(array, 5);
	
	for(int p=0; p < 5; ++p) {
		cout << array[p] << endl;
	}


}

int multiplyNumbers(int x, int y) {
	return x*y;
}

void doubleArray(int *arr, int size) {
	for(int i=0; i < size; ++i) {
		arr[i] = arr[i] * 2;
	}
}