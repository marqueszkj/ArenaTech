# Projeto 1 - Arena Tech: Planejador de Maratona Gamer



**Disciplina:** Algoritmos e Pensamento Computacional

**Professor:** Vinicius Alves

**Período:** 2026/2



## Integrantes do grupo



Nome: Gabriel Maciel RGM:4728638

Nome: Pedro Henrique Gelli Soares RGM: 049385992

Nome: Laura Marques Ribeiro RGM:47228377



## Sobre a solução



O programa foi desenvolvido em linguagem C e tem como objetivo auxiliar na organização da Arena Tech, uma maratona gamer no campus. Ele solicita ao usuário, via teclado, oito informações sobre o evento: quantidade de participantes, jogadores por time, quantidade de computadores, potência média de cada computador, duração do evento, preço do kWh de energia, preço do kit de alimentação e outros custos.



A partir desses dados, o programa calcula a quantidade de times necessários, arredondando o resultado para cima com a função `ceil()` da biblioteca `math.h`, já que um time incompleto ainda conta como um time. Também é calculado o consumo estimado de energia em kWh, o custo da energia, o custo da alimentação (um kit por participante), o custo total do evento e o custo médio por participante.



Foram utilizadas variáveis dos tipos `int` (para valores inteiros, como participantes e computadores) e `float` (para valores decimais, como preços e potência), além das funções `scanf()` para entrada de dados e `printf()` para exibir o relatório final formatado com duas casas decimais. Não foram usadas estruturas condicionais ou de repetição, conforme solicitado pelo projeto.



O programa foi testado com os dados do teste mínimo obrigatório (25 participantes, 3 jogadores por time, 20 computadores, 600W, 2 horas, R$ 1,00/kWh, R$ 25,00 de kit e R$ 200,00 de outros custos), e o resultado obtido (CUSTO TOTAL: R$ 849,00) bateu corretamente com o exemplo apresentado no PDF do professor.



## Como compilar e executar



```bash

gcc projeto1_arena_tech.c -o projeto1_arena_tech -lm

./projeto1_arena_tech

```
