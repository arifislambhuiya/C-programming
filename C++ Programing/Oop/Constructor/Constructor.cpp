#include <iostream>
#include <list>

class Person {

public:
	std::string Name;
	std::string Address;
	int Age;
	std::list<std::string> Skills;

	Person(std::string name, std::string address, int age) {
		Name = name;
		Address = Address;
		Age = age;
	}

};


int main() {

	Person person1("Arif", "Bangladesh", 25);
	person1.Skills.push_back("java");
	person1.Skills.push_back("Python");
	person1.Skills.push_back("C++;
	person1.Skills.push_back("C");
	
	std::cout << "Name : " << person1.Name << " Address : " << person1.Address << " Age : " << person1.Age << std::endl;
	std::cout << "Skills is : " << std::endl;
	for (std::string skill : person1.Skills) {
		std::cout << skill << std::endl;
	}


	std::cin.get();
}