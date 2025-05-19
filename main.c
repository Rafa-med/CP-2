
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
 
// Função para a sequência de Fibonacci feita pelo Rafael de Medeiros Cordeiro, RM: 562167
void fibonacci() {
    int n;
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);
 
    if (n < 1 || n > 50) {
        printf("Quantidade inválida de termos.\n");
        return;
    }
 
    int fib[50];
 
    if (n >= 1) {
        fib[0] = 0;
    }
    if (n >= 2) {
        fib[1] = 1;
    }
 
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
 
    printf("Sequência de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}
 
// Função para calcular e mostrar fatoriais feita pelo Taysir Fauzi Ali, RM: 564884
void fatoriais() {
    int n;
    printf("Digite um número inteiro (1 a 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Número inválido.\n");
        return;
    }

    unsigned long long fat[20];          
    unsigned long long fatorial = 1;

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        fatorial *= (i + 1);
        fat[i] = fatorial;       
        printf("%d! = %llu\n", i + 1, fat[i]); 
    }
}
 
// Função para verificar se uma palavra é palíndromo feito por: Felipe Paula Burba Molonhoni, RM: 564395
void palindromo() {
    char palavra[101];
    printf("Digite uma palavra (sem espaços, até 100 caracteres): ");
    scanf("%s", palavra);
 
    int comprimento = strlen(palavra);
    bool ehPalindromo = true;
 
    for (int i = 0; i < comprimento / 2; i++) {
        if (palavra[i] != palavra[comprimento - 1 - i]) {
            ehPalindromo = false;
            break;
        }
    }
 
    if (ehPalindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra NÃO é um palíndromo.\n");
    }
}
 
// Função para verificar se uma string é substring de outra
void verificarSubstring() {
    char str1[200], str2[100];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
 
    if (strstr(str1, str2) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}
 // E esta função feita pelos 3 integrantes juntos.
int main() {

    int opcao;
 
    do {
        printf("\n===== MENU DE EXERCÍCIOS =====\n");
        printf("1 - Sequência de Fibonacci \n");
        printf("2 - Fatoriais \n");
        printf("3 - Verificar Palíndromo \n");
        printf("4 - Verificar Substring \n");
        printf("0 - Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
 
        switch (opcao) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                palindromo();
                break;
            case 4:
                verificarSubstring();
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);
 
    return 0;
}
