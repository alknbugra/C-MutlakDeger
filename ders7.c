// ders 7 mutlak de�er
// girilen say�n�n 0 a olan uzakl���n� baz al�r -10 girsen bile 10 ��kar pozitif ��kmak zorunda.
#include<stdio.h>
#define ABS(x) (((x < 0) ? (-(x)) : (x)))

int main(){
	int a;
	
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&a);
	printf("\nGirdiginiz sayinin mutlar degeri : %d",ABS(a));
	return 0;
}
