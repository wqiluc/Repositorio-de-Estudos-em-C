<h1 align="center">🧭 Ponteiros em C — Atividade Somativa Extra</h1>

<p align="center">
  <img src="https://img.shields.io/badge/-C-111827?style=flat-square&logo=c&logoColor=A8B9CC"/>
  <img src="https://img.shields.io/badge/C11-111827?style=flat-square&logo=c&logoColor=A8B9CC"/>
  <img src="https://img.shields.io/badge/GCC-111827?style=flat-square&logo=gnu&logoColor=red"/>
  <img src="https://img.shields.io/badge/Modularização-111827?style=flat-square&logo=databricks&logoColor=red"/>
  <img src="https://img.shields.io/badge/Arquitetura-111827?style=flat-square&logo=instructure&logoColor=white"/>
  <img src="https://img.shields.io/badge/🧭Ponteiros-111827?style=flat-square&logo=code&logoColor=FF4500" />
  <br>
  <img src="https://img.shields.io/badge/-Git-111827?style=flat-square&logo=git&logoColor=F05032"/>
  <img src="https://img.shields.io/badge/-GitHub-111827?style=flat-square&logo=github&logoColor=white"/>
  <img src="https://img.shields.io/badge/-GitHub_Desktop-111827?style=flat-square&logo=github&logoColor=purple"/>
</p>

> **Atividade Somativa Extra — 2026/06/09**

Programa em C que demonstra a evolução incremental do uso de <b><mark>ponteiros</mark></b>: da manipulação direta de variáveis até a alocação dinâmica de memória, passando por passagem por referência, ponteiros para structs e aritmética de ponteiros em arrays.

---

<h2 align="center">📋 Atividades <br>
<img src="https://img.shields.io/badge/Incremental-111827?style=flat-square&logo=readme&logoColor=white"/></h2>

| # | Título | Conceito Central |
|---|--------|-----------------|
| 1 | 🔗 Ponteiros e Modificação Direta | `float *ptr = &preco;` — acessa e modifica a variável pelo ponteiro |
| 2 | 📨 Passagem por Referência | `void aplicar_desconto(float *preco, float perc)` — função altera o original |
| 3 | 🏗️ Ponteiros para Structs | `Produto *p` + operador `->` para acessar campos |
| 4 | 🔢 Aritmética de Ponteiros em Arrays | `(ptr + i)->preco` — percorre array sem usar `[]` |
| 5 | 🧠 Alocação Dinâmica (`malloc`/`free`) | Tamanho definido em runtime, memória liberada com `free` |

<h2 align="center">🏰 Arquitetura da Atividade: <br>
<img src="https://img.shields.io/badge/Architecture-111827?style=flat-square&logo=instructure&logoColor=white"/></h2>

<pre>
atividade-somativa-extra/
│
├── main <img src="https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=111827" height="18"/> <img src="https://img.shields.io/badge/-Entry_Point-0D1117?style=flat&logo=gnu&logoColor=red" height="18"/>/
│   └── main.c <img src="https://img.shields.io/badge/entry_point-6A0DAD?style=flat-square&logo=instructure&logoColor=white" height="18"/> <img src="https://img.shields.io/badge/5_atividades-FF6C37?style=flat-square&logo=readme&logoColor=black" height="18"/>
│
└── app <img src="https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=111827" height="18"/> <img src="https://img.shields.io/badge/-Módulo_Produto-0D1117?style=flat&logo=databricks&logoColor=E0234E" height="18"/>/
    ├── include <img src="https://img.shields.io/badge/Headers-1E3A5F?style=flat&logo=c&logoColor=A8B9CC" height="18"/>/
    │   └── produto.h <img src="https://img.shields.io/badge/struct_Produto-0A7E8C?style=flat-square&logo=c&logoColor=white" height="18"/> <img src="https://img.shields.io/badge/protótipos-F59E0B?style=flat-square&logo=c&logoColor=111827" height="18"/>
    └── src <img src="https://img.shields.io/badge/Source-8B0000?style=flat&logo=c&logoColor=white" height="18"/>/
        └── produto.c <img src="https://img.shields.io/badge/implementação-22C55E?style=flat-square&logo=c&logoColor=111827" height="18"/>
</pre>

<h3 align="center">🔗 Diagrama de dependências</h3>

```
main/main.c
 └── app/include/produto.h  /  app/src/produto.c
      └── struct Produto { int id; float preco; }
```

---

<h2 align="center">🧱 Estrutura de Dados <br>
<img src="https://img.shields.io/badge/struct_Produto-111827?style=flat-square&logo=c&logoColor=brown"/></h2>

```c
typedef struct
{
    int id;
    float preco;
} Produto;
```

| Campo | Tipo | Observação |
|-------|------|------------|
| `id` | `int` | identificador único do produto |
| `preco` | `float` | preço em reais, modificado pelas funções do módulo |

<h2 align="center">🦾 Funções do Módulo <br>
<img src="https://img.shields.io/badge/app/src/produto.c-111827?style=flat-square&logo=c&logoColor=A8B9CC"/></h2>

### `aplicar_desconto` — Atividade 3+

```c
void aplicar_desconto(Produto *p, float percentual);
```

Recebe um ponteiro para `Produto` e reduz `p->preco` pelo percentual informado. Usa o operador `->` para acessar e modificar o campo diretamente na memória.

```c
p->preco -= p->preco * (percentual / 100.0f);
```

### `imprimir_produtos` — Atividade 4+

```c
void imprimir_produtos(Produto *ptr, int qtd);
```

