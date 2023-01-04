
#include <iostream>
using namespace std;
   
     int main(){
     
        string password;
     	password:
        cout<<"Masukkan password :" ;
        cin>>password;
     
        if(password =="SEMANGAT"){
            cout<<"-------------------------------"<<endl;
            cout<<"=  Selamat datang kamu teman  ="<<endl;
            cout<<"-------------------------------"<<endl;
         
         
         }else{
         
            cout<<"----------------------------------"<<endl;
            cout<<"= Mohon maaf password anda salah ="<<endl;
            cout<<"----------------------------------"<<endl;
            	goto password;
         }
         cout<<"Kamu berhasil login";
     }
