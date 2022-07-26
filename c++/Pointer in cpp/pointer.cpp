
// pointer in cpp
#include<iostream>
using namespace std;

 int main(){
 // declare a int variable
 int n = 6;
 
 // print variable value
 cout<< n << endl;
 
 // print variable memory location
 cout << &n << endl;
 
 // point memory location with *ptr variable
 int* ptr = &n;
 
 //print ptr value
 cout << ptr << endl;
 
 //asign a new value with pointer
 *ptr = 10;
 
 // print n value has changed
 cout << n << endl ;

 return 0;
}