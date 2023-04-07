#include <stdio.h>

int alt_kumeye_bolme(int eleman_sayisi) {
    int dizi[eleman_sayisi];
    int i;
    int toplam=0;

    for (i = 0; i < eleman_sayisi; i++) {					
        printf("Dizinin %d. elemanini girin: ", i+1);
        scanf("%d", &dizi[i]);
        toplam+=dizi[i];
    }

    if (toplam%2==0)
        printf("Dizi iki alt kumeye bolunebilir");
    else
        printf("Dizi iki alt kumeye bolunemez");

    return 0;
}

int main() {
    int eleman_sayisi;

    printf("Dizinin eleman sayisini girin: ");
    scanf("%d",&eleman_sayisi);

    alt_kumeye_bolme(eleman_sayisi);

    return 0;
}

