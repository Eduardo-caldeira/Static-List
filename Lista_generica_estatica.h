#ifndef LISTA_GENERICA_ESTATICA_H_INCLUDED
#define LISTA_GENERICA_ESTATICA_H_INCLUDED
#include <iostream>
using namespace std;

///Alunos: Eduardo Caldeira Vicente e Julia Disner
///Lista Estática

template<typename tipo>
struct conteudo {
    tipo dado;
};

template<typename tipo, int MAX>
struct Lista {
    conteudo<tipo> elementos[MAX];
    int tamanho;
};

template <typename tipo, int MAX>
bool inicializa_lista_generico(Lista<tipo, MAX> &lista){
    lista.tamanho = 0;
    return true;
}

template <typename tipo, int MAX>
bool insere_fim_generico(Lista<tipo, MAX> &lista, conteudo<tipo> dado) {
    if (lista.tamanho >= MAX) {
        return false;
    }
    else {
        lista.elementos[lista.tamanho].dado = dado.dado;
        lista.tamanho++;
        return true;
    }
}

template<typename tipo, int MAX>
bool remove_fim_generico(Lista<tipo, MAX> &lista) {
    if (lista.tamanho == 0) {
        return false;
    }
    else {
        lista.tamanho--;
        return true;
    }
}

template<typename tipo, int MAX>
bool remove_inicio_generico(Lista<tipo, MAX> &lista) {
    if (lista.tamanho > 0) {
        for (int i = 1; i < lista.tamanho; i++) {
            lista.elementos[i - 1].dado = lista.elementos[i].dado;

        }
        lista.tamanho--;
        return true;
    }
    else {
        return false;
    }

}

template<typename tipo, int MAX>
bool insere_inicio_generico(Lista<tipo, MAX> &lista, conteudo<tipo> dado) {
    if (lista.tamanho >= MAX) {
        return false;
    }
    else {
        for (int i = lista.tamanho; i >= 0; i--) {
            lista.elementos[i].dado = lista.elementos[i-1].dado;
        }
        lista.elementos[0].dado = dado.dado;
        lista.tamanho++;
        return true;
    }
}

template<typename tipo, int MAX>
bool remove_posicao_generico(Lista<tipo, MAX> &lista, int posicao) {
    if (lista.tamanho > 0) {
        for (int i = posicao; i < lista.tamanho; i++) {
            lista.elementos[i].dado = lista.elementos[i + 1].dado;
        }
        lista.tamanho--;
        return true;
    }
    else {
        return false;
    }
}

template<typename tipo, int MAX>
bool insere_posicao_generico(Lista<tipo, MAX> &lista, conteudo<tipo> dado, int posicao) {
    if (lista.tamanho < MAX) {
        for (int i = lista.tamanho; i >= posicao; i--) {
            lista.elementos[i + 1].dado = lista.elementos[i].dado;
        }
        lista.elementos[posicao].dado = dado.dado;
        lista.tamanho++;
        return true;
    }
    else {
        return false;
    }
}

template<typename tipo, int MAX>
int Quantidade_itens_generico(Lista<tipo, MAX> lista) {
    return lista.tamanho;
}

template<typename tipo, int MAX>
void bubblesort(Lista<tipo,MAX> &lista){
    int teste=0;
    int i, j, c;
    tipo aux;
    c = 1;
    for(i= lista.tamanho - 1;(i>=1)&&(c =1); i--){
        c =0;
            for(j=0;j<i;j++){
                    if(lista.elementos[j+1].dado < lista.elementos[j].dado){
                        aux = lista.elementos[j].dado;
                        lista.elementos[j].dado =lista.elementos[j+1].dado;
                        lista.elementos[j+1].dado = aux;
                        c=1;
                        teste++;
                    }

            }
    }
    system("cls");
    cout << "iondjnf: "<<teste;
    system("pause");
}

template<typename tipo, int MAX>
int part(Lista<tipo, MAX> &Lista,int inicio,int fim){
    tipo pivo=Lista.elementos[fim].dado;

    int indice=inicio;
    int i;
    tipo aux;

    for(i=inicio;i<fim;i++)
    {
        if(Lista.elementos[i].dado<=pivo)
        {
            aux=Lista.elementos[i].dado;
            Lista.elementos[i].dado=Lista.elementos[indice].dado;
            Lista.elementos[indice].dado=aux;
            indice++;
        }
     }
      aux=Lista.elementos[fim].dado;
      Lista.elementos[fim].dado=Lista.elementos[indice].dado;
      Lista.elementos[indice].dado=aux;

     return indice;
 }

template<typename tipo, int MAX>
void quicksort(Lista<tipo, MAX> &Lista,int inicio,int fim){
    if(inicio<fim)
    {
         int indice=part(Lista,inicio,fim);
             quicksort(Lista,inicio,indice-1);
             quicksort(Lista,indice+1,fim);
    }
}

#endif // LISTA_GENERICA_ESTATICA_H_INCLUDED
