#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct ServiceOrder{

    int serviceType;
    int veterinary;
    char symptoms  [100];
    int time;

} SERVICE;
typedef struct OwnerRegistry{

    char nameOwner[40];
    char contact[11];

} OWNER;
typedef struct DogRegistry{

    char nameDog[20];
    int age;
    float weight;
    int priority;

} DOG;

void printData(OWNER *owner){
    printf("Nome do dono: %s\n", owner->nameOwner);
}

void menu(){
    printf("----------Seja bem-vindo ao Milioli Pet Shop!----------\n");
    printf("Escolha a opcao mais adequada ao seu AUmigo!\n");

}

int main (){
    SERVICE service;
    OWNER owner;
    DOG dog;

    printData(&owner);
    setlocale(LC_ALL, "Portuguese");
    menu();
    return 0;
}