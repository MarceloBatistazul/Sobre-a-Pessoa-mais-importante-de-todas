#include <stdio.h>
#include <string.h>

int main() {
    char resposta[10];
    int disseSimParaJesus = 0;
    int contadorDias = 0;

    printf("Buscando a felicidade em Jesus:\n");

    while (!disseSimParaJesus) {
        printf("Dia %d: Continuo triste...\n", contadorDias);
        contadorDias++;

        printf("Você aceita Jesus? (Digite 'sim' para aceitar ou 'não' para não aceitar): ");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0) {
            printf("Finalmente, você aceitou Jesus! Encontrou a verdadeira felicidade!\n");
            disseSimParaJesus = 1;
        } else if (strcmp(resposta, "não") == 0) {
            printf("Mesmo assim, continue buscando em Jesus. Ele está sempre de braços abertos para você!\n");
            break;
        } else {
            printf("Resposta inválida! Digite 'sim' ou 'não'.\n");
        }
    }

    return 0;
}