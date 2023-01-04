#include <iostream>
#include <conio.h>
using namespace std;
 
int jml, sorting;
 
main(){
    cout << "\t\t== Program Mengurutkan Angka Terbesar ke Terkecil C++ == \n\n";
    cout << "\t\tMasukan jumlah angka : ";
    cin >> jml;
 
    int angka[jml];
 
    for(int i=0; i<jml; i++){
        cout << "\t\t Angka ke " << (i+1) << " : ";
        cin >> angka[i];
    }
 
    for(int c=1;c<jml;c++)
    {
        for(int d=0;d<jml-c;d++)
        {
            if(angka[d]<angka[d+1])
            {
                sorting=angka[d];
                angka[d]=angka[d+1];
                angka[d+1]=sorting;
            }
        }
    }
 
    cout << endl << "\t\tHasil dari pengurutannya Adalah";
    for(int i=0;i<jml;i++)
    {
        cout << " " << angka[i];
    }
}
