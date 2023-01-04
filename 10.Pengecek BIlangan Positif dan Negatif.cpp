#include <iostream>
using namespace std;
int main(){
    int bil;
        cout << "Masukkan bilangan: ";
        cin >> bil;
        if (bil > 0){
            cout <<bil<< " Bilangan bulat positif \n";
        }
        else if(bil < 0){
            cout <<bil<< " Bilangan bulat negatif \n";
        }
        return 0;
}
