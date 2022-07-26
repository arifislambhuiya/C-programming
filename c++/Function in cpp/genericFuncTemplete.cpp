#include <iostream>
using namespace std;

/*
void Swap(int &a, int &b){
    
    int temp = a;
    a = b;
    b = temp;
}

void Swap(char &c, char &d){
    int temp = c;
    c = d;
    d = temp;
}
*/

template<class Type>
void Swap(Type &a,Type &b){
    Type temp = a;
    a = b;
    b = temp;
    
}


int main(){
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a,b);
    cout << a << " - " << b << endl;
    
    
    char c = 'c', d = 'd' ;
    cout << c << " - " << d <<endl;
    Swap(c ,d);
    cout << c << " - " << d << endl;
    
    return 0;
}