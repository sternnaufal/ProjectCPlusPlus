#include <iostream>
using namespace std;
int main(){
    int bil, jum, i;
        cout << "Masukkan bilangan: ";
        cin >> bil;
	jum = 0;
 
        for (i=1; i<=bil; i++){
            if (bil%i==0){
                jum++;
            }
        }
     
        if (jum==2){
            cout <<bil<< " Adalah Bilangan prima \n";
        }
        else{
            cout <<bil<< " Bukan bilangan prima \n";
        }
        return 0;
}
