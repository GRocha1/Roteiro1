#include <stdio.h>
#include <stdlib.h>

int main(void){

double salarioBruto, INSS, salarioL;

printf("Digite o salario bruto: ");
scanf("%lf", &salarioBruto);

if(salarioBruto <= 420){
 INSS = 0.08;
}
if(salarioBruto > 420 && salarioBruto <= 1350){
 INSS = 0.09;
}
if(salarioBruto > 1350){
 INSS = 0.1;
}

salarioL = salarioBruto - (salarioBruto*INSS);

printf("Valor do desconto do INSS: %.2lf reais.\nSalarior liquido %.2lf reais.\n", salarioBruto*INSS, salarioL); 

return 0;
}
