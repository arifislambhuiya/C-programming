#include <iostream>
#include <math.h>
using namespace std;

int main(){
 int n;
 cin >> n;
  int original = n;
 int sum = 0;

 while(n>0){
    int lastDigit = n%10;
    sum += pow(lastDigit,3); 
    n = n/10;
 }

 if(sum == original){
    cout << "Armstrong Number" << endl;
 }else{
    cout << "Not Armstrong Number" << endl;
  }
  
    return 0;
}