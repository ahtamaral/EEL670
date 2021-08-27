// Universidade Federal do Rio de Janeiro
// EEL670 - Linguagens de Programção
// Prof.: Miguel Campista
// Exercício avaliado 02
// Autor: Artur Amaral | DRE: 119057968 | Agosto 2021

#include "../include/aresta.h"

Aresta::Aresta(Vertice _verticeOrigem ,Vertice _verticeDestino, double _custo) :
    verticeOrigem(_verticeOrigem), verticeDestino(_verticeDestino) // Lista de inicialização
{
    verticeOrigem = _verticeOrigem;
    verticeDestino = _verticeDestino;
    custo = _custo;
}

Vertice Aresta::getVerticeOrigem(){
    return verticeOrigem;
}

Vertice Aresta::getVerticeDestino(){
    return verticeDestino;
}

double Aresta::getCusto(){
    return custo;
}

void Aresta::exibirNaTela(){
    cout << getVerticeOrigem().getNome()
        << "--" << getCusto() << "-->"
        << getVerticeDestino().getNome() << endl;
}
