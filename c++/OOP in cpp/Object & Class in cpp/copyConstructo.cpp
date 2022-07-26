#include<iostream>

using namespace std;
 

  class Point{
    private:
      int x,y;
      
    public:
    
     Point(int a,int b){
         
         x = a;
         y = b;
     }
     
     Point(const Point &p1){
         
         x = p1.x;
         y = p1.y;
     }
     
     int getX(){
         
         return x;
     }
     
    int getY(){
         
         return y;
     }
      
  };
  
  
int main(){
    
Point p1(10,20);
Point p2 = p1;

cout <<"x = "<< p1.getX() << ","<<"y = "<< p1.getY() << endl;
cout << "x = "<< p2.getX() <<","<< " y = "<< p2.getY() << endl;

  return 0;
}