#include <iostream>
using namespace std;
int main(){
        int solar[50], pertalite[50], pertamax[50];
        int n, hsolar, hpertalite, hpertamax;

        cout<<"Masukan Harga Solar = ";
        cin>>hsolar;
        cout<<"Masukan Harga Pertalite = ";
        cin>>hpertalite;
        cout<<"Masukan Harga Pertamax = ";
        cin>>hpertamax;
        cout<<endl;
        cout<<"Masukan Jumlah liter = ";
        cin>>n;

        cout<<endl;
        cout<<"-------------------------DAFTAR HARGA---------------------"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"lITER          SOLAR         PERTALITE            PERTAMAX"<<endl;
        cout<<"----------------------------------------------------------"<<endl;

        for (int i=1;i<=n;i++) {
                solar[i]=i*hsolar;
                pertalite[i]=i*hpertalite;
                pertamax[i]=i*hpertamax;
                cout<<i<<"               "<<solar[i]<<"            "<<pertalite[i]<<"           "<<pertamax[i]<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;
return 0;
}
