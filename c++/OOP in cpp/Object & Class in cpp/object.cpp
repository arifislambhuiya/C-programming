#include<iostream>
#include<list>
//using namespace std;


class Person{
    
   public:
    std::string name;
    std::string cuntry;
    int age;
    std::list<std::string>skills;
   
    
};

int main(){
    
    Person p1;
    p1.name = "Arif";
    p1.cuntry= "Bangladesh";
    p1.age = 25;
    p1.skills= {"java","python","javaScript","C programming","C++"};
    
    
    std::cout << p1.name << std::endl;
    std::cout << p1.cuntry << std::endl;
    std::cout << p1.age << std::endl;
    std::cout << "Skills :" << std::endl;
    for(std::string skill:p1.skills){
        std::cout<< skill <<std::endl;
    }
    
   std::cin.get();
}
