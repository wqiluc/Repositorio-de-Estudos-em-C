<h1 align="center">Lista 3 — Programação Imperativa e Funcional</h1>

<p align="center">
Exercícios em <strong>C (C11)</strong> sobre Lógica Avançada, Strings e Estruturas (Structs)
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

Esta última etapa da disciplina **Programação Imperativa e Funcional** foca na consolidação de lógica complexa e na introdução a tipos de dados estruturados e strings na **linguagem C**.

O objetivo é aprofundar o entendimento sobre o comportamento da memória, abordando:

- Manipulação de sequências matemáticas; controle de fluxo com `continue`; operações em matrizes; gerenciamento de strings e caracteres nulos; cópia de structs por valor.

A lista foi desenvolvida sob orientação do **Professor Renan Costa Alencar**, finalizando o ciclo básico de fundamentos em C.

---

# 🏗️ Arquitetura da subpasta:
<pre>
Listas Rennan/
    ├── lista 3/
        │
        ├── 1.c
        ├── 2.c
        ├── 3.c
        ├── 4.c
        └── 5.c
        └── README.md
</pre>

# 🧩 Exercícios

## 1️⃣ Sequência de Fibonacci e Acúmulo:
Análise de um loop que gera termos da sequência de Fibonacci e acumula a soma dos primeiros 5 elementos.
- **Destaque:** Lógica de transição de variáveis (`primeiro = segundo; segundo = proximo`).

## 2️⃣ Filtro e Média em Vetores:
Processamento de um vetor com valores positivos e negativos usando `while` e a instrução `continue`.
- **Destaque:** Uso do operador ternário para evitar divisão por zero no cálculo da média.

## 3️⃣ Diagonal de Matrizes:
Soma dos elementos onde o índice da linha é igual ao da coluna ($i = j$).
- **Destaque:** Eficiência algorítmica ao percorrer a matriz com apenas um laço `for`.

## 4️⃣ Anatomia de Strings:
Estudo do impacto do caractere terminador `\0` na manipulação de cadeias de caracteres.
- **Destaque:** Diferença entre o conteúdo real da memória e o que é interpretado por funções como `strlen` e `printf`.

## 5️⃣ Manipulação de Structs:
Análise da atribuição direta entre registros e como a memória reserva espaços independentes para cada variável do tipo `struct`.
- **Destaque:** Prova de que a alteração em um campo de uma estrutura copiada não corrompe os dados da estrutura original.