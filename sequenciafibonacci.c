#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int a, b, fibonacci, n, contador;

    printf("Por favor, insira um numero maior que 2: ");
    scanf("%d", &n);

    a = 1;
    b = 0;
    contador = 1;

    if(n <= 2){
        printf("Esse numero eh menor ou igual a 2.");
        return -1;
    }

    printf("1");

    while(contador < n){
        fibonacci = a + b;
        b = a;
        a = fibonacci;
        contador = contador + 1;
        printf(", %d", fibonacci);
    }

    return 0;
}
