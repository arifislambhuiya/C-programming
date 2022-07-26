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
    }
    void print(){
      std::cout << name << std::endl;
      std::cout << model << std::endl;
      std::cout << price << std::endl;
    
    }
};


int main(){
    
    Car car1("BMW","OXS",50000);
    car1.print();
    Car car2("Toyota", "Cotola",32000);
    car2.print();
    
    
    

    
    std::cin.get();
}