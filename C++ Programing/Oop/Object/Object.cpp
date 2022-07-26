#include<iostream>
#include <list>


class User {

public:
	std::string Name;
	std::string Email;
	std:: string Password;
	int Salary;
	std::list<std::string>Skills;

};

int main() {

	User user1;
	user1.Name = "Arif";
	user1.Email = "arif517@gmail.com";
	user1.Password = "pass123";
	user1.Salary = 150000;
	user1.Skills = {"java","python","C","C++","javaScript" };

	std::cout << user1.Name << "\n" << user1.Email << "\n" << user1.Password << "\n" << user1.Salary << std::endl;
	std::cout << "Skill is : " << std::endl;
	for (std::string skill : user1.Skills) {
		std::cout  << skill << std::endl;
	};


	std::cin.get();

}