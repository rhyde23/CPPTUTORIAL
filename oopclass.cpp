//OOP Concepts
//classes and objects
//Access Modifiers - public, private, protected
//Constructors - set defaults
//Encapsulation - Getters and setters (private)
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:

	string Name;
	string Company;
	int Age;
	
public:
	
	void IntroduceYourself() {
		cout << "My name is "+Name << endl;
	}
	
	string getName() {
		return Name;
	}
	
	string setName(string name) {
		Name = name;
	}
	
	string getCompany() {
		return Company;
	}
	
	string setCompany(string company) {
		Company = company;
	}
	
	int getAge() {
		return Age;
	}
	
	int setAge(int age) {
		return age;
	}
	
	Employee(string name, string company, int age) {
		Name=name;
		Company=company;
		Age=age;
	}
};

//inheritance 
class Developer: public Employee {
public:
	string FavProgramming;
	
	Developer(string name, string company, int age, string favProgramming):Employee(name, company, age) {
		FavProgramming = favProgramming;
	}
	
	void returnOneYearOlder() {
		int oyo = getAge()+1;
		cout << oyo << endl;
	}
	
};

//constructors are invoked every time object is created

int main(int argc, char** argv) {
	int number;
	//string is a class
	//public, private, protected access modifiers
	Employee employee1 = Employee("Reggie", "GRE", 19);	
	employee1.IntroduceYourself();

	Developer dev1 = Developer("Wojak", "Corporation", 22, "C++");
	
	dev1.returnOneYearOlder();
	
	
}

//SDL