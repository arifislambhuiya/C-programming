#include <iostream>
using namespace std;

int recursive_sum(int m,int n){
    if(m == n)
      return n;
    return m + recursive_sum(m + 1,n);
}


int main(){
   int m = 2, n = 4;
   cout << recursive_sum(m,n) << endl;
    
    return 0;
}






