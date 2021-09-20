#include <stdio.h>

int rekursif(int x, int y){
	if (y = 0){
		return 1;
	}else{
		return x * rekursif(x,(y-1));
	}
}

int main()
{
	int x,y;
	printf("Masukkan Angka yang Akan Dipangkatkan :");
	scanf("%d", &x);
	printf("Masukkan Pangkat :");
	scanf("%d", &y);
	printf("Hasilnya adalah : %d\n", rekursif(x,y));
	return 0;
}