Percorre o array **exclusivamente via aritmética de ponteiros** — proibido o uso de `ptr[i]`:

```c
for (int i = 0; i < qtd; i++)
    printf("  %-6d  R$ %.2f\n", (ptr + i)->id, (ptr + i)->preco);
```

<h2 align="center">📖 Detalhes por Atividade <br>
<img src="https://img.shields.io/badge/Implementação-111827?style=flat-square&logo=gnubash&logoColor=white"/></h2>

### Atividade 1 — Ponteiros e Modificação Direta 🧭

```c
float preco = 100.0f;
float *ponteiro  = &preco;     // "ponteiro" aponta para o endereço de preco

*ponteiro *= 1.10f;            // aumenta 10% escrevendo direto na memória

printf("%.2f\n", preco);  // preco foi alterado: 110.00
```

O ponteiro "`ponteiro`" guarda o **endereço** de `preco`. Ao desreferenciar com `*ponteiro`, lemos e escrevemos na mesma posição de memória que a variável `preco` ocupa — sem copiar o valor.

### Atividade 2 — Passagem por Referência 🧭

```c
static void aplicar_desconto_float(float *preco, float percentual)
{
    *preco -= *preco * (percentual / 100.0f);
}
```

A função recebe o **endereço** da variável original. Qualquer escrita via `*preco` dentro da função modifica o valor da variável do chamador — sem `return`.

> Esta versão (com `float *`) é uma função auxiliar estática em `main.c`, usada apenas para demonstrar o conceito da Atividade 2. A Atividade 3 a evolui para receber `Produto *`.

### Atividade 3 — Ponteiros para Structs 🧭🏗️

```c
Produto p = {1, 250.0f};
aplicar_desconto(&p, 20.0f);   // passa o endereço da struct
```

Dentro de `aplicar_desconto`, `p->preco` é o atalho idiomático para `(*p).preco`. O operador `->` desreferencia o ponteiro e acessa o campo em uma única operação.

### Atividade 4 — Aritmética de Ponteiros em Arrays 🧭

```c
Produto estoque[3] = {{1, 50.0f}, {2, 120.0f}, {3, 300.0f}};
imprimir_produtos(estoque, 3);
```

O nome do array (`estoque`) decai para um ponteiro para o primeiro elemento. Dentro de `imprimir_produtos`, `ptr + i` avança `i * sizeof(Produto)` bytes — o compilador aplica o passo correto automaticamente por saber o tipo.

| Expressão | Equivalente | Significado |
|-----------|-------------|-------------|
| `ponteiro + i` | `&ponteiro[i]` | endereço do i-ésimo elemento |
| `(ponteiro + i)->preco` | `ponteiro[i].preco` | campo `preco` do i-ésimo elemento |

### Atividade 5 — Alocação Dinâmica ⚙️

```c
Produto *lista = malloc((size_t)n * sizeof(Produto));
```

`malloc` reserva `n × sizeof(Produto)` bytes no **heap** e retorna um ponteiro para o início do bloco. O retorno deve ser verificado (`!lista`) antes de usar. Após o uso, `free(lista)` devolve a memória ao sistema operacional — sem `free`, o bloco permanece alocado até o processo terminar (memory leak).

```c
for (int i = 0; i < n; i++)
{
    (lista + i)->id = i + 1;
    scanf("%f", &(lista + i)->preco);
}

free(lista);    // obrigatório
```

<h2 align="center">🚀 Como Compilar e Executar <br>
<img src="https://img.shields.io/badge/GCC_Build-111827?style=flat-square&logo=gnu&logoColor=red"/></h2>

```bash
cd atividade-somativa-extra
```

```bash
# Compilar (padrão C11, todos os warnings ativos)
gcc -std=c11 -Wall -Wextra -o produto main/main.c app/src/produto.c -Iapp/include

# Executar
./produto
```

<h2 align="center">💡 Conceitos de C Utilizados <br>
<img src="https://img.shields.io/badge/Conceitos_C-111827?style=flat-square&logo=c&logoColor=yellow"/></h2>

| Conceito | Onde é usado |
|----------|-------------|
| `*ptr` — desreferência | Atividade 1: lê/escreve via ponteiro diretamente |
| `&var` — endereço de | Atividade 2+: passa endereço para funções |
| `->` — acesso via ponteiro | Atividade 3+: acessa campos de struct pelo ponteiro |
| Aritmética de ponteiros | Atividade 4+: `(ptr + i)->campo` sem `[]` |
| `malloc` / `free` | Atividade 5: alocação e liberação no heap |
| Header guards | `#ifndef / #define / #endif` em `produto.h` |
| Separação em módulos | `.h` para interface, `.c` para implementação |
| `static` em funções | `aplicar_desconto_float` restrita a `main.c` |

<p align="center">
  <img src="https://img.shields.io/badge/License-MIT-FF8C00?style=for-the-badge&logo=opensource&logoColor=white"/>
  <img src="https://img.shields.io/badge/Made%20with-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white"/>
  <img src="https://img.shields.io/badge/Compiled%20with-GCC-E0234E?style=for-the-badge&logo=gnu&logoColor=red"/> <br>
  <img src="https://img.shields.io/badge/Standard-C11-85EA2D?style=for-the-badge&logo=c&logoColor=green"/>
  <img src="https://img.shields.io/badge/Ponteiros-Aritmetica-FF6C37?style=for-the-badge&logo=databricks&logoColor=FF6C37"/>
  <img src="https://img.shields.io/badge/Status-Concluído-green?style=for-the-badge&logo=checkmarx&logoColor=green"/>
</p>