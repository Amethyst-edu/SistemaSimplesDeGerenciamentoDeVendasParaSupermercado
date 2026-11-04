# Projeto de simulação de supermercado

## Participantes
- **Guilherme Santos da Silva** - responsável pelo código e documentação 
- **Gemni e copilot** - auxiliar no planejamento geral do projeto e na implementação de algumas funcionalidades conforme permitido pelo professor

## Apresentação do projeto e documentação do desenvolvimento
- [Apresentação](#apresentação)
- [Estoque de produtos](#estoque-de-produtos)
- [Árvore de busca binária](#árvore-de-busca-binária)

### Apresentação
&emsp;O projeto consiste em um sistema simples de gerenciamento de vendas para um supermercado, desenvolvido em C++. O sistema permite cadastrar produtos, realizar vendas e gerar relatórios de estoque e vendas. 

### Estoque de produtos
&emsp;Antes de iniciar o desenvolvimento do sistema, foi necessário criar um estoque de produtos, preferencialmente em um arquivo separado para simular as vendas. O estoque foi feito usando um arquivo de cabeçalho chamado `ddl.hpp`, cujo nome apresenta de forma clara a função de definir a estrutura de dados do projeto. O arquivo contém a definição da estrutura `Produto`, que representa um produto no estoque, e um vetor de produtos chamado `bancoDados`, que armazena todos os produtos disponíveis. Também foi criado um arquivo chamado `dml.cpp`, para popular o vetor `bancoDados` com produtos fictícios, simulando um estoque inicial. <br>
&emsp;Um dos maiores desafios durante o desenvolvimento dessa etapa foi a compilação, visto que ao dividir em vários arquivos, o VS Code não reconhecia o arquivo `dml.cpp` como parte do projeto, resultando em erros de compilação. Para resolver esse problema, foi necessário configurar o arquivo `tasks.json` para incluir o arquivo `dml.cpp` na compilação, garantindo que o vetor `bancoDados` fosse corretamente populado com os produtos fictícios. Porém, mesmo com essa configuração, o VS Code ainda não reconhecia o arquivo `dml.cpp` como parte do projeto em minha maquina, o que exigiu também o uso do comando de terminal:

```
g++ main.cpp dml.cpp -o programa
```
```
.\programa.exe
```

&emsp;Nota-se que esse último comando funciona apenas no terminal do Windows, e não em outros terminais como do VS Code, no lugar, usa-se `./programa`.
&emsp;Após fazer a criação dos arquivos auxiliares e testá-los, eu percebi que precisava incluir uma árvore de busca binária, que era um requisito do projeto. 

### Árvore de busca binária
&emsp;Para construção da árvore de busca, criei uma struct chamada `NoProduto`, representando um nó da árvore, com ponteiros para os nós filhos e um construtor para inicializá-lo. 