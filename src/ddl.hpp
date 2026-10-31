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
    int quantidade; // Como eu deixei passar isso kkkkkkk quantidade em string ;-;
};


extern std::vector<Categoria> categorias;
extern std::vector<Produto> bancoDados;

#endif
