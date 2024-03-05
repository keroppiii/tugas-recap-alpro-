#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

//perbedaan output dari program pada percobaan5a dengan percobaan5b terdapat pada penggunaan fungsi scanf() dan fgets()
//scanf() hanya dapat membaca satu buah kata pada teks 
//sedangkan fgets() dapat membaca satu baris teks
