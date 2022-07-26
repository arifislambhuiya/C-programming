//When an operand is of Class type.
#include <iostream>

class  Base{
    int a;
    //If we add one more integer variable in a class, then the code would look like:
    int b;
    
    //If we add a char variable in the above code, then the code would look like:


    char c;
    
    //In the above code, the class has two integer variables, and one char variable. According to our calculation, the size of the class would be equal to 9 bytes (int+int+char), but this is wrong due to the concept of structure padding.
};

int main(){
    
      Base b;
      std:: cout << "size of b = " << sizeof(b) << std::endl;
    
    return 0;
}