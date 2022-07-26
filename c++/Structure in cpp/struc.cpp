
#include <iostream>
using namespace std;

struct SmartPhone {
    string name;
    float price;
    string color;
    int storageRam;
};

struct Persion{
    string name;
    int age;
    SmartPhone smartphone;
};

 
 void printsmartphoneinfo(SmartPhone smartphone){
     cout<<"Name :"<<smartphone.name<<endl;
     cout<<"Price:"<<smartphone.price<<endl;
     cout<<"Color:"<<smartphone.color<<endl;
     cout<<"StorageRam:"<<smartphone.storageRam<<endl;
     
 }
 void printPersionInfo(Persion persion){
    cout<<"Name: "<< persion.name<< endl;
    cout<< "Age: " << persion.age <<endl;
    printsmartphoneinfo(persion.smartphone);
}


int main(){
   
    SmartPhone smartphone;
     smartphone.name = " I phone 12";
     smartphone.price = 999.99;
     smartphone.color = " Black";
     smartphone.storageRam = 128;
     
    
    SmartPhone smartphone2;
     smartphone2.name = "Samsung Galaxy Ultra";
     smartphone2.price = 888.99;
     smartphone2.color = "Grey";
     smartphone2.storageRam = 64;
    
    //printSmartPhone(smartphone);
    //printSmartPhone(smartphone2);
    
    Persion persion;
    persion.name = "Arif Bhuiya";
    persion.age = 28;
    persion.smartphone= smartphone;  
    printPersionInfo(persion);
    
    return 0;
}