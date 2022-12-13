#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct ServiceOrder{

    int serviceType;
    char veterinary;
    char symptoms  [100];
    int time;
    int status;

} SERVICE;
typedef struct OwnerRegistry{

    char nameOwner[40];
    char contact[11];

} OWNER;
typedef struct PetRegistry{

    char namePet[20];
    int age;
    float weight;
    char petType;
    int priority;

} PET;

void ownerRegister(OWNER *owner){
    printf("Digite o nome do cliente:\n");
    fgets(owner->nameOwner, 40, stdin);
    getchar();
    printf("Digite o telefone do cliente:\n");
    fgets(owner->contact, 11, stdin);
    getchar();
}
void petRegister(PET *pet){
}
void serviceRegister(SERVICE *service){
}
void serviceStatus(SERVICE *service){
}
void changeVet(SERVICE *service){
}
void editPet(PET *pet){
}
void deletePet(PET *pet){
}
void closeSystem(){
}

/*void printData(OWNER *owner){
    printf("Nome do dono: %s\n", owner->nameOwner);
}*/

void menu(){
    printf("----------Seja bem-vindo ao Dino Spoto Pet Shop!----------\n\n");
    printf("Escolha a opcao mais adequada ao seu AUmigo!\n\n");
    printf("Tecle: 1 para cadastrar o cliente.\n");
    printf("Tecle: 2 para cadastrar o pet.\n");
    printf("Tecle: 3 para cadastrar o servico.\n");
    printf("Tecle: 4 para saber o status do seu servico.\n");
    printf("Tecle: 5 para alterar o veterinario de plantao.\n");
    printf("Tecle: 6 para editar os dados de um pet.\n");
    printf("Tecle: 7 para excluir dados de um pet.\n");
    printf("Tecle: 8 para fechar o sistema.\n\n");
}

int main (){

    setlocale(LC_ALL, "Portuguese");
    SERVICE service;
    OWNER owner;
    PET pet;
    
    int operation; 
    do{
        menu();
        scanf("%d", &operation);
        printf("\n");

        switch(operation){
            case 1:
            ownerRegister(OWNER &owner);
            break;
            case 2:
            petRegister(PET &pet);
            break;
            case 3:
            serviceRegister(SERVICE &service);
            break;
            case 4:
            serviceStatus(SERVICE &service);
            break;
            case 5:
            changeVet(SERVICE &service);
            break;
            case 6:
            editPet(PET &pet);
            break;
            case 7:
            deletePet(PET &pet);
            break;
            case 8:
            closeSystem();
            break;
            default:
            printf("Digite uma opcao valida:\n");
            break;
        }
        printf("\n");
    }
    while (operation =! 8);

    return 0;
}
   //printData(&owner);