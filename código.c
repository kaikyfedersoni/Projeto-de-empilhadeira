#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

#include <locale.h>





typedef struct noPilha {

    int valor;

    struct noPilha* next;

} noPilha;



// Pilha 1

noPilha* pilha = NULL;

int elementosPilha1 = 0;



///------------------------------------------------

bool verificarExistenciaPilha1(int v) {

    noPilha* aux = pilha;

    while (aux != NULL) {

        if (aux->valor == v) {

            return true;

        }

        aux = aux->next;

    }

    return false;

}



void inserePilha1(int v) {

    if(elementosPilha1<3)

    {

    if (verificarExistenciaPilha1(v)) {

        printf("Código inválido. O número %d já existe na pilha.\n", v);

        return;

    }



    noPilha* novo = malloc(sizeof(noPilha));

    novo->valor = v;

    novo->next = pilha;

    pilha = novo;

    elementosPilha1++;

    printf("Elemento inserido com sucesso na pilha!\n");

    }

    else

    {

        printf("Impossivel empilhar! A pilha 1 esta cheia!\n");

    }

}



noPilha* removePilha1(int v) {

    if (elementosPilha1 == 0) {

        printf("A pilha está vazia!\n");

        return NULL;

    }



    if (!verificarExistenciaPilha1(v)) {

        printf("Código inválido. O número %d não existe na pilha.\n", v);

        return NULL;

    }



    if (pilha->valor == v) {

        printf("Elemento %d removido com sucesso da pilha!\n", v);

        noPilha* ret = pilha;

        pilha = pilha->next;

        elementosPilha1--;

        return ret;

    }

     else {

        printf("Impossivel desempilhar! O elemento %d não está no topo da pilha 1.\n", v);

        return NULL;

    }



    noPilha* aux = pilha;

    while (aux->next != NULL) {

        if (aux->next->valor == v) {

            printf("Elemento %d removido com sucesso da pilha!\n", v);

            noPilha* ret = aux->next;

            aux->next = aux->next->next;

            elementosPilha1--;

            return ret;

        }

        aux = aux->next;

    }



    return NULL;

}



bool isEmptyPilha1() {

    return (pilha == NULL);

}



void imprimePilha1() {

    noPilha* aux = pilha;

    if (aux == NULL)

        printf("A pilha 1 está vazia!\n");

    else {

        printf("Os elementos da pilha 1:\n");

        while (aux != NULL) {

            printf("%d, ", aux->valor);

            aux = aux->next;

        }

        printf("\n");

    }

}



// Pilha 2

noPilha* pilha2 = NULL;

int elementosPilha2 = 0;



///------------------------------------------------

bool verificarExistenciaPilha2(int v) {

    noPilha* aux = pilha2;

    while (aux != NULL) {

        if (aux->valor == v) {

            return true;

        }

        aux = aux->next;

    }

    return false;

}



void inserePilha2(int v) {

    if(elementosPilha2<3)

    {

    if (verificarExistenciaPilha2(v)) {

        printf("Código inválido. O número %d já existe na pilha.\n", v);

        return;

    }



    noPilha* novo = malloc(sizeof(noPilha));

    novo->valor = v;

    novo->next = pilha2;

    pilha2 = novo;

    elementosPilha2++;

    printf("Elemento inserido com sucesso na pilha!\n");

    }

    else

    printf("Impossivel empilhar! A pilha 2 esta cheia!\n");

}



noPilha* removePilha2(int v) {

    if (elementosPilha2 == 0) {

        printf("A pilha está vazia!\n");

        return NULL;

    }



    if (!verificarExistenciaPilha2(v)) {

        printf("Código inválido. O número %d não existe na pilha.\n", v);

        return NULL;

    }



    if (pilha2->valor == v) {

        printf("Elemento %d removido com sucesso da pilha!\n", v);

        noPilha* ret = pilha2;

        pilha2 = pilha2->next;

        elementosPilha2--;

        return ret;

    }

     else {

        printf("Impossivel desempilhar! O elemento %d não está no topo da pilha 1.\n", v);

        return NULL;

    }

    noPilha* aux = pilha2;

    while (aux->next != NULL) {

        if (aux->next->valor == v) {

            printf("Elemento %d removido com sucesso da pilha!\n", v);

            noPilha* ret = aux->next;

            aux->next = aux->next->next;

            elementosPilha2--;

            return ret;

        }

        aux = aux->next;

    }



    return NULL;

}



