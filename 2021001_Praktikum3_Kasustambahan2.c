/*
 * Program  : Kalkulator Sederhana dengan Menu
 * Nama     : Dira Meylani
 * NIM      : 12046126013
 * Deskripsi: if-else + switch-case + nested if
 */

#include <stdio.h>
int main() {
    int pilihan;
    float angka1; 
    float angka2;
    float hasil;

    printf("==== KALKULATOR SEDERHANA ====\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");

    printf("\nMasukkan pilihan: ");
    scanf("%d", &pilihan);

    printf("\nMasukkan angka pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan angka kedua  : ");
    scanf("%f", &angka2);

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            printf("Hasil = %.2f\n", hasil);
            break;

        case 2:
            hasil = angka1 - angka2;
            printf("Hasil = %.2f\n", hasil);
            break;

        case 3:
            hasil = angka1 * angka2;
            printf("Hasil = %.2f\n", hasil);
            break;

        case 4:
            if (angka2 == 0) {
                printf("ERROR: Tidak bisa dibagi nol!\n");
            } else {
                hasil = angka1 / angka2;
                printf("Hasil = %.2f\n", hasil); 
            }
        break;

    default:
            printf("ERROR: Pilihan Tidak Valid!\n");
    }

    return 0;
}