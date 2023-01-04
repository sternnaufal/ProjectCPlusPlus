#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,n,a;
	cout<<"	Eksponen ke Logaritma\n";
	cout<<"-------------------------------------\n";
	cout<<"Masukkan Bilangan Pokok: ";
	cin>>a;
	cout<<"Masukkan Nilai Pangkat: ";
	cin>>n;
	x=pow(a,n);
	cout<<"Maka Logaritmanya adalah:\n";
	cout<<a<<"^"<<n<<" = "<<x<<endl;
	cout<<a<<"log "<<x<<" = "<<n<<endl;
}
