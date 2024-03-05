#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//program tersebut terdiri dari dua perulangan while dengan dua variabel i dan j
//setiap proses perulangan akan menampilkan nilai i dan j dan hasil perkalian keduanya
//kemudian program akan mencetak baris baru untuk menampilkan hasil perkalian berikutnya