bool isEmptyPilha2() {

    return (pilha2 == NULL);

}



void imprimePilha2() {

    noPilha* aux = pilha2;

    if (aux == NULL)

        printf("A pilha 2 está vazia!\n");

    else {

        printf("Os elementos da pilha 2:\n");

        while (aux != NULL) {

            printf("%d, ", aux->valor);

            aux = aux->next;

        }

        printf("\n");

    }

}



// Pilha 3

noPilha* pilha3 = NULL;

int elementosPilha3 = 0;



///------------------------------------------------

bool verificarExistenciaPilha3(int v) {

    noPilha* aux = pilha3;

    while (aux != NULL) {

        if (aux->valor == v) {

            return true;

        }

        aux = aux->next;

    }

    return false;

}



void inserePilha3(int v) {

    if(elementosPilha3<3)

    {

    if (verificarExistenciaPilha3(v)) {

        printf("Código inválido. O número %d já existe na pilha.\n", v);

        return;

    }



    noPilha* novo = malloc(sizeof(noPilha));

    novo->valor = v;

    novo->next = pilha3;

    pilha3 = novo;

    elementosPilha3++;

    printf("Elemento inserido com sucesso na pilha!\n");

}

else

printf("Impossivel empilhar! A pilha 3 esta cheia!\n");

}



noPilha* removePilha3(int v) {

    if (elementosPilha3 == 0) {

        printf("A pilha está vazia!\n");

        return NULL;

    }



    if (!verificarExistenciaPilha3(v)) {

        printf("Código inválido. O número %d não existe na pilha.\n", v);

        return NULL;

    }



    if (pilha3->valor == v) {

        printf("Elemento %d removido com sucesso da pilha!\n", v);

        noPilha* ret = pilha3;

        pilha3 = pilha3->next;

        elementosPilha3--;

        return ret;

    }

     else {

        printf("Impossivel desempilhar! O elemento %d não está no topo da pilha 1.\n", v);

        return NULL;

    }



    noPilha* aux = pilha3;

    while (aux->next != NULL) {

        if (aux->next->valor == v) {

            printf("Elemento %d removido com sucesso da pilha!\n", v);

            noPilha* ret = aux->next;

            aux->next = aux->next->next;

            elementosPilha3--;

            return ret;

        }

        aux = aux->next;

    }



    return NULL;

}



bool isEmptyPilha3() {

    return (pilha3 == NULL);

}



void imprimePilha3() {

    noPilha* aux = pilha3;

    if (aux == NULL)

        printf("A pilha 3 está vazia!\n");

    else {

        printf("Os elementos da pilha 3:\n");

        while (aux != NULL) {

            printf("%d, ", aux->valor);

            aux = aux->next;

        }

        printf("\n");

    }

}

// Pilha 4

noPilha* pilha4 = NULL;

int elementosPilha4 = 0;



///------------------------------------------------

bool verificarExistenciaPilha4(int v) {

    noPilha* aux = pilha4;

    while (aux != NULL) {

        if (aux->valor == v) {

            return true;

        }

        aux = aux->next;

    }

    return false;

}



void inserePilha4(int v) {

    if(elementosPilha4<3)

    {

    if (verificarExistenciaPilha4(v)) {

        printf("Código inválido. O número %d já existe na pilha.\n", v);

        return;

    }



    noPilha* novo = malloc(sizeof(noPilha));

    novo->valor = v;

    novo->next = pilha4;

    pilha4 = novo;

    elementosPilha4++;

    printf("Elemento inserido com sucesso na pilha!\n");

}

else

printf("Impossivel empilhar! A pilha 4 esta cheia!\n");

}



