/* O formato hpp foi escolhido para que o código seja mais organizado 
e para que seja possível incluir com facilidade em outros arquivos do projeto */

#ifndef ddl_hpp
#define ddl_hpp

#include <string>
#include <vector>

struct Categoria {
    int id;
    std::string nome;
};

struct Produto {
    int id;
    int categoriaId;
    std::string nome;
    double ValUnitario;
    std::string dataValidade;
    std::string dataFabricacao;
    std::string descricao;
    int quantidade; 
};

struct NoProduto {
    Produto produto;
    NoProduto* l;
    NoProduto* r;

    NoProduto(Produto p) : produto(p), l(nullptr), r(nullptr) {}
};

extern std::vector<Categoria> categorias;
extern NoProduto* raizProdutos;

void inserirProduto(NoProduto*& raiz, const Produto& p);
void buscarProduto(int id, NoProduto* no, Produto& produtoEncontrado, bool& encontrado);
void catalogoAntigo(NoProduto*& raiz);
#endif
