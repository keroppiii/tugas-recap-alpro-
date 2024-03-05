#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//program tersebut terdiri dari dua perulangan for dengan dua variabel i dan j
//proses perulangan akan menampilkan nilai i dan j dan hasil perkalian keduanya
//kemudian program akan mencetak baris baru untuk menampilkan hasil perkalian berikutnya