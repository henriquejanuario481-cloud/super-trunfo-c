# super-trunfo-c
Jogo estilo Super Trunfo feito em Linguagem C

## Objetivo
Implementar uma versão simplificada do jogo **Super Trunfo** em linguagem C.

## Regras do Desafio
1. Cada carta possui atributos (exemplo: força, velocidade, inteligência, poder).
2. O jogo deve permitir comparar duas cartas e dizer qual venceu.
3. O jogador escolhe o atributo que será usado na rodada.
4. O programa deve rodar no terminal.

## Exemplo de Estrutura da Carta
```c
typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
    int poder;
} Carta;

