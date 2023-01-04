#include <stdio.h>
using namespace std;
 
int main()
{
   
    /* DEKLARASI */
    float tinggi, berat, beratSeharusnya, selisihBerat, bmi;
   
    /* ALGORITMA */
    printf("Berat(kg) : "); scanf("%f", &berat);
    printf("Tinggi(cm) : "); scanf("%f", &tinggi);
   
    tinggi = tinggi / 100;
   
    bmi = berat / (tinggi * tinggi);
   
    printf("\n=============================\n");
   
    printf("BMI Anda adalah %.2f \n", bmi);
   
    if(bmi < 18.00)
    {
        beratSeharusnya = 18 * tinggi * tinggi;
        selisihBerat = beratSeharusnya - berat;
    } else if (bmi > 21.00)
    {
        beratSeharusnya = 21 * tinggi * tinggi;
        selisihBerat = berat - beratSeharusnya;
    };
   
    if (bmi >= 18 && bmi <= 21)
    {
        printf("Berat badan Anda normal.");
    } else if(bmi <= 18)
    {
        printf("Underweight, Anda perlu menaikkan menaikkan berat badan Anda sebesar %.2f kg", selisihBerat);
    } else
    {
        printf("Overweight, Anda perlu menurunkan berat badan Anda sebesar %.2f kg", selisihBerat);
    };
   
    return 0;
}
