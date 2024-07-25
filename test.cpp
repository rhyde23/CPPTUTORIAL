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

//anything declared outside of function is global
int imGlobal = 0;
const double PI = 3.141;

int main(int argc, char** argv) {

    cout << "Hello World" << endl;
	
	string s = "Test String";
	char first = s[0];
	char las = s.back();

	cout << first << endl;
	
	
	int fill[5];
	
	for(int i = 1; i <= 5; ++i) {
		fill[i-1] = i;
	}
	
	for(int printind = 0; printind <= 4; ++printind) {
		cout << fill[printind] << endl;
	}
	
	cout << "loop stuff testing" << endl;
	
	vector<int> myVector(3);
	
	for(int add_to_vector = 0; add_to_vector <= 2; ++add_to_vector) {
		myVector[add_to_vector] = add_to_vector+1;
	}
	
	myVector.push_back(50);
	myVector.push_back(75);
	
	string last;
	
	cout << "enter a number to add to the vector" << endl;
	
	cin >> last;
	
	int last_int = stoi(last); //string to int casting

	myVector.push_back(last_int);
	
	for(int display_vector = 0; display_vector <= myVector.size()-1; ++display_vector) {
		cout << myVector[display_vector] << endl;
	}
	
	cout << "break" << endl;
	

	
	int listofnums[] = {1, 5, 6};
	
	listofnums[0] = 4;
	
	cout << listofnums[0] << endl;
	
	
	//Vectors can be dynamically sized
	
	vector<int> vNums(2);
	
	vNums[0] = 1;
	vNums[1] = 2;
	
	vNums.push_back(21);
	
	cout << vNums[2] << endl;
	
	int i = 1;
	
	//continue; and break; are same as python
	while (i <= 20) {
		if ((i % 2) == 0) {
			cout << i << endl;
		}
		i += 1;
	}
	
	for(int i = 0; i <= 20; ++i) {
		cout << i;
		cout << " is awesome" << endl;
	}
	
	string str = "hello my name is reggie";
	bool isOverFifty = str.length() > 10;
	cout << isOverFifty << endl;
	if (isOverFifty) {
		cout << "Length is over fifty" << endl;
		
	}
	
	bool found = str.find("reggie");
	
	cout << found << endl;

	//MATH FUNCTIONS
	// en.cppreference.com/w/cpp/numeric/math
	
	int three = 3;
	int four = 4;
	
	cout << max(three, four) << endl;
	
	
	/*
	 * bool married = true;
	char myGrade = 'A';
	
	
	
	short int smallNum = 10;
	
	//float vs double: double has double the amount of decimal place precision
	
	float f1 = 1.1111111;
	
	string ri;
	
	cin >> ri;
	
	cout << ri+" is cool" << endl;
	
	string input;
	
	cout << "Enter a number:";
	
	cin >> input;
	
	int x = stoi(input);
	
	cout << x+1 << endl;
	
	
	//&& and ||
	//else if 	
	 */

	
 
    return 0;
}