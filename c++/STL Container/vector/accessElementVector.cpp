#include <iostream>
#include <vector>

int main (){

 std::vector <int> num{1,2,3,4,5};
 
    std::cout<< "Elements of index 0 = " << num.at(0) << std::endl;
    std::cout << "Elements of index 2 = " << num.at(2) << std::endl;
    std::cout << "Elements of index 4 = " << num.at(4);
    
    //we can also access vector elements [] like an array
    std:: cout << "\n";
    std:: cout << "\n";
    
    std::vector <int> num1 = {6,7,8,9,10};
 
    std::cout<< "Elements of index 0 = " << num1[0] << std::endl;
    std::cout << "Elements of index 2 = " << num1[2] << std::endl;
    std::cout << "Elements of index 4 = " << num[4];
    
    return 0;
}