noPilha* removePilha4(int v) {

    if (elementosPilha4 == 0) {

        printf("A pilha está vazia!\n");

        return NULL;

    }



    if (!verificarExistenciaPilha4(v)) {

        printf("Código inválido. O número %d não existe na pilha.\n", v);

        return NULL;

    }



    if (pilha4->valor == v) {

        printf("Elemento %d removido com sucesso da pilha!\n", v);

        noPilha* ret = pilha4;

        pilha4 = pilha4->next;

        elementosPilha4--;

        return ret;

    }

     else {

        printf("Impossivel desempilhar! O elemento %d não está no topo da pilha 1.\n", v);

        return NULL;

    }

    noPilha* aux = pilha4;

    while (aux->next != NULL) {

        if (aux->next->valor == v) {

            printf("Elemento %d removido com sucesso da pilha!\n", v);

            noPilha* ret = aux->next;

            aux->next = aux->next->next;

            elementosPilha4--;

            return ret;

        }

        aux = aux->next;

    }



    return NULL;

}



bool isEmptyPilha4() {

    return (pilha4 == NULL);

}



void imprimePilha4() {

    noPilha* aux = pilha4;

    if (aux == NULL)

        printf("A pilha 4 está vazia!\n");

    else {

        printf("Os elementos da pilha 4:\n");

        while (aux != NULL) {

            printf("%d, ", aux->valor);

            aux = aux->next;

        }

        printf("\n");

    }

}

///------------------------------------------------

void menu() {

    printf("Escolha uma opção:\n");

    printf("1 - Inserir na pilha 1\n");

    printf("2 - Remover da pilha 1\n");

    printf("3 - Imprimir pilha 1\n");

    printf("4 - Inserir na pilha 2\n");

    printf("5 - Remover da pilha 2\n");

    printf("6 - Imprimir pilha 2\n");

    printf("7 - Inserir na pilha 3\n");

    printf("8 - Remover da pilha 3\n");

    printf("9 - Imprimir pilha 3\n");

    printf("10 - Inserir na pilha 4\n");

    printf("11 - Remover da pilha 4\n");

    printf("12 - Imprimir pilha 4\n");

    printf("0 - Sair\n");

}



///------------------------------------------------

int main() {



    setlocale(LC_ALL, "Portuguese");

    int escolha, valor;



    while (true) {

        menu();

        scanf("%d", &escolha);



        if (escolha == 0) {

            printf("Saindo...\n");

            break;

        }



        if (escolha == 1) {

            printf("Digite o valor a ser inserido na pilha 1: ");

            scanf("%d", &valor);

            inserePilha1(valor);

        } else if (escolha == 2) {

            if (isEmptyPilha1())

                printf("A pilha 1 está vazia!\n");

            else {

                printf("Digite o valor a ser removido da pilha 1: ");

                scanf("%d", &valor);

                removePilha1(valor);

            }

        } else if (escolha == 3) {

            imprimePilha1();

        } else if (escolha == 4) {

            printf("Digite o valor a ser inserido na pilha 2: ");

            scanf("%d", &valor);

            inserePilha2(valor);

        } else if (escolha == 5) {

            if (isEmptyPilha2())

                printf("A pilha 2 está vazia!\n");

            else {

                printf("Digite o valor a ser removido da pilha 2: ");

                scanf("%d", &valor);

                removePilha2(valor);

            }

        } else if (escolha == 6) {

            imprimePilha2();

        } else if (escolha == 7) {

            printf("Digite o valor a ser inserido na pilha 3: ");

            scanf("%d", &valor);

            inserePilha3(valor);

        } else if (escolha == 8) {

            if (isEmptyPilha3())

                printf("A pilha 3 está vazia!\n");

            else {

                printf("Digite o valor a ser removido da pilha 3: ");

                scanf("%d", &valor);

                removePilha3(valor);

            }

        } else if (escolha == 9) {

            imprimePilha3();

        } else if (escolha == 10) {

            printf("Digite o valor a ser inserido na pilha 4: ");

            scanf("%d", &valor);

            inserePilha4(valor);

        } else if (escolha == 11) {

            printf("Digite o valor a ser removido da pilha 4: ");

            scanf("%d",&valor);

            removePilha4(valor);

        } else if (escolha == 12) {

            imprimePilha4();

        } else {

            printf("Opção inválida!\n");

        }

    }



    return 0;

}
