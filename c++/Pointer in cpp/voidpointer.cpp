#include<iostream>

// finction for to print int pointer value
void printNumber(int* numberPtr){
    std::cout << *numberPtr <<std::endl;
}

// function for to print char pointer value
void printLetter(char* letterPtr){
    std:: cout << *letterPtr << std::endl;
 }
// void pointer to print int char value
void print(void* ptr, char type){
    switch(type){
        case 'i':std::cout<< *((int*)ptr) <<std:: endl; break;
        case 'c': std::cout<< *((char*)ptr) << std::endl;break;
    }
}

int main(){
    
    // int variable
    int number = 5;
    // char variable
    char letter = 'a';
    
    //call printNumber function
    printNumber(&number);
    // call printLetter function
    printLetter(&letter);
    
    //call void pointer function for int
    print(&number,'i');
    // call void pointer function for char
    print(&letter, 'c');
      
    return 0;
}