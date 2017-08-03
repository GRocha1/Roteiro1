#include <stdio.h>
#include <stdlib.h>

int main(void){

int a, b, maior = 0;

while(1){

	scanf("%d", &a);

	if(a == 0){
	 break;
	}

	if(a > maior){
	maior = a;
	}else{
	maior = maior;
	}
}
printf("Maior = %d\n", maior);

return 0;
}
