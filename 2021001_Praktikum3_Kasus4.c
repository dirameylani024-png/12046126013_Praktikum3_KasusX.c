/*
 * Program  : Sistem Tarif Parkir Mall
 * Nama     : Dira Meylani
 * NIM      : 12046126013
 * Deskripsi: switch-case (char) + nested if untuk denda
 */

#include <stdio.h>
int main() {
    char jenis;
    int lama;
    int tarif;

    printf("==== SISTEM PARKIR MALL SI ====\n");
    printf("Jenis Kendaraan (M=Motor, A=Mobil): ");
    scanf("%c", &jenis);

    printf("Lama Parkir (jam)                 : ");
    scanf("%d", &lama);
        
    switch (jenis) {
        case 'M':
        case 'm':
            tarif = lama * 2000;
            if (lama > 5) {
                tarif = tarif + 10000;
                printf("Anda kena denda Rp 10.000 (parkir > 5 jam)\n");
            }
            printf("Total Tarif Motor                 : Rp %d\n", tarif);
            break;

        case 'A':
        case 'a':
            tarif = lama * 4000;
            if (lama > 5) {
                tarif = lama * 15000;
                    printf("Anda kena denda Rp 15.000 (parkir > 5 jam)\n");
                } 
                printf("Total Tarif Mobil                 : Rp %d\n", tarif);
                break;

        default:
            printf("ERROR: Jenis kendaraan tidak valid!\n");
            printf("Gunakan huruf M atau A saja.\n");
}

printf("\nTerima kasih.\n");
return 0;
}

    
