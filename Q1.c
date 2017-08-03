#include <stdio.h>
#include <stdlib.h>

int main(void){

double preco, desconto, precofinal;
int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite o preco do produto: ");
scanf("%lf", &preco);

if(idade <= 18){
     desconto = 0.1;     		
}else{
     desconto = 0.2;
}

precofinal = preco - (preco*desconto);

printf("Valor do desconto: %.2lf reais.\nValor final %.2lf.\n", desconto*preco, precofinal); 

return 0;
}
