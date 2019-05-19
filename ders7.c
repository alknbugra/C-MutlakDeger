// ders 7 mutlak deðer
// girilen sayýnýn 0 a olan uzaklýðýný baz alýr -10 girsen bile 10 çýkar pozitif çýkmak zorunda.
#include<stdio.h>
#define ABS(x) (((x < 0) ? (-(x)) : (x)))

int main(){
	int a;
	
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&a);
	printf("\nGirdiginiz sayinin mutlar degeri : %d",ABS(a));
	return 0;
}
