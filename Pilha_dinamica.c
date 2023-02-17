#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

struct TipoCelula{

    int item;
    TipoCelula *prox;

};

int Pilha_contador;
TipoCelula *Topo;

bool Pilha_Construtor(){

    Topo = NULL;
    Pilha_contador = 0;

};

bool Pilha_Destrutor(){

    int aux;
    TipoCelula *Temp;

    if(Pilha_Vazia()){
        return false;

    } else{
        while(Topo != NULL){
            Temp = Topo;
            Temp->prox = NULL;

            Topo Topo->prox;

            free(Temp);
        }
        Pilha_contador = 0;
        return true;
    }
}

bool Pilha_Vazia(){

    if(Topo==NULL){
        return true;
    } else{
        return false;
    }
}

int Pilha_Tamanho(){

    return Pilha_contador;
}

bool Pilha_Push(int valor){

    TipoCelula Nova_celula = (TipoCelula)malloc(sizeof(TipoCelula));

    if(Nova_celula==NULL){
        return false;

    } else {
        Nova_celula->item = valor;
        Nova_celula->prox = Topo;

        Topo = Nova_celula;
        Pilha_contador++;
        return true;
    }
}

bool Pilha_Pop(int &valor){

    TipoCelula *Temp;

    if(Pulha_Vazia()){
        return false;

    } else{
        valor = Topo->item;
        Temp = Topo;
        Topo = Topo->prox;

        Temp->prox = NULL; //Safety 

        free(Temp);
        Pilha_contador--;
        return true;
    }
}

bool Pilha_Get(int &valor){

    if(Pilha_Vazia()){
        return false;

    } else{
        valor = Topo->item;
        return true;
    }
}