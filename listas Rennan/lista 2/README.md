<h1 align="center">Lista 2 — Programação Imperativa e Funcional</h1>

<p align="center">
Exercícios em <strong>C (C11)</strong> sobre Vetores (Arrays Unidimensionais) e Matrizes (Arrays Multidimensionais)
</p>

<p align="center">
<img src="https://img.shields.io/badge/Language-C-00599C?logo=c&logoColor=white">
<img src="https://img.shields.io/badge/Standard-C11-A8B9CC?logo=c&logoColor=black">
<img src="https://img.shields.io/badge/Paradigm-Imperative-FF6F00">
<img src="https://img.shields.io/badge/Paradigm-Structured-FFC107">
<img src="https://img.shields.io/badge/Compiler-GCC-444444?logo=gnu&logoColor=white">
<img src="https://img.shields.io/badge/Exercises-5-2ECC71">
<img src="https://img.shields.io/badge/Status-Completed-brightgreen">
</p>

# 📚 Sobre a Lista:

Esta lista é a continuação da disciplina **Programação Imperativa e Funcional** e foca no gerenciamento de conjuntos de dados utilizando **Vetores e Matrizes** no padrão **C11**.

O objetivo principal é transitar da manipulação de variáveis simples para estruturas de dados homogêneas, abordando:

- Declaração e inicialização de arrays; manipulação de índices; percurso de matrizes com laços aninhados; processamento de grandes volumes de dados. 

A lista foi proposta pelo **Professor Renan Costa Alencar** e exige a aplicação rigorosa de boas práticas de programação e identação. 

# 🧠 Vetores e Matrizes em C11

Em C11, arrays são blocos contíguos de memória que permitem armazenar múltiplos elementos do mesmo tipo.

Nesta lista, exploramos:

- **Vetores (1D):** Ideais para listas lineares, como histórico de bugs ou notas. 
- **Matrizes (2D):** Essenciais para representar tabelas, mapas ou grades de dados complexos. 
- **Performance:** O uso de memória estática e o padrão C11 garantem a execução eficiente em sistemas de alto desempenho.

Dominar essas estruturas é o passo fundamental para entender conceitos avançados como alocação dinâmica e ponteiros.


# 🏗️ Arquitetura da subpasta:
<pre>
Listas Rennan/
    ├── lista 2/
            ├── 1.c
            ├── 2.c
            ├── 3.c
            ├── 4.c
            └── 5.c
            └── README.md
</pre>

Cada arquivo contém a implementação funcional e comentada conforme as convenções da linguagem.

# 🧩 Exercícios

## 1️⃣ Rastreamento de Matrizes:
Análise do fluxo de dados em uma matriz $3 \times 4$. [cite: 21, 47]
- **Conceitos:** Atribuição sequencial, indexação zero-based e propagação de valores entre células. 
- **Objetivo:** Compreender como loops aninhados preenchem e modificam coordenadas específicas na memória. 

## 2️⃣ Simulação de Ordenação (Bubble Sort):
Julgamento de itens baseados na execução passo a passo de um algoritmo de ordenação em um vetor de 5 posições. 
- **Conceitos:** Lógica de troca (*swap*), comparação de elementos adjacentes e estados parciais do vetor.
- **Objetivo:** Validar a mecânica interna de algoritmos de ordenação clássicos. 

## 3️⃣ Processamento de Vetores Condicionais:
Análise de dois vetores (`vetA` e `vetB`) onde os valores dependem da paridade do índice.
- **Conceitos:** Operador de módulo `%`, laços `while` aninhados em `for` e decremento de valores.
- **Objetivo:** Exercitar o rastreio manual de dependências entre diferentes estruturas de dados.

## 4️⃣ Registro Trimestral de Bugs:
Desenvolvimento de um sistema para calcular produtividade e bônus de desenvolvedores. 
- **Cálculo:** `bonus = total_bugs * 50.00`. 
- **Estrutura:** Uso de vetores para armazenar bugs mensais, totais e valores monetários. 
- **Objetivo:** Aplicar vetores em um cenário prático de gestão de recursos humanos. 

## 5️⃣ Relatório de Treinos de Academia:
Criação de um sistema de gestão para uma rede de academias com 4 filiais. 
- **Estrutura:** Matriz $4 \times 7$ representando filiais (linhas) e dias da semana (colunas). 
- **Funcionalidades:** Soma por linhas (filiais), soma por colunas (dias) e busca de valores máximos. 
- **Objetivo:** Manipular matrizes bidimensionais para gerar relatórios estatísticos complexos. 