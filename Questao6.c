#include <stdio.h>

int maior_de_tres(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int n1, n2, n3;
    
    printf("** \ESCREVA TRES VALORES/ **\n");
    printf("\n");
    
    printf("Escreva o primeiro valor: ");
    scanf("%d", &n1);
    
    printf("Escreva o segundo valor: ");
    scanf("%d", &n2);
    
    printf("Escreva o terceiro valor: ");
    scanf("%d", &n3);
    
    int maior = maior_de_tres(n1, n2, n3);
    printf("O maior numero e: %d\n", maior);
    
    return 0;
}

