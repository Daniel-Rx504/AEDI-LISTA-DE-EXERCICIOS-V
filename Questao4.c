#include <stdio.h>

int busca(int arr[], int c, int f, int escolha) {
    if (c> f)
        return -1;

    int m = (c + f) / 2;

    if (arr[m] == escolha)
        return m;

    if (arr[m]> escolha)
        return busca(arr, c, m - 1, escolha);

    return busca(arr, m + 1, f, escolha);
}

int main() {
    int arr[] = {3, 8, 15, 23, 29, 35, 42, 50, 61, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int escolha;

    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &escolha);

    int resultado = busca(arr, 0, n - 1, escolha);

    if (resultado == -1)
        printf("Numero nao encontrado.\n");
    else
        printf("Numero encontrado na posicao %d.\n", resultado);

    return 0;
}
