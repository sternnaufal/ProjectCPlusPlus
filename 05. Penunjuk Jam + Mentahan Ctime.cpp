#include <iostream>
#include <ctime>
using namespace std;
int main(){
char p;
ulang:
time_t a=time(0);
string b=ctime(&a);
cout<<"Jumlah detik: "<<a<<endl<<endl;
cout<<"Setelah dikonversi: "<<b<<endl;
cout<<"\n\nUlang lagi?(y/t)";
cin>>p;
	if(p=='y'){
		goto ulang;
	}
	else if(p=='t'){
		cout<<"Sip";
	}

return 0;}
