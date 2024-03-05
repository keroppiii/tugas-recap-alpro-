#include <stdio.h>

int main(){
    int i;
    int jumlahElemen;
    int array[jumlahElemen];
    int total = 0;

    printf("masukkan jumlah elemen : ");
    scanf("%d", &jumlahElemen);

    printf("masukkan angka : ");
    for(i=0; i<jumlahElemen; i++){
        scanf("%d", &array[i]);
    }

    for(i=0; i<jumlahElemen; i++){
        total += array[i];
    }
    printf("hasil penjumlahan seluruh elemen pada array : %d", total);

    return 0;
}
