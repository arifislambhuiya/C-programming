#include<iostream>


class Car{
    public:
    std::string name;
    std::string model;
    int price;
    
    Car(std::string x,std::string y,int z){
        
        name = x;
        model = y;
        price = z;
        
        std::cout <<"constructor call" << std::endl;
    };
    
    ~Car(){
        std::cout << "dectructor call" <<std::endl;
    }
    
};


int main(){
    
    Car car1("BMW","OXS",50000);
    Car car2("Toyota", "Cotola",32000);
    
    std::cout << car1.name << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.price << std::endl;
    
    std::cin.get();
}