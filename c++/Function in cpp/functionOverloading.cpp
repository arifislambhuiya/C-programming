#include <iostream>
using namespace std;

// function declaration
int sum( int a ,int b);
double sum (double a,double b);
float sum ( float a, float b, float c);



// main function in cpp the program will start here
int main(){
    cout << sum(5,8) << endl;
    cout << sum(10.5,5.6) <<endl;
    cout << sum(2.2,4.6,7.9) << endl;
    
    return 0;
}


// function defination 
int sum (int a, int b){
    return a + b;
}


double sum(double a, double b){
    return a + b;
}

float sum(float a, float b,float c){
    return a + b + c;
}