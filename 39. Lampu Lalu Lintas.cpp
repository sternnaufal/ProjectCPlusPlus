#include <iostream>
#include <string>

using namespace std;
int main()
{
   string w;
   cout << "masukan warna" << endl;
   cin >> w;
   if (w=="merah" || w=="MERAH")
   {
      cout << "berhenti" << endl;   }
   else
   {
      if (w=="kuning" || w=="KUNING")
      {
         cout << "hati-hati" << endl;      }
      else
      {
         if (w=="hijau" || w=="HIJAU")
         {
            cout << "jalan" << endl;         }
         else
         {
            cout << "warna salah" << endl;         }
      }
   }

   return 0;
}
