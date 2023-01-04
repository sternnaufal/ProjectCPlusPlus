#include <iostream> 
using namespace std;
int main()
{
  cout << "##  Program C++ Cek Tahun Kabisat  ##" << endl;
  cout << "=====================================" << endl;
  cout << endl;
 
  int year;
 
  cout << "Input tahun: ";
  cin >> year;
 
   if (year % 400 == 0) {
     cout << year << " adalah tahun kabisat";
   }
   else if (year % 100 == 0) {
     cout << year << " bukan tahun kabisat";
   }
   else if (year % 4 == 0) {
     cout << year << " adalah tahun kabisat";
   }
   else {
     cout << year << " bukan tahun kabisat";
   }
 
  cout << endl;
  return 0;
}
