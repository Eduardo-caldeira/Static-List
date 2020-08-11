#ifndef TAD_BARALHO_H_INCLUDED
#define TAD_BARALHO_H_INCLUDED
#include "Lista_generica_estatica.h"

using namespace std;

///1==Paus
///2==Copas
///3==Espadas
///4==Ouros

/*struct Carta {
    int naipe;
    int valor;
};

bool operator < (Carta a, Carta b){
    return (a.naipe*13+a.valor) < (b.naipe*13+b.valor);
}

///----------------------------------------------------FUNÇÕES----------------------------------------------------:
void imprime_carta(Carta carta){///TESTADA
    char s='P';
    switch (carta.naipe){

    case 1:
        s = 'P';
        break;
    case 2:
        s = 'C';
        break;
    case 3:
        s = 'E';
        break;
    case 4:
        s = 'O';
        break;
    }
    cout << "Naipe: " << s << "\n";
    cout << "Valor: " << carta.valor << "\n\n";
}

void monta_baralho(Lista<Carta,52> &lista) {///TESTADA
    Carta carta;
    for (int n = 1; n < 5; n++) {
        for (int c = 1; c < 14; c++) {
            carta.naipe = n;
            carta.valor = c;
            insere_fim_generico(lista, carta);
        }
    }
}

void imprime_baralho(Lista<Carta,52> lista) { ///TESTADA MAS TA UMA MERDA
    Carta carta;
    for (int i = 0; i < lista.tamanho; i++) {
        carta = lista.elementos[i].dado;
        imprime_carta(carta);
    }
}


void embaralha(Lista<Carta,52> &lista) {///TESTADA
    int i=0;
    int emb;
    Carta aux;
    while (i <= 51) {
        emb = lista.tamanho - (rand() % lista.tamanho + 1);
        aux = lista.elementos[emb].dado;
        lista.elementos[emb].dado = lista.elementos[i].dado;
        lista.elementos[i].dado = aux;
        i++;
    }
}

void distribui(Lista<Carta,52> &baralho, Lista<Carta,52> &pessoa, int qnt_cartas) {///Só funciona se o baralho ja estiver embaralhado
    for (int i = 0; i < qnt_cartas; i++) {
        pessoa.elementos[pessoa.tamanho].dado = baralho.elementos[baralho.tamanho-1].dado;
        pessoa.tamanho++;
        baralho.tamanho--;
    }
}
void bubblesort(Lista<Carta,52> &lista){
    int i, j, cond;
    Carta temp;
    cond = 1;

    for(i= lista.tamanho - 1;(i>=1) &&(cond =1); i--){
        cond =0;
            for(j=0;j<i;j++){
                    if(lista.elementos[j+1].dado < lista.elementos[j].dado){
                        temp = lista.elementos[j].dado;
                        lista.elementos[j].dado =lista.elementos[j+1].dado;
                        lista.elementos[j+1].dado = temp;
                        cond=1;
                    }

            }
    }
}
*/
#endif // TAD_BARALHO_H_INCLUDED
