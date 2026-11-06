/*
 * Program  : Sistem Klasifikasi BMI
 * Nama     : Dira Meylani
 * NIM      : 12046126013
 * Deskripsi: Menggunakan if-else if dengan operator perbandingan
 */

#include <stdio.h>
int main() {
    char nama[50];
    float berat_badan;
    float tinggi_badan;
    float bmi;

    printf("==== SISTEM KLASIFIKASI BMI ====\n");
    printf("Masukkan Nama               : ");
    fgets(nama, 50, stdin);
    
    printf("Masukkan berat badan(kg)    : ");
    scanf("%f", &berat_badan);

    printf("Masukkan tinggi badan(meter): ");
    scanf("%f", &tinggi_badan);

    bmi = berat_badan / (tinggi_badan * tinggi_badan);

    printf("\n================================\n");
    printf("    HASIL KLASIFIKASI BMI \n");
    printf("================================\n");
    printf("Nama     : %s", nama);

    printf("Hasil BMI = %.2f\n", bmi);
        if (bmi < 18.5) {
            printf("Kategori : Berat Badan Kurang\n");
        } else if (bmi <= 24.9) {
            printf("Kategori : Berat Badan Normal\n");
        } else if (bmi <= 29.9) {
            printf("Kategori : Berat Badan Berlebihan\n");
        } else {
            printf("Kategori : Obesitas\n");
        }
        printf("================================\n");

    return 0;
         
}