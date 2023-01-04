#include <cmath>
#include <iostream>
#include <conio.h>
#define PI 3.141
using namespace std;
int main()
{
    cout << "  "<    cout << "        Menghitung sin,cos, dan tan        "<<endl;    
	cout << "==========================================="<<endl;
	    double sudutA,sinA,cosA,tanA;

    cout << "Masukkan nilai sudut yang akan dihitung";
    cout << " A= "; cin>>sudutA;
        sinA = sin(sudutA*PI/180);
    cosA = cos(sudutA*PI/180);
    tanA = tan(sudutA*PI/180);
    cout << "sin A = " << sinA<<endl;
	cout << "cos A = " << cosA<<endl;    
	cout << "tan A = " << tanA<<endl;
getch();
}
