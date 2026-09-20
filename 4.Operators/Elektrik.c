#include<stdio.h>
#include<stdlib.h>

int main()
{
    float odenecekFatura,eskiBirimFiyat, yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma, eskiOkuma, harcananElektrik;

    printf("Yeniokumani giriniz:");
    scanf("%d",&yeniOkuma);
    printf("Eski Okumani yaziniz:");
    scanf("%d",&eskiOkuma);
    harcananElektrik=yeniOkuma-eskiOkuma;
    printf("Bu aydaki harcanan elektrik:%d\n",harcananElektrik);
    printf("Aylik enflasyonu giriniz:");
    scanf("%f",&enflasyon);
    printf("Eski abone ucreti kansha edi? ");
    scanf("%f",&eskiAboneUcreti);
    yeniAboneUcreti=(eskiAboneUcreti*enflasyon)+eskiAboneUcreti;
    printf("Osy aydagy abone ucreti:%f\n", yeniAboneUcreti);
    
    printf("Eski birim fiyati kansha edi? ");
    scanf("%f",&eskiBirimFiyat);
    yeniBirimFiyat=(eskiBirimFiyat*enflasyon)+eskiBirimFiyat;
    printf("Osy aydagy birim fiyati:%f\n", yeniBirimFiyat);
    odenecekFatura=harcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
    printf("Toplam odenecek elektrik faturasi:%f",odenecekFatura);

        return 0;
}