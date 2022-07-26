#include<iostream>
#include<list>

class Person{
    public:
    std::string Name;
    std::string Address;
    int Age;
    std::list<std::string>Skills;
    
    
    Person(std::string name,std::string address,int age);
    
    void print(){
      std::cout << Name << std::endl;
      std::cout << Address << std::endl;
      std::cout << Age<< std::endl;
      std:: cout << "Skills is :" <<std::endl;
      for(std::string skill:Skills){
          std:: cout<<skill<<std::endl;
      }
    
    }
};

   Person::Person(std::string name,std::string address,int age){
        
        Name = name;
        Address= address;
        Age = age;
    }

int main(){
    
    Person person1("Arif","BD",25);
    person1.Skills.push_back("C Programming");
    person1.Skills.push_back("Python");
    person1.Skills.push_back("Rust");
    person1.print();
    
    Person person2("Jhon", "US",32);
    person1.Skills.push_back("C ++");
    person1.Skills.push_back("java");
    person1.Skills.push_back("javaScript");
    person2.print();
    
    std::cin.get();
}