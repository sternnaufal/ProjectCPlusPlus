#include <iostream>
#include <stdio.h>
using namespace std;
int main()
//*deret aritmatika *
{
    float a, b, sn;
    int n;
    cout<<"berikan suku pertama : ";
    cin>>a;
    cout<<"berikan beda :";
    cin>>b;
    cout<<"jumlah deret sampai suku keberapa ?";
    cin>>n;

    sn = (n/2)*(2*a+((n-1)*b));

    cout<<"\njumlah deret hingga suku ke- "<<n<<"adalah "<<sn<<endl;
}
