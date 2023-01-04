#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
           
    char lanjut;
    while(true){
     cout << "lempar dadu ? (y/n) : ";
     cin >> lanjut;  
     if(lanjut == 'y'||lanjut == 'Y'){
       cout << 1 + (rand()% 6) << endl;
     }else if(lanjut == 'n'||lanjut == 'N'){
        break;
     }else{
       cout << "Warning!! MASUKIN Y/N DONG AH....!!"<<endl;
     }
    } 
           
cin.get();
return 0;
}
