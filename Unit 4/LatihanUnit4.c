#include <stdio.h>

int main(){
    int sisi;
    int KelilingPersegi;
    int LuasPersegi;
    int VolumeKubus;

    printf("masukkan jumlah sisi : ");
    scanf("%d", &sisi);

    KelilingPersegi = 4*sisi;
    LuasPersegi = sisi*sisi;
    VolumeKubus = sisi*sisi*sisi;

    printf("keliling persegi : %d\n", KelilingPersegi);
    printf("luas persegi : %d\n", LuasPersegi);
    printf("volume kubus : %d\n", VolumeKubus);
    

    return 0;
}
