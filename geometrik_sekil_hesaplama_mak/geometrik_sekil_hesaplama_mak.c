#include <stdio.h>

int main() {
    //sekil secimi icin değişken atama
    int kod;

    //kare icin değişken atama
    float karesecim, karecevre, karealan, karekenar;

    //dikdortgen icin değişken atama
    float dikdortgensecim, dikdortgencevre, dikdortgenalan, dikdortgenkenar1, dikdortgenkenar2;

    //çember icin değişken atama
    float pi, yaricap, cemberalan, cembercevre;
    int cembersecim;
    pi = 3.14;

    //üçgen için değişken atama
    float ucgensecim, taban, yukseklik, ucgencevre, ucgenalan;
    float kenar1, kenar2, kenar3;


    printf("Hesap Programina hos geldiniz\n**************************\n");
    printf("Lutfen islem yapmak istediginiz seklin kodunu giriniz\n");
    printf("Kare icin '1'\nDikdortgen icin '2'\nCember icin '3'\nUcgen icin '4'\nKod Giriniz: ");
    scanf_s("%d", &kod);
    printf("*****************\n");
    switch (kod)
    {
        //kare hesaplamaları icin case kodu
    case 1:
        printf("'Kare' seklini sectiniz.\nAlan hesabi icin '1'\nCevre hesabi icin '2'\nTuslayiniz: ");
        scanf_s("%f", &karesecim);

        //kare alan hesaplama
        if (karesecim == 1)
        {
            printf("*****************\nKare icin alan hesaplama islemini sectiniz\n");
            printf("Karenin kenar uzunlugunu giriniz: ");
            scanf_s("%f", &karekenar);
            karealan = karekenar * karekenar;
            printf("Islemin sonucu: %f", karealan);

        }//kare cevre hesaplama
        else if (karesecim == 2)
        {
            printf("*****************\nKare icin alan hesaplama islemini sectiniz\n");
            printf("Karenin kenar uzunlugunu giriniz: ");
            scanf_s("%f", &karekenar);
            karecevre = karekenar *  karekenar;
            printf("Islemin sonucu: %f", karecevre);
        }
        else
        {
            printf("hatali tuslama yaptiniz");
        }
        break;
        //dikdortgen hesaplamalari icin case kodu
    case 2:
        printf("'Dikdortgen' seklini sectiniz.\nAlan hesabi icin '1'\nCevre hesabi icin '2'\nTuslayiniz: ");
        scanf_s("%f", &dikdortgensecim);
        //dikdortgen alan hesap
        if (dikdortgensecim == 1)
        {
            printf("*****************\nDikdortgen icin alan hesaplama islemini sectiniz\n");

            printf("Dikdortgenin 'kisa' kenar uzunlugunu giriniz: ");
            scanf_s("%f", &dikdortgenkenar1);

            printf("Dikdortgenin 'uzun' kenar uzunlugunu giriniz: ");
            scanf_s("%f", &dikdortgenkenar2);

            dikdortgenalan = dikdortgenkenar1 * dikdortgenkenar2;
            printf("Islemin sonucu: %f", dikdortgenalan);
        }

        //dikdortgen cevre hesap
        else if (dikdortgensecim == 2)
        {
            printf("*****************\nDikdortgen icin cevre hesaplama islemini sectiniz\n");


            printf("Dikdortgenin 'kisa' kenar uzunlugunu giriniz: ");
            scanf_s("%f", &dikdortgenkenar1);

            printf("Dikdortgenin 'uzun' kenar uzunlugunu giriniz: ");
            scanf_s("%f", &dikdortgenkenar2);

            dikdortgencevre = (dikdortgenkenar1 * 2) + (dikdortgenkenar2 * 2);
            printf("Islemin sonucu: %f", dikdortgencevre);
        }
        else
        {
            printf("Hatali tuslama yaptiniz");
        }
        break;
        //çember hesaplamalari icin case kodu
    case 3:
        printf("'Cember' seklini sectiniz.\nAlan hesabi icin '1'\nCevre hesabi icin '2'\nTuslayiniz: ");
        scanf_s("%d", &cembersecim);
        //çember alan hesap
        if (cembersecim == 1)
        {
            printf("*****************\nCember icin alan hesaplama islemini sectiniz\n");
            printf("Cemberin 'yari cap' uzunlugunu giriniz: ");
            scanf_s("%f", &yaricap);
            cemberalan = pi * yaricap * yaricap;
            printf("Islemin sonucu: %f", cemberalan);

        }
        //çember çevre hesap
        else if (cembersecim == 2)
        {
            printf("*****************\nCember icin cevre hesaplama islemini sectiniz\n");
            printf("Cemberin 'yari cap' uzunlugunu giriniz: ");
            scanf_s("%f", &yaricap);
            cembercevre = 2 * pi * yaricap;
            printf("Islemin sonucu: %f", cembercevre);
        }
        else
        {
            printf("Hatali tuslama yaptiniz");
        }
        break;
        //Üçgen hesaplamalari icin case kodu
    case 4:
        printf("'Ucgen' seklini sectiniz.\nAlan hesabi icin '1'\nCevre hesabi icin '2'\nTuslayiniz: ");
        scanf_s("%f", &ucgensecim);
        //üçgen alan hesaplama
        if (ucgensecim == 1)
        {
            printf("*****************\nUcgen icin alan hesaplama islemini sectiniz\n");

            printf("Ucgenin 'taban' uzunlugunu giriniz: ");
            scanf_s("%f", &taban);

            printf("Ucgenin 'yukseklik' uzunlugunu giriniz: ");
            scanf_s("%f", &yukseklik);

            ucgenalan = (taban * yukseklik) / 2;
            printf("Islemin sonucu: %f", ucgenalan);
        }
        else if (ucgensecim == 2)
        {
            printf("*****************\nUcgen icin cevre hesaplama islemini sectiniz\n");

            printf("Ucgenin '1. kenar' uzunlugunu giriniz: ");
            scanf_s("%f", &kenar1);

            printf("Ucgenin '2.kenar' uzunlugunu giriniz: ");
            scanf_s("%f", &kenar2);

            printf("Ucgenin '3.kenar' uzunlugunu giriniz: ");
            scanf_s("%f", &kenar3);

            ucgencevre = kenar1 + kenar2 + kenar3;
            printf("Islemin sonucu %f", ucgencevre);

        }
        break;
    default:printf("!!!!!!Hatali tuslama yaptiniz!!!!!!"); break;

    }

}
