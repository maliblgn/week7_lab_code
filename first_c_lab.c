#include <stdio.h>

/*int main(){
    int sayi1, sayi2, toplam;
    printf("1. sayiyi giriniz\n");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz\n");
    scanf("%d", &sayi2);
    toplam=sayi1+sayi2;
    printf("toplam: %d\n", toplam);

    return 0;
}*/

/*int main(){
    int a, b, temp;
    printf("1. sayiyi giriniz\n");
    scanf("%d", &a);
    printf("2. sayiyi giriniz\n");
    scanf("%d", &b);
    temp=a;
    a=b;
    b=temp;
    printf("sayilariniz degistirildi 1.sayi: %d  2.sayi: %d", a, b);

    return 0;
}*/

/*int main(){
    int no, vize, final, geçmenotu;
    printf("ogrenci numaranizi giriniz\n");
    scanf("%d", &no);
    printf("vize notunuzu giriniz\n");
    scanf("%d", &vize);
    printf("final notunuzu giriniz\n");
    scanf("%d", &final);
    vize=vize*40/100;
    final=final*60/100;
    geçmenotu=vize+final;
    printf("%d numarali ogrencinin geçme notu: %d",no,geçmenotu);

    return 0;
}*/

/*int main(){
    int c;
    double radius, perimeter, area;
    printf("yaricap giriniz\n");
    scanf("%lf", &radius);
    printf("cevre hesaplamak için 1 bas, alan hesaplamak için 2 bas\n");
    scanf("%d", &c);
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    if (c==1)
    {
        printf("cevre: %lf", perimeter);
    }
    if (c==2)
    {
        printf("alan: %lf", area);
    }
    else{
        printf("yanlis tercih tekrar deneyiniz!");
    }

    return 0;
}*/

int main(){
    int money, yuzluk, ellilik, yirmilik, onluk;
    printf("para miktarini giriniz\n");
    scanf("%d", &money);
    while (money%10!=0)
    {
        printf("yanlis para miktari girdiniz 10'un katlari olan para miktari giriniz\n");
        scanf("%d", &money);
    }
    yuzluk=money/100;
    money=money%100;
    ellilik=money/50;
    money=money%50;
    yirmilik=money/20;
    money=money%20;
    onluk=money/10;
    printf("yuzluk: %d \n ellilik: %d \n yirmilik: %d \n onluk: %d", yuzluk, ellilik, yirmilik, onluk);
    
    return 0;
}