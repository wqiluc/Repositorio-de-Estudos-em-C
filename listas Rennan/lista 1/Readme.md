<h1 align="center">Lista 1 — Programação Imperativa e Funcional</h1>

<p align="center">
Exercícios em <strong>C (C11)</strong> sobre programação sequencial, decisões e estruturas de repetição
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

Esta lista faz parte da disciplina **Programação Imperativa e Funcional** e aborda os fundamentos da programação utilizando a **linguagem C no padrão C11**.

O objetivo é desenvolver lógica de programação e domínio da sintaxe da linguagem através de exercícios envolvendo:

- entrada e saída de dados; estruturas de decisão; estruturas de repetição; cálculos matemáticos; análise de código.

A lista foi proposta pelo **Professor Renan Costa Alencar** e contém **5 exercícios progressivos** que exploram conceitos essenciais da programação em C.

---

# 🧠 Sobre a Linguagem C11

A **C11** é uma versão padronizada da linguagem C publicada em **2011 pela ISO**.

Ela introduziu melhorias importantes como:

- suporte a **multithreading**; novas bibliotecas padrão; melhorias de segurança; melhor portabilidade entre sistemas.

A linguagem C continua sendo extremamente relevante e é utilizada em:

- sistemas operacionais; drivers; sistemas embarcados; compiladores; softwares de alto desempenho.

Por ser uma linguagem **estruturada e de baixo nível**, C permite entender profundamente como o computador executa programas.

---

# 🏗️ Arquitetura da subpasta:
<pre>
Listas Rennan/
    ├── lista 1/
        │
        ├── 1.c
        ├── 2.c
        ├── 3.c
        ├── 4.c
        └── 5.c
        └── Readme.md
</pre>

Cada arquivo contém a implementação em **C11** de um exercício da lista.


# 🧩 Exercícios

## 1️⃣ Análise de Programa:

O exercício apresenta um pequeno programa e pede para identificar **qual será a saída gerada no terminal**.

O código utiliza:

- estrutura de repetição `while`
- operador módulo `%`
- operador ternário `? :`

Conceitos praticados:

- fluxo de execução de programas; análise de código; operadores lógicos.

Objetivo: desenvolver a habilidade de **interpretar programas antes de executá-los**.

---

## 2️⃣ Correção de Instrução:

Neste exercício é apresentada uma instrução `printf` escrita de forma incorreta.

O aluno deve:

- identificar o erro de sintaxe; reescrever a instrução corretamente.

Conceitos praticados:

- sintaxe da linguagem C; uso correto de funções; estrutura de impressão no terminal.

Objetivo: compreender **como as funções de saída funcionam em C**.

---

## 3️⃣ Consumo de Combustível:

Simula um **controle de consumo de combustível de um motorista**.

O programa deve:

1. receber a quantidade de **litros consumidos**; receber a **quilometragem percorrida**; calcular **km por litro para cada tanque**; calcular a **média total de consumo**.

Exemplo de cálculo:
km_por_litro = quilometros / litros

Conceitos praticados:

- entrada de dados com `scanf`; estruturas de repetição `while`; cálculo de média; acumulação de valores.

---

## 4️⃣ Controle de Limite de Crédito:

Simula um **sistema de verificação de limite de crédito de clientes**.

O programa recebe:

- número da conta; saldo inicial; total de cobranças; total de créditos; limite de crédito.

O sistema calcula o novo saldo da conta:
novo_saldo = saldo_inicial + cobrancas - creditos

Se o saldo ultrapassar o limite permitido, o programa deve mostrar:
Limite de Crédito Excedido

Conceitos praticados:

- lógica condicional (`if`); cálculos financeiros; validação de dados.

---

## 5️⃣ Sistema de Comissão de Vendas:

Simula o cálculo de comissão de **consultoras de uma empresa de cosméticos**.

A regra de pagamento é:
salario = 150 + (0.10 * vendas)

Ou seja:

- salário fixo de **R$150**; mais **10% das vendas do mês**.

Exemplo:
vendas = 15000
salario = 150 + (0.10 * 15000)
salario = 1650

Conceitos praticados:

- cálculo de porcentagem; processamento repetido de dados; entrada contínua de valores.