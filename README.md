# 🎴 Desafio Super Trunfo em C

## Objetivo
Implementar uma versão simplificada do jogo **Super Trunfo** em linguagem C.

## Regras do Desafio
1. Cada carta deve ter **4 atributos** (exemplo: força, velocidade, inteligência e poder).
2. O jogo deve permitir comparar **duas cartas**.
3. O jogador escolhe o **atributo** que será usado na rodada.
4. O programa deve imprimir o resultado da comparação e indicar o vencedor.
5. O código deve rodar direto no terminal (`gcc main.c -o jogo && ./jogo`).

## Estrutura sugerida da Carta
```c
typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
    int poder;
} Carta;
```

## Exemplo de Saída Esperada
```
Escolha o atributo (1-Força, 2-Velocidade, 3-Inteligência, 4-Poder): 1

Carta 1: Goku (Força: 95)
Carta 2: Vegeta (Força: 90)

Resultado: Goku venceu!
```

## Como participar
1. Faça um **fork** deste repositório.
2. Implemente sua versão no arquivo `main.c`.
3. Crie um **pull request** com a sua solução.
