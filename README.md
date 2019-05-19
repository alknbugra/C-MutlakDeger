# C-MutlakDeger
absolute value

```sh
// girilen sayının 0 a olan uzaklığını baz alır -10 girsen bile 10 çıkar pozitif çıkmak zorunda.
#include<stdio.h>
#define ABS(x) (((x < 0) ? (-(x)) : (x)))

int main(){
	int a;
	
	printf("Bir tam sayi giriniz : ");
	scanf("%d",&a);
	printf("\nGirdiginiz sayinin mutlar degeri : %d",ABS(a));
	return 0;
}
```
