//
// Created by Alexandre on 26/03/2022.
//
#include <stdio.h>
#include <stdlib.h>


void exercicio5(),exercicio6(),exercicio7(),exercicio8(), exercicio9(),exercicio10();
void exercicio11(), exercicio12(), exercicio13(),exercicio14();

int main() {

    int opcao;

    printf("Digite um exercicio:\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 5:
            exercicio5();
            break;
        case 6:
            exercicio6();
            break;
        case 7:
            exercicio7();
            break;
        case 8:
            exercicio8();
            break;
        case 9:
            exercicio9();
            break;
        case 10:
            exercicio10();
            break;
        case 11:
            exercicio11();
            break;
        case 12:
            exercicio12();
            break;
        case 13:
            exercicio13();
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        case 18:
            break;
        case 19:
            break;
        default:
            printf("Exercicio %d nao implementado", opcao);

    }
    return 0;
}

void exercicio5(){
    printf("--------------Exercicio 5--------------:\n");

    int val1, val2;
    float divs, rest;

    printf("Informe o valor 1:");
    scanf("%d", &val1);
    printf("Informe o valor 2:");
    scanf("%d", &val2);

    divs = val1/val2;
    rest = val1%val2;

    printf("Divisao = %f \nResto = %f", divs, rest);

}

void exercicio6(){
    printf("--------------Exercicio 6--------------:\n");

    float n1, n2;
    float media;

    printf("Informe o valor 1:");
    scanf("%f", &n1);
    printf("Informe o valor 2:");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    printf("A media eh: %.2f", media);

}


void exercicio7(){
    printf("--------------Exercicio 7--------------:\n");

    int aux ;

    //Solução do exercício
    printf("Problema: Ler o imput em um formato e imprimir em outro\n");
    printf("Solucao 1: Corrigir o tipo da variavel pra float e o scan para float \n");
    printf("Solucao 2: Corrigir o tipo da variavel pra integer inteiro ao imprimir a variavel\n\n");
    printf("Implementacao da solucao com menos alteracoes (solucao 2)\n");

    printf (" Digite um numero inteiro : ");
    scanf ("%d", &aux);
    printf ("%d", aux);
}

void exercicio8(){
    printf("--------------Exercicio 9--------------:\n\n");
    char enter;
    scanf ("%c", &enter);


    char aux ;
    printf (" Digite um caracter : ");
    scanf ("%c", & aux );
    printf ("%d", aux );

    //Solução do exercício abaixo
    printf ("\n Solucao : \n");
    printf ("%d eh o codigo da letra %c na tablea ASCII", aux, aux );
}

void exercicio9(){
    printf("--------------Exercicio 9--------------:\n\n");
    char enter;
    scanf ("%c", &enter);


    float base, altura ;
    printf ("Digite a base do Retangulo:");
    scanf ("%f", &base );
    printf ("Digite a altura do Retangulo :");
    scanf ("%f", &altura );
    printf ("Retangulo de base %.2f e altura %.2f\npossui %.2f de perimetro",
            base,
            altura,
            2*base+2*altura
            );

}

void exercicio10(){
    printf("--------------Exercicio 10: Volume da esfera--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    double raio, volume, div = (4.0f/3.0f), pi = 3.14159;
    printf ("Digite o raio:");
    scanf ("%lf", &raio);

    volume = (div)*pi*(raio*raio*raio);
    printf("Esfera posui volume de %.3f ", volume);
}

void exercicio11(){
    printf("--------------Exercicio 11: Maior valor--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int a,b,c,maxAB,maxABC;

    printf ("Digite o valor A:");
    scanf ("%d", &a );
    printf ("Digite o valor B:");
    scanf ("%d", &b );
    printf ("Digite o valor C:");
    scanf ("%d", &c );

    maxAB = (a+b+abs(a-b))/2;
    maxABC = (maxAB+c+abs(maxAB-c))/2;
    printf("%d eh o maior\n",maxABC);


}


void exercicio12(){
    printf("--------------Exercicio 12: Menor valor--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int a,b,c,minAB,minABC;

    printf ("Digite o valor A:");
    scanf ("%d", &a );
    printf ("Digite o valor B:");
    scanf ("%d", &b );
    printf ("Digite o valor C:");
    scanf ("%d", &c );

    minAB = (a+b-abs(a-b))/2;
    minABC = (minAB+c-abs(minAB-c))/2;
    printf("%d eh o menor\n",minABC);

}

void exercicio14(){
    printf("--------------Exercicio 14: Cedulas--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

}