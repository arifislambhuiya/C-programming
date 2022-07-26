#include <iostream>


int main(){
   
   int var = 5;

  std:: cout << var << std::endl;
  std::cout << &var << std::endl;

  int* ptr = &var;
  std:: cout << ptr << std::endl;

  *ptr = 10;

  std:: cout << ptr << std::endl;
  std::  cout << var << std::endl;

  std::cin.get();
}