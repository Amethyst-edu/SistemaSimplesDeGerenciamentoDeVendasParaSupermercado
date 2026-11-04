#include "ddl.hpp"

NoProduto* raizProdutos = nullptr;

void inserirProduto (NoProduto*& raiz, const Produto& p){
    if(raiz == nullptr)
    {
        raiz = new NoProduto(p);
        return;
    }
    if(p.id < raiz->produto.id){
        inserirProduto(raiz->l, p);
    }
    if(p.id > raiz->produto.id){
        inserirProduto(raiz->r, p);
    }
}

std::vector<Categoria> categorias = {
    Categoria{1, "Bebidas"},
    Categoria{2, "Doce"},
    Categoria{3, "Laticínios"},
    Categoria{4, "Açougue"},
    Categoria{5, "Hortifruti"},
    Categoria{6, "Lanches"},
    Categoria{7, "Padaria"}
};

std::vector<Produto> bancoTeste = {
    Produto{1, 1, "Coca-Cola", 5.99, "2024-12-31", "2023-01-01", "Refrigerante de cola", 24},
    Produto{2, 1, "Pepsi", 5.49, "2024-12-31", "2023-01-01", "Refrigerante de cola", 8},
    Produto{3, 1, "Fanta", 4.99, "2024-12-31", "2023-01-01", "Refrigerante de laranja", 12},
    Produto{4, 1, "Guaraná Antarctica", 5.29, "2024-12-31", "2023-01-01", "Refrigerante de guaraná", 18},
    Produto{5, 1, "Sprite", 4.79, "2024-12-31", "2023-01-01", "Refrigerante de limão", 15},
    Produto{6, 2, "Chocolate", 2.99, "2024-12-31", "2023-01-01", "Chocolate ao leite", 7},
    Produto{7, 2, "Bala", 0.99, "2024-12-31", "2023-01-01", "Bala de goma", 20},
    Produto{8, 2, "Pirulito", 1.49, "2024-12-31", "2023-01-01", "Pirulito de frutas", 10},
    Produto{9, 2, "Biscoito", 3.49, "2024-12-31", "2023-01-01", "Biscoito recheado", 22},
    Produto{10, 2, "Balas de gelatina", 1.99, "2024-12-31", "2023-01-01", "Balas de gelatina sortidas", 14},
    Produto{11, 3, "Leite", 3.49, "2024-12-31", "2023-01-01", "Leite integral", 9},
    Produto{12, 3, "Queijo", 7.99, "2024-12-31", "2023-01-01", "Queijo mussarela", 17},
    Produto{13, 3, "Iogurte", 2.49, "2024-12-31", "2023-01-01", "Iogurte natural", 2},
    Produto{14, 3, "Manteiga", 4.99, "2024-12-31", "2023-01-01", "Manteiga sem sal", 13},
    Produto{15, 3, "Requeijão", 5.49, "2024-12-31", "2023-01-01", "Requeijão cremoso", 21},
    Produto{16, 4, "Carne bovina", 19.99, "2024-12-31", "2023-01-01", "Carne bovina de primeira", 30},
    Produto{17, 4, "Carne suína", 14.99, "2024-12-31", "2023-01-01", "Carne suína de primeira", 11},
    Produto{18, 4, "Frango", 9.99, "2024-12-31", "2023-01-01", "Frango inteiro", 26},
    Produto{19, 4, "Linguiça", 12.99, "2024-12-31", "2023-01-01", "Linguiça de porco", 19},
    Produto{20, 4, "Bacon", 15.99, "2024-12-31", "2023-01-01", "Bacon defumado", 27},
    Produto{21, 5, "Maçã", 2.99, "2024-12-31", "2023-01-01", "Maçã vermelha", 6},
    Produto{22, 5, "Banana", 1.99, "2024-12-31", "2023-01-01", "Banana nanica", 23},
    Produto{23, 5, "Laranja", 2.49, "2024-12-31", "2023-01-01", "Laranja pera", 16},
    Produto{24, 5, "Tomate", 3.49, "2024-12-31", "2023-01-01", "Tomate italiano", 29},
    Produto{25, 5, "Alface", 1.99, "2024-12-31", "2023-01-01", "Alface americana", 14},
    Produto{26, 6, "Hambúrguer", 4.99, "2024-12-31", "2023-01-01", "Hambúrguer bovino", 32},
    Produto{27, 6, "Cachorro-quente", 3.99, "2024-12-31", "2023-01-01", "Cachorro-quente com salsicha", 25},
    Produto{28, 6, "Pizza", 19.99, "2024-12-31", "2023-01-01", "Pizza de calabresa", 40},
    Produto{29, 7, "Pão francês", 0.49, "2024-12-31", "2023-01-01", "Pão francês fresquinho", 33},
    Produto{30, 7, "Pão de forma", 3.99, "2024-12-31", "2023-01-01", "Pão de forma integral", 5}
};