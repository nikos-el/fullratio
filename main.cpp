#include <iostream>
#include "fullratio.hpp"

using namespace std;

int main(){
  rational a(1,2);
  rational b(5,7);
  rational c(6,3);
  rational d(1,3);
  rational e(-1,1);
  rational f(3,8);
  rational g(6,2);
  cout<<(((a+b-c+d)+e)*(a-f/f))/g<<endl;
  cout<<a<<" should still be 1/2"<<endl;
  cout<<a/b;
  return 0;
}
