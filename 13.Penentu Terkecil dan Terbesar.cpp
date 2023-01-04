#include <iostream>
using namespace std;
int main() {
	cout<<"PROGRAM C++ BILANGAN TERKECIL DAN TERBESAR"<<endl;
	int i,n;
	float terkecil,terbesar,bil;
	cout << "\nMasukan Jumlah Bilangan : ";
	cin >> n;
	cout<<endl;
	for (i=1;i<=n;i++){
	     cout << "Masukan Bilangan Ke-" << i << " : ";
	     cin >> bil;
	     
	     if (i==1){
	     	terkecil=bil;
	     	terbesar=bil;
		 }
		 else if (bil < terkecil){
		 	terkecil=bil;
		 }else if (bil > terbesar){
		 	terbesar=bil;
		 }else {
		 	
		 }
	}
	cout << "\nNilai Terkecil adalah : "<<terkecil<<endl;
	cout << "Nilai Terbesar adalah : " <<terbesar <<endl;

	return 0;	
}
