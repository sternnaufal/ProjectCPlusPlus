#include<iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<" Menentukan Posisi Suatu Titik "<<endl;
    cout<<" Pada Koordinat Cartesius "<<endl;
    cout<<endl;

    cout<<"Masukkan Nilai x : ";cin>>x;

    cout<<"Masukkan Nilai y : ";cin>>y;

    cout<<endl;
    if ((x==0) && (y==0))
    {
        cout<<"Masukkan tidak boleh 0...";
    }

    else if ((x!=0)&&(y!=0)&&(x>=-1000)&&(x<=999)&&(y>=-200)&&(y<=180))
    {
    switch (x,y)
    {
    case -1000 ... 999 :
        if ((x>0) && (y>0))
            cout<<"Koordinat ("<<x<<","<<y<<") terletak pada Kuadran I"<<endl;
        else if((x<0) && (y>0))
            cout<<"Koordinat ("<<x<<","<<y<<") terletak pada Kuadran II"<<endl;
        else if ((x<0) && (y<0))
            cout<<"Koordinat ("<<x<<","<<y<<") terletak pada Kuadran III"<<endl;
        else if((x>0) && (y<0))
            cout<<"Koordinat ("<<x<<","<<y<<") terletak pada Kuadran VI"<<endl;
    }

    }
        else
        cout<<" koordinat diluar jangkauan";}
