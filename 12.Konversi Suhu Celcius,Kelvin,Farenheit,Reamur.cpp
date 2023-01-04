#include <iostream>
using namespace std;
int main() {
	int p;
	cout<<"PROGRAM C++ KONVERSI SUHU"<<endl;
	cout<<"PIlihlah Suhu yang diketahui"<<endl;
	cout<<"1.Celcius"<<endl;
	cout<<"2.Kelvin"<<endl;
	cout<<"3.Farenheit"<<endl;
	cout<<"4.Reaumur"<<endl;
	cin>>p;
	if(p==1){
		goto c;
	}
	else if(p==2){
		goto k;
	}
	else if(p==3){
		goto f;
	}
	else if(p==4){
		goto r;
	}
	double c, k, f, r;
	
	c:
	cout<<"Masukan Suhu (Celsius) : ";
	cin>>c;
	k=c+273.15;
	f=(c*1.8)+32;
	r=c*0.8;
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Celsius ke:"<<endl;
	cout<<"Kelvin     : "<<k<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Reaumur    : "<<r<<endl;
	
	k:
	cout<<"Masukan Suhu (Kelvin) : ";
	cin>>k;
	c=k-273.15;
	f=(k-273.15)*1.8+32;
	r=(k-273.15)*0.8;
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Kelvin ke:"<<endl;
	cout<<"Celsius    : "<<c<<endl;
	cout<<"Fahrenheit : "<<f<<endl;
	cout<<"Reaumur    : "<<r<<endl;
	
	f:
	cout<<"Masukan Suhu (Farenheit) : ";
	cin>>f;
	c=(f-32)*5/9;
	k=(f-32)*5/9+273.15;
	r=(f-32)*4/9;
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Farenheit ke:"<<endl;
	cout<<"Celsius    : "<<c<<endl;
	cout<<"Kelvin	  : "<<k<<endl;
	cout<<"Reaumur    : "<<r<<endl;
	
	r:
	cout<<"Masukan Suhu (Reaumur) : ";
	cin>>r;
	c=r*5/4;
	k=r*5/4+273.15;
	f=r*9/4+32;
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Reaumur ke:"<<endl;
	cout<<"Celsius    : "<<c<<endl;
	cout<<"Kelvin	  : "<<k<<endl;
	cout<<"Farenheit  : "<<f<<endl;
	return 0;
}
