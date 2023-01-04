#include <iostream>
using namespace std;
int main (){

char a='*'; //bisa diganti dengan apapun

int f,i,c;

cout<<"masukan nilai tinggi:";

cin>>f;

for(i=1; i<=f; i++){

cout<<a;

if(i==1)

for(c=1; c<=3; c++)

cout<<a;

if(i==3)

for(c=1; c<=3; c++)

cout<<a;

cout<<endl;

}
}

