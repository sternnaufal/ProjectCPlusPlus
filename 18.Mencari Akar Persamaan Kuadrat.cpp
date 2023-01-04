
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Mencari Akar Persamaan Kuadrat ##" << endl;
  cout << "=================================================" << endl;
  cout << endl;
 
  int a, b, c, D;
  float x1, x2;
 
  cout << "Format persamaan: ax^2 + bx + c = 0 " << endl;
  cout << "Input nilai a: ";
  cin >> a;
  cout << "Input nilai b: ";
  cin >> b;
  cout << "Input nilai c: ";
  cin >> c;
 
  cout << endl;
 
  D = (b*b)-(4*a*c);
  cout << "Diskriminan = " << D;
 
  if (D>0){
    cout << " (akar real dan berbeda)" <<endl;
 
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);
 
    cout << "x1 = " << x1 <<endl;
    cout << "x2 = " << x2 <<endl;
  }
  else if (D==0){
    cout << " (akar real dan sama)" <<endl;
 
    x1 = x2 = (-b + sqrt(D)) / (2*a);
 
    cout << "x1 = " << x1 <<endl;
    cout << "x2 = " << x2 <<endl;
  }
  else {
    cout << " (akar tidak real / imajiner)" <<endl;
  }
 
  return 0;
}
