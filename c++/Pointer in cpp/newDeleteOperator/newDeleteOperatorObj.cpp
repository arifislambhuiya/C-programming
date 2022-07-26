#include <iostream>
using namespace std;

class Student {
    int age;

   public:

    // constructor initializes age to 12
    Student() : age(32) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {

    // dynamically declare Student object
    Student* student = new Student();

    // call getAge() function
    student->getAge();

    // ptr memory is released
    delete student;
    
    student->getAge();

    return 0;
}
