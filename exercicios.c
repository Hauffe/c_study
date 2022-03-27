//
// Created by Alexandre on 26/03/2022.
//
#include <stdio.h>
#include <stdlib.h>


void exercicio5(),exercicio6(),exercicio7(),exercicio8(), exercicio9(),exercicio10();
void exercicio11(), exercicio12(), exercicio13(),exercicio14(),exercicio15();
void exercicio16(), exercicio17(), exercicio18(),exercicio19();

void (*f[19])();

int main() {

    f[5] = exercicio5; /* address of sum() */
    f[6] = exercicio6; /* address of sum() */
    f[7] = exercicio7; /* address of sum() */
    f[8] = exercicio8; /* address of sum() */
    f[9] = exercicio9; /* address of sum() */
    f[10] = exercicio10; /* address of sum() */
    f[11] = exercicio11; /* address of sum() */
    f[12] = exercicio12; /* address of sum() */
    f[13] = exercicio13; /* address of sum() */
    f[14] = exercicio14; /* address of sum() */
    f[15] = exercicio15; /* address of sum() */
    f[16] = exercicio16; /* address of sum() */
    f[17] = exercicio17; /* address of sum() */
    f[18] = exercicio18; /* address of sum() */
    f[19] = exercicio19; /* address of sum() */


    int opcao, flag;
    do{
        printf("Digite um exercicio de 5 a 19:\n");
        scanf("%d", &opcao);
        if(opcao<5 || opcao>19){
            printf("Valor invalido\n");
            flag = 1;
        }else{
            f[opcao]();
            flag = 0;
        }
    } while (flag);
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

void exercicio13(){
    printf("--------------Exercicio 13: KM/L--------------:\n\n");
    char enter;
    scanf ("%c", &enter);


    int quilometragem;
    float litros;
    printf ("Digite a quilometragem:");
    scanf ("%d", &quilometragem);
    printf ("Digite os litros:");
    scanf ("%f", &litros);

    printf("Consumo medio: %.3f KM/l", (quilometragem/litros));
}

void exercicio14(){
    printf("--------------Exercicio 14: Cedulas--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int n50, n5, n1, resto, valor;
    printf ("Digite o valor:");
    scanf ("%d", &valor);
    resto = valor%50;
    n50 = (valor-resto)/50;
    n5 = (resto-(resto%5))/5;
    n1 = resto%5;

    printf("%d notas de R$50\n", n50);
    printf("%d notas de R$5\n", n5);
    printf("%d notas de R$1\n", n1);
}

void exercicio15(){
    printf("--------------Exercicio 15: Converter segundos--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int valor, horasAux, minutosAux;
    int dias, horas, minutos, segundos;
    printf ("Digite o valor em segundos:");
    scanf ("%d", &valor);
    segundos = valor%60;
    minutosAux = (valor-segundos)/60;
    minutos = minutosAux%60;
    horasAux = (minutosAux-minutos)/60;
    horas = horasAux%24;
    dias = (horas-horasAux)/24;

    printf("Tempo: dias:%d - tempo: %d:%d:%d",dias, horas, minutos, segundos);
}

void exercicio16(){
    printf("--------------Exercicio 16: Ultimo digito--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int valor;
    printf ("Digite o valor:");
    scanf ("%d", &valor);
    printf("Ultimo digito: %d", valor%10);

}

void exercicio17(){
    printf("--------------Exercicio 17: Celsius para Farenheit--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    int celsius, farenheit;
    printf("Digite o valor em Celsius:");
    scanf ("%d", &celsius);

    farenheit = (celsius * 9 / 5) + 32;

    printf("Temperatura em farenheit: %d", farenheit);
}

void exercicio18(){
    printf("--------------Exercicio 18: Gasto da viagem--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    float distancia;
    int pedagios;

    //Valores
    float gasolina = 2.60, valorPedagio = 8.00, total;
    int kmPorLitro = 15;

    printf("Digite a distancia em quilometros:");
    scanf ("%f", &distancia);
    printf("Digite o numero de pedagios:");
    scanf ("%d", &pedagios);

    total = (pedagios*valorPedagio)+((distancia/kmPorLitro)*gasolina);

    printf("Total da viagem: %.2f", total);

}

void exercicio19(){
    printf("--------------Exercicio 19: Média do aluno--------------:\n\n");
    char enter;
    scanf ("%c", &enter);

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:");
    scanf ("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf ("%f", &nota2);
    printf("Digite a terceira nota:");
    scanf ("%f", &nota3);

    nota1 *= 2;
    nota2 *= 3;
    nota3 *= 5;

    media = (nota1+nota2+nota3)/10;

    printf("A media eh: %.1f", media);

}