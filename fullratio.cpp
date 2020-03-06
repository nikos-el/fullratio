#include <iostream>

#ifndef CONTEST
#include "fullratio.hpp"
#endif

using namespace std;

rational::rational (int n, int d): nom(n), den(d) {}

rational operator + (const rational &x, const rational &y) {
  int n=x.nom*y.den+y.nom*x.den;
  int d=x.den*y.den;
  int z=rational::gcd(n,d);
  return rational(n/z, d/z);
}

rational operator - (const rational &x, const rational &y) {
  int n=x.nom*y.den-y.nom*x.den;
  int d=x.den*y.den;
  int z=rational::gcd(n,d);
  return rational(n/z, d/z);
}

rational operator * (const rational &x, const rational &y) {
  int n=x.nom*y.nom;
  int d=x.den*y.den;
  int z=rational::gcd(n,d);
  return rational(n/z, d/z);
}

rational operator / (const rational &x, const rational &y) {
  return x * rational(y.den,y.nom);
}

ostream& operator << (ostream &out, const rational &x){
  out<<x.nom<<"/"<<x.den;
  return out;
}

int rational::gcd(int a, int b){
  a=abs(a); b=abs(b);
  while (a>0 && b>0){
    if (a>b) a%=b;
    else b%=a;
  }
  return a+b;
}
