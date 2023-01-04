
#include <iostream>
int main(){
  using namespace std;
    cout <<"Menghitung Nilai FPB dengan C++\n";
    cout <<"===============================\n";
    
    int angka1, angka2;
    cout <<"Masukan dua angka (pisahkan dengan spasi): ";
    cin >> angka1 >> angka2;
    
    while (angka1 != angka2){
        if (angka1 > angka2){
            angka1 = angka1 - angka2;
        } else {
            angka2 = angka2 - angka1;
        }
    }
    
    cout <<"FPB-nya adalah "<< angka1;
    cout <<"\n===============================\n";
    cout << endl;
    return 0;
}
