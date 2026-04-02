#include <iostream>
#include <string>
using namespace std;

class student{
public:
	string name;
	int age;
	
	void details(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main(){
	student s1;
	s1.name = "Sperera";
	s1.age = 22;
	s1.details();
	
	student s2;
	s2.name = "Kamal";
	s2.age = 18;
	s2.details();
	
	return 0;
}