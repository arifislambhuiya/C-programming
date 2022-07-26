#include <iostream>

int main(){
    int* pointInt;
    float* pointFloat;
    
    pointInt = new int;
    pointFloat = new float;
    
    
    *pointInt = 45;
    *pointFloat = 45.45f;
    
    
    std::cout << *pointInt << std::endl;
    std::cout << *pointFloat << std:: endl;
    
    
    delete pointInt;
    delete pointFloat;
    
    
    return 0;
}