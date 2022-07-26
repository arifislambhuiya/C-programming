#include <iostream>
using namespace std;

struct Education {
    string university;
    int year;
    string subject;
    int pass;
};

struct Car{
  string carname;
  string model;
  float price;
  string color;
};

struct Smartphone {
    string phone;
    float price;
    string color;
    int storage;
};

struct Person{
    string name;
    int age;
    Smartphone smartphone;
    Car car;
    Education education;

};

void printCar(Car car){
  cout << "Car : " << car.carname << endl;
  cout << "Price : " << car.price << endl;
  cout << "CarColor : " << car.color << endl;
  cout << "Model : " << car.model << endl;
}

void printeducation(Education education){
   cout << "Education" << education.university << endl;
   cout << "Subject" << education.subject << endl;
   cout << "Year" << education.year << endl;
   cout << "PassYear" << education.pass << endl;
}



void printSmartphoneInfo(Smartphone smartphone){
    cout << "Phone : " << smartphone.phone << endl;
    cout << "Price : " << smartphone.price << endl;
    cout << "Color : " << smartphone.color << endl;
    cout << "Storage : " <<smartphone.storage << endl;
}


void printPresonInfo(Person person){
     cout << "Persion : " << person.name << endl;
     cout << "Age : " << person.age << endl;
     printeducation(person.education);
     printCar(person.car);
     printSmartphoneInfo(person.smartphone);
}


int main(){
  
  Education education;
  education.university = "Dhaka University";
  education.year = 2014;
  education.subject = "Software Engineer";
  education.pass = 2018;

  Car car;
  car.carname = "BMW";
  car.model = "s5";
  car.color = "blue";
  car.price =  500000.00;

  Smartphone smartphone;
  smartphone.phone = "I phone 12";
  smartphone.price = 999.99;
  smartphone.color = "Black";
  smartphone.storage = 128;

 //   printSmartphoneInfo(smartphone);

  Person person;
  person.name = "Arif Bhuiya";
  person.age = 25;
  person.education = education;
  person.car = car;
  person.smartphone = smartphone;

 printPresonInfo(person);


  system("pause>0");
}