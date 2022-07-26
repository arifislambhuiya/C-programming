#include<iostream>

using namespace std;
 

class Person{
    private:
    string name;
    int age;
    
    public:
    
    Person(string name,int age){
        name = name;
        age = age;
    };
    
    Person(const Person &p1){
        
    }
    
    
};