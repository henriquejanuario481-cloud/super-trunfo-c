#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
    int poder;
} Carta;

int main() {
    // Exemplo de cartas (pode alterar ou criar novas)
    Carta c1 = {"Goku", 95, 90, 85, 100};
    Carta c2 = {"Vegeta", 90, 85, 88, 95};

    int escolha;

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n4 - Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n");

    switch(escolha) {
        case 1:
            printf("%s (Força: %d) vs %s (Força: %d)\n", c1.nome, c1.forca, c2.nome, c2.forca);
            if (c1.forca > c2.forca) printf("Resultado: %s venceu!\n", c1.nome);
            else if (c1.forca < c2.forca) printf("Resultado: %s venceu!\n", c2.nome);
            else printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("%s (Velocidade: %d) vs %s (Velocidade: %d)\n", c1.nome, c1.velocidade, c2.nome, c2.velocidade);
            if (c1.velocidade > c2.velocidade) printf("Resultado: %s venceu!\n", c1.nome);
            else if (c1.velocidade < c2.velocidade) printf("Resultado: %s venceu!\n", c2.nome);
            else printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("%s (Inteligência: %d) vs %s (Inteligência: %d)\n", c1.nome, c1.inteligencia, c2.nome, c2.inteligencia);
            if (c1.inteligencia > c2.inteligencia) printf("Resultado: %s venceu!\n", c1.nome);
            else if (c1.inteligencia < c2.inteligencia) printf("Resultado: %s venceu!\n", c2.nome);
            else printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("%s (Poder: %d) vs %s (Poder: %d)\n", c1.nome, c1.poder, c2.nome, c2.poder);
            if (c1.poder > c2.poder) printf("Resultado: %s venceu!\n", c1.nome);
            else if (c1.poder < c2.poder) printf("Resultado: %s venceu!\n", c2.nome);
            else printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
