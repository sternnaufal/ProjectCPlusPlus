
#include <iostream>
using namespace std;
int main()
{
    int nilai[100], jumlah;
    char nama[100][100];
    cout<<"===menentukan kelulusan===\n";
    cout<<"\nmasukkan jumlah siswa: ";
    cin>>jumlah;
    for (int i=0;i<jumlah;i++){
    	cout<<"Siswa Urutan ke- "<<i+1<<endl;
        cout<<"1.masukkan nama siswa: ";
        cin>>nama[i];
        cout<<"2.masukkan nilai siswa: ";
        cin>>nilai[i];
    }
    cout<<"\n======tampilkan data======\n\n";
    for (int i=0;i<jumlah;i++){
        cout<<i+1<<". "<<nama[i]<<" nilai: "<<nilai[i]<<endl;
    }
    cout<<"\n====tentukan kelulusan====\n\n";
    for (int i=0;i<jumlah;i++){
        if (nilai[i]<75){
                cout<<i+1<<". "<<nama[i]<<" dengan nilai: "<<nilai[i]<<" dinyatakan [TIDAK LULUS]\n";
        } else {
                cout<<i+1<<". "<<nama[i]<<" dengan nilai: "<<nilai[i]<<" dinyatakan [LULUS]\n";
        }
    }
    return 0;
}
