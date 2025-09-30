# Super Trunfo - Cidades

Disciplina **Introdução à Programação de Computadores**, com o tema **Super Trunfo - Cidades**.  
Foi desenvolvido para praticar o uso de estruturas de decisão (`if`, `if-else`, `switch`) e operadores (`>`, `==`, `?:`) em linguagem C.

## Aluno
**Hamilton de Araújo**

## O que o programa faz

O programa permite comparar duas cidades com base em três atributos:

- População
- Área (em km²)
- PIB (em bilhões)

O usuário cadastra os dados manualmente pelo terminal. Depois, pode escolher **um dos três níveis** de comparação:

## Nível Novato
Compara os três atributos usando estruturas `if` simples.

## Nível Aventureiro
Apresenta um menu para o usuário escolher qual atributo deseja comparar. Usa `switch`.

## Nível Mestre
Permite escolher **dois atributos** para comparar. Usa lógica mais avançada com **operador ternário** e faz a contagem de pontos.

##  Como compilar

Se estiver usando terminal:

```bash
gcc main.c -o trunfo
./trunfo
