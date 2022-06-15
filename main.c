#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "Librerias/gotoxy.h"

/// PROTOTIPADO
int cargarMatrizInt(int matriz[][3],int x, int y);
void mostrarMatriz(int matriz[][3],int x, int y);
int cargarMatrizRandom(int matriz[][3],int x,int y);
int sumarMatriz(int matriz[][3],int x,int y);
float promedioMatriz(float matriz[][3], float x, float y);
void encontrarElemento(int matriz[][3], int x, int y);
int cantidadPalabras(char arreglo[][20], int x, int y);
void mostrarArregloChar(char arreglo[][20], int cantidadP);
void buscarPalabra(char arreglo[][20], int cantidadP);
void ordenarPalabras(char arreglo[][20], int elementosValidos);
void cargarMatrizOrdenDos(int matriz[2][2], int x, int y);
void mostrarMatrizOrdenDos(int matriz[2][2], int x, int y);
int determinanteDeOrdenDos(int matriz[2][2]);
int inversa(int matriz[2][2]);
int multiplicacionMatrices(int matrizOrdenDos[2][2], int matrizDosXCinco[2][5]);
int cargarMatrizDosCinco(int matrizDosXCinco[2][5], int x, int y);
void mostrarDosCinco(int matriz[2][5], int x, int y);
void multiplicacionDeMatrices(int a[2][2], int b[2][5], int c[2][5], int m, int n, int p);
void sacarInversa(int matriz[2][2]);
void totalPorcentajes();
int menu();
void funcionMenu();


/// MAIN
int main(){
    funcionMenu();
}

/// FUNCIONES
///1
int cargarMatrizInt(int matriz[][3],int x, int y){
    int validos=0;
    char salida;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf(" INGRESE EL ELEMENTO PARA LA POSICION (%i, %i): ", i, j);
            fflush(stdin);
            scanf("%i",&matriz[i][j]);
            validos++;
        }
    }
    return validos;
}

///2
void mostrarMatriz(int matriz[][3],int x, int y){
    printf("\n");
    for(int i=0; i<x; i++){
        printf(" |");
        for(int j=0; j<y; j++){
            printf(" %.2i ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

///3
int cargarMatrizRandom(int matriz[][3],int x,int y){
    int validosRandom;
    srand(time(NULL));
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            matriz[i][j]=rand()%99;
            validosRandom++;
        }
    }
    return validosRandom;
}

///4
int sumarMatriz(int matriz[][3],int x,int y){
    int suma=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            suma+=matriz[i][j];
        }
    }
    return suma;
}

///5
float promedioMatriz(float matriz[][3], float x, float y){
    float promedio=0;
    int suma = sumarMatriz(matriz,x,y);
    int contador = x * y;
    promedio=suma/contador;
    return promedio;
}

///6
void encontrarElemento(int matriz[][3], int x, int y){
    int encontrar=0;
    int buscado=0;
    printf(" INGRESE EL ELEMENTO QUE DESEA BUSCAR: ");
    fflush(stdin);
    scanf("%i", &buscado);
    for (int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(buscado == matriz[i][j]){
                encontrar = 1;
            }
        }
    }
    if(encontrar == 1){
        printf("\n EL ELEMENTO %i SE ENCUENTRA EN LA MATRIZ.\n", buscado);
    }else{
        printf("\n EL ELEMENTO %i NO SE ENCUENTRA EN LA MATRIZ.\n", buscado);
    }
}

///7
int cargarMatrizChar(char arreglo[][20], int x, int y){
    char opt;
    int i=0;
    int cantidad=0;
    do{
        printf(" INGRESE UNA PALABRA: ");
        fflush(stdin);
        scanf("%s",&arreglo[i][0]);
        cantidad++;
        i++;
        printf("\n DESEA CARGAR UNA NUEVA PALABRA? Y/N\: ");
        fflush(stdin);
        scanf("%c", &opt);
        printf("\n");
    }while(opt=='Y'||opt=='y');
    return cantidad;
}

///8
void mostrarArregloChar(char arreglo[][20], int cantidadP){
    printf("\n");
    for(int i=0; i<cantidadP; i++){
        printf(" PALABRA Nro %i: %s\n", i+1, strupr(arreglo[i]));
    }
    printf("\n");
}

///9
void buscarPalabra(char arreglo[][20], int cantidad){
    char palabra[20];
    printf(" INGRESE LA PALABRA QUE DESEA BUSCAR: ");
    fflush(stdin);
    scanf("%s", &palabra);
    int encontrado=1;
    int i = 0;
    while (i < cantidad && encontrado!=0){
        encontrado = strcmpi(arreglo[i], palabra);
        i++;
        }
        printf("\n");
        if(encontrado==0){
            printf(" LA PALABRA %s ESTA EN EL ARREGLO\n\n", strupr(palabra));
        }else{
            printf(" LA PALABRA %s NO ESTA EN EL ARREGLO\n\n", strupr(palabra));
        }
}

///10
void ordenarPalabras(char arreglo[][20], int elementosValidos){
    char aux[20];
    int recorrido = elementosValidos-1;
    for (int i=0; i<recorrido;i++)    {
        for (int j=0; j<recorrido-i;j++)        {
            if (strcmpi(arreglo[j], arreglo[j+1])>0)            {
                strcpy(aux, arreglo[j]);
                strcpy(arreglo[j], arreglo[j+1]);
                strcpy(arreglo[j+1], aux);
            }
        }
    }
}

/// 11
void cargarMatrizOrdenDos(int matriz[2][2], int x, int y){
    srand(time(0));
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            matriz[i][j] = rand()%10+1;
        }
    }
}
void mostrarMatrizOrdenDos(int matriz[2][2], int x, int y){
    printf("\n");
    for(int i=0;i<x;i++){
        printf("| ");
        for(int j=0;j<y;j++){
            printf("%.2i ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}
int determinanteDeOrdenDos(int matriz[2][2]){
    int determinante=0;
    int diagPrincipal=0;
    int diagSecundaria=0;
    diagPrincipal = matriz[0][0] * matriz[1][1];
    diagSecundaria = matriz[0][1] * matriz[1][0];
    determinante = diagPrincipal-diagSecundaria;
    return determinante;
}

///12
int inversa(int matriz[2][2]){
    int determinante = 0;
    determinante = determinanteDeOrdenDos(matriz);
    if(determinante == 0){
        printf("\n EL DETERMINANTE ES 0 POR LO TANTO NO TIENE INVERSA\n\n");
    }else{
        printf("\n EL DETERMINANTE ES %d POR LO TANTO TIENE INVERSA\n\n", determinante);
    }
}

///13
int cargarMatrizDosCinco(int matriz[2][5], int x, int y){
    srand(time(0));
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = rand()%10+1;
        }
    }
}
void mostrarDosCinco(int matriz[2][5], int x, int y){
    printf("\n");
    for(int i=0; i<x; i++){
        printf("|");
        for(int j=0; j<y; j++){
            printf(" %.2i ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}
void multiplicacionDeMatrices(int a[2][2], int b[2][5], int c[2][5], int m, int n, int p){
    int i;
    int j;
    int k;
    for(i;i<m;i++){
        for(k;k<p;k++){
            c[i][k]=0;
        }
    }
    for(i;i<m;i++){
        for(j;j<n;j++){
            for(k;k<p;k++){
                c[i][k]= c[i][k] + a[i][j]*b[j][k];
            }
        }
    }
    printf(" LA MATRIZ RESULTANTE ES\n");

    printf("\n EN PROCESO - ENCONTRANDO SOLUCION\n");
    mostrarDosCinco(c[2][5],i,k);
}

/// 14
void sacarInversa(int matriz[2][2]){
    float determinante=determinanteDeOrdenDos(matriz);
    if(determinante==0){
        printf("\n LA MATRIZ NO TIENE INVERSA PORQUE SU DETERMINANTE DA %i\n",determinante);
    }else{
        printf("\n LA MATRIZ INVERSA ES: \n\n");
        float a = ((matriz[0][0]*1)/determinante);
        float b = ((matriz[1][0]*-1)/determinante);
        float c = ((matriz[0][1]*-1)/determinante);
        float d = ((matriz[1][1]*1)/determinante);
        printf("| %.2f  %.2f |\n",d,c);
        printf("| %.2f  %.2f |\n",b,a);
    }
    printf("\n");
}

/// 15
void totalPorcentajes(){
    //b
    int a = 194+180+221+432+820;
    int b = 48+20+90+51+61;
    int c = 206+320+140+821+946;
    int d = 45+16+20+14+18;
    float total = a+b+c+d;
    float porcentajeA = (a/total)*100;
    float porcentajeB = (b/total)*100;
    float porcentajeC = (c/total)*100;
    float porcentajeD = (d/total)*100;

    printf(" ------------------------------------------------------------------------------\n");
    printf("  TOTAL             %i            %i             %i            %i \n",a,b,c,d);
    printf(" ------------------------------------------------------------------------------\n");
    printf("                 %% %.2f         %% %.2f          %% %.2f         %% %.2f\n",porcentajeA,porcentajeB,porcentajeC,porcentajeD);
    printf(" ------------------------------------------------------------------------------\n");

    if(a>b&&a>c&&a>d){
        printf(" EL CANDIDATO MAS VOTADO ES EL A\n");
    }else if(b>a&&b>c&&b>d){
        printf(" EL CANDIDATO MAS VOTADO ES EL B\n");
    }else if(c>a&&c>b&&c>d){
        printf(" EL CANDIDATO MAS VOTADO ES EL C\n");
    }else{
        printf(" EL CANDIDATO MAS VOTADO ES EL D\n");
    }
    //c
    if(porcentajeA>porcentajeB){
        if(porcentajeA>porcentajeC){
            if(porcentajeA>porcentajeD){
                printf(" EL CANDIDATO GANADOR ES EL A\n");
            }
        }
    }if(porcentajeB>porcentajeA){
        if(porcentajeB>porcentajeC){
            if(porcentajeB>porcentajeD){
                printf("\n EL CANDIDATO GANADOR ES EL B\n");
            }
        }
    }if(porcentajeC>porcentajeA){
        if(porcentajeC>porcentajeB){
            if(porcentajeC>porcentajeD){
                printf("\n EL CANDIDATO GANADOR ES EL C\n");
            }
        }
    }if(porcentajeD>porcentajeA){
        if(porcentajeD>porcentajeB){
            if(porcentajeD>porcentajeC){
                printf("\n EL CANDIDATO GANADOR ES EL D\n");
            }
        }
    }
    //d
    if(porcentajeA<50){
        if(porcentajeA>porcentajeB||porcentajeA>porcentajeC||porcentajeA>porcentajeD){
            printf("\n EL CANDIDATO EN SEGUNDA VUELTA ES A\n");
        }
    }
    if(porcentajeB<50){
        if(porcentajeB>porcentajeA||porcentajeB>porcentajeC||porcentajeB>porcentajeD){
            printf("\n EL CANDIDATO EN SEGUNDA VUELTA ES B\n");
        }
    }
    if(porcentajeC<50){
        if(porcentajeC>porcentajeA||porcentajeC>porcentajeB||porcentajeC>porcentajeD){
            printf("\n EL CANDIDATO EN SEGUNDA VUELTA ES C\n");
        }
    }
    if(porcentajeD<50){
        if(porcentajeD>porcentajeA||porcentajeD>porcentajeB||porcentajeD>porcentajeC){
            printf("\n EL CANDIDATO EN SEGUNDA VUELTA ES D\n");
        }
    }
    printf(" ------------------------------------------------------------------------------\n");
}

int menu(){
    int option;
    printf(" =============================\n");
    printf("  TRABAJO PRACTICO - MATRICES\n");
    printf(" =============================\n");
    printf(" 1.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y PERMITA QUE EL USUARIO INGRESE VALORES AL MISMO POR TECLADO. LA FUNCIÓN DEBE CARGAR LA MATRIZ POR COMPLETO. \n");
    printf(" 2.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y LA MUESTRE POR PANTALLA (EN FORMATO MATRICIAL). \n");
    printf(" 3.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y QUE CARGUE LA MISMA CON NÚMEROS ALEATORIOS (SIN INTERVENCIÓN DEL USUARIO). LA FUNCIÓN DEBE CARGAR LA MATRIZ POR COMPLETO. \n");
    printf(" 4.HACER UNA FUNCIÓN TIPO INT QUE SUME EL CONTENIDO TOTAL DE UNA MATRIZ DE NÚMEROS ENTEROS. \n");
    printf(" 5.HACER UNA FUNCIÓN TIPO FLOAT QUE CALCULE EL PROMEDIO DE UNA MATRIZ DE NÚMEROS ENTEROS. \n");
    printf(" 6.HACER UNA FUNCIÓN QUE DETERMINE SI UN ELEMENTO SE ENCUENTRA DENTRO DE UNA MATRIZ DE NÚMEROS ENTEROS. LA FUNCIÓN RECIBE LA MATRIZ Y EL DATO A BUSCAR. \n");
    printf(" 7.HACER UNA FUNCIÓN QUE CARGUE UN ARREGLO DE PALABRAS (STRINGS). LA FUNCIÓN DEBE RETORNAR CUANTAS PALABRAS SE CARGARON. \n");
    printf(" 8.HACER UNA FUNCIÓN QUE MUESTRE UN ARREGLO DE PALABRAS. \n");
    printf(" 9.HACER UNA FUNCIÓN QUE DETERMINE SI UNA PALABRA SE ENCUENTRA DENTRO DE UN ARREGLO DE PALABRAS. LA FUNCIÓN RECIBE EL ARREGLO, LA CANTIDAD DE PALABRAS QUE CONTIENE Y LA PALABRA A BUSCAR. \n");
    printf(" 10.HACER UNA FUNCIÓN (O VARIAS) QUE ORDENE UN ARREGLO DE PALABRAS POR ORDEN ALFABÉTICO. (POR SELECCIÓN O INSERCIÓN, EL QUE MÁS TE GUSTE).\n");
    printf(" 11.HACER UNA FUNCIÓN QUE RETORNE EL DETERMINANTE DE UNA MATRIZ DE 2X2. n");
    printf(" 12.FUNCIÓN QUE VERIFIQUE SI UNA MATRIZ DE 2X2 TIENE INVERSA. \n");
    printf(" 13.HACER UNA FUNCIÓN QUE MULTIPLIQUE UNA MATRIZ DE 2X2 POR UNA MATRIZ DE 2X5. \n");
    printf(" 14.HACER UNA FUNCIÓN QUE CALCULE LA MATRIZ INVERSA DE UNA MATRIZ DE 2X2. \n");
    printf(" 15.LOS RESULTADOS DE LAS ÚLTIMAS ELECCIONES A INTENDENTE EN EL PUEBLO “LA MATRIX” HAN SIDO LOS SIGUIENTES: \n");
    printf(" A.IMPRIMIR LA TABLA ANTERIOR CON CABECERAS INCLUIDAS\n");
    printf(" B.CALCULAR E IMPRIMIR EL NÚMERO TOTAL DE VOTOS RECIBIDOS POR CADA CANDIDATO Y EL PORCENTAJE TOTAL DE VOTOS EMITIDOS. ASÍ MISMO, VISUALIZAR EL CANDIDATO MÁS VOTADO.\n");
    printf(" C.SI ALGÚN CANDIDATO RECIBE MÁS DEL 50% DE LOS VOTOS, EL PROGRAMA IMPRIMIRÁ UN MENSAJE DECLARÁNDOSE GANADOR.\n");
    printf(" D.SI ALGÚN CANDIDATO RECIBE MENOS DEL 50% DE LOS VOTOS, EL PROGRAMA DEBE IMPRIMIR EL NOMBRE DE LOS DOS CANDIDATOS MÁS VOTADOS QUE SERÁN LOS QUE PASEN A LA SEGUNDA RONDA DE LAS ELECCIONES. \n");
    printf(" 0 - SALIR DEL PARCIAL\n");
    printf("\n ELIJA UNA OPCION: ");
    fflush(stdin);
    scanf("%i",&option);
    return option;
}
void funcionMenu(){
    setlocale(LC_ALL,"");
    int x=3;
    int y=3;
    int matrizMain[x][y];
    int valChar=0;
    char arregloString[valChar][20];
    int option=0;
    do{
        option=menu();
        system("cls");
        switch(option){
        case 1:{
            printf(" 1.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y PERMITA QUE EL USUARIO INGRESE VALORES AL MISMO POR TECLADO. LA FUNCIÓN DEBE CARGAR LA MATRIZ POR COMPLETO. \n\n");
            cargarMatrizInt(matrizMain,x,y);
            printf("\n");
            system("pause");
            system("cls");
        }
        break;
        case 2:{
            printf(" 2.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y LA MUESTRE POR PANTALLA (EN FORMATO MATRICIAL). \n");
            mostrarMatriz(matrizMain,x,y);
            system("pause");
            system("cls");
        }
        break;
        case 3:{
            printf(" 3.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UNA MATRIZ DE NÚMEROS ENTEROS Y QUE CARGUE LA MISMA CON NÚMEROS ALEATORIOS (SIN INTERVENCIÓN DEL USUARIO). LA FUNCIÓN DEBE CARGAR LA MATRIZ POR COMPLETO. \n");
            cargarMatrizRandom(matrizMain,x,y);
            mostrarMatriz(matrizMain,x,y);
            system("pause");
            system("cls");
        }
        break;
        case 4:{
            printf(" 4.HACER UNA FUNCIÓN TIPO INT QUE SUME EL CONTENIDO TOTAL DE UNA MATRIZ DE NÚMEROS ENTEROS. \n");
            printf("\n LA SUMA DE LOS ELEMENTOS DE LA MATRIZ DA: %d\n\n", sumarMatriz(matrizMain,x,y));
            system("pause");
            system("cls");
        }
        break;
        case 5:{
            printf(" 5.HACER UNA FUNCIÓN TIPO FLOAT QUE CALCULE EL PROMEDIO DE UNA MATRIZ DE NÚMEROS ENTEROS. \n");
            printf("\n EL PROMEDIO DE LA MATRIZ ES DE: %.2f\n\n",promedioMatriz(matrizMain,x,y));
            system("pause");
            system("cls");
        }
        break;
        case 6:{
            printf(" 6.HACER UNA FUNCIÓN QUE DETERMINE SI UN ELEMENTO SE ENCUENTRA DENTRO DE UNA MATRIZ DE NÚMEROS ENTEROS. LA FUNCIÓN RECIBE LA MATRIZ Y EL DATO A BUSCAR. \n");
            encontrarElemento(matrizMain,x,y);
            system("pause");
            system("cls");
        }
        break;
        case 7:{
            printf(" 7.HACER UNA FUNCIÓN QUE CARGUE UN ARREGLO DE PALABRAS (STRINGS). LA FUNCIÓN DEBE RETORNAR CUANTAS PALABRAS SE CARGARON. \n");
            valChar=cargarMatrizChar(arregloString,x,y);
            system("pause");
            system("cls");
        }
        break;
        case 8:{
            printf(" 8.HACER UNA FUNCIÓN QUE MUESTRE UN ARREGLO DE PALABRAS. \n");
            mostrarArregloChar(arregloString,valChar);
            system("pause");
            system("cls");
        }
        break;
        case 9:{
            printf(" 9.HACER UNA FUNCIÓN QUE DETERMINE SI UNA PALABRA SE ENCUENTRA DENTRO DE UN ARREGLO DE PALABRAS. LA FUNCIÓN RECIBE EL ARREGLO, LA CANTIDAD DE PALABRAS QUE CONTIENE Y LA PALABRA A BUSCAR. \n\n");
            buscarPalabra(arregloString,valChar);
            system("pause");
            system("cls");
        }
        break;
        case 10:{
            printf("10.HACER UNA FUNCIÓN (O VARIAS) QUE ORDENE UN ARREGLO DE PALABRAS POR ORDEN ALFABÉTICO. (POR SELECCIÓN O INSERCIÓN, EL QUE MÁS TE GUSTE).\n");
            ordenarPalabras(arregloString, valChar);
            mostrarArregloChar(arregloString,valChar);
            system("pause");
            system("cls");
        }
        break;
        case 11:{
            printf("11.HACER UNA FUNCIÓN QUE RETORNE EL DETERMINANTE DE UNA MATRIZ DE 2X2.\n");
            cargarMatrizOrdenDos(matrizMain,2,2);
            mostrarMatrizOrdenDos(matrizMain,2,2);
            determinanteDeOrdenDos(matrizMain);
            printf(" EL DETERMINANTE DE LA MATRIZ ES %d\n\n", determinanteDeOrdenDos(matrizMain));
            system("pause");
            system("cls");
        }
        break;
        case 12:{
            printf("12.FUNCIÓN QUE VERIFIQUE SI UNA MATRIZ DE 2X2 TIENE INVERSA. \n");
            inversa(matrizMain);
            system("pause");
            system("cls");
        }
        break;
        case 13:{
            printf("13.HACER UNA FUNCIÓN QUE MULTIPLIQUE UNA MATRIZ DE 2X2 POR UNA MATRIZ DE 2X5. \n");
            int matrizDos[2][2];
            int matrizCinco[2][5];
            int matrizResultado[2][5];
            int m = 0;
            int n = 0;
            int p = 0;
            cargarMatrizOrdenDos(matrizDos,2,2);
            mostrarMatrizOrdenDos(matrizDos,2,2);
            cargarMatrizDosCinco(matrizCinco,2,5);
            mostrarDosCinco(matrizCinco,2,5);
            multiplicacionDeMatrices(matrizDos,matrizCinco,matrizResultado,m,n,p);
            mostrarMatrizOrdenDos(matrizResultado,2,5);
            system("pause");
            system("cls");
        }
        break;
        case 14:{
            printf("14.HACER UNA FUNCIÓN QUE CALCULE LA MATRIZ INVERSA DE UNA MATRIZ DE 2X2. \n");
            sacarInversa(matrizMain);
            system("pause");
            system("cls");
        }
        break;
        case 15:{
            printf("15.LOS RESULTADOS DE LAS ÚLTIMAS ELECCIONES A INTENDENTE EN EL PUEBLO “LA MATRIX” HAN SIDO LOS SIGUIENTES: \n");
            printf("\n ELECCIONES EN LA MATRIX\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("  DISTRITO       CANDIDATO A     CANDIDATO B     CANDIDATO C     CANDIDATO D\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("     1               194             48              206             45\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("     2               180             20              320             16\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("     3               221             90              140             20\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("     4               432             51              821             14\n");
            printf(" -----------------------------------------------------------------------------\n");
            printf("     5               820             61              946             18\n");
            totalPorcentajes();
            system("pause");
            system("cls");
        }
        break;
        case 0:{
            printf("\n SALIR\n");
        }
        break;
        default:
            printf("\n OPCION INCORRECTA\n\n");
            system("pause");
            system("cls");
            break;
        }
    }
    while(option!=0);
    printf("\n FIN DEL PARCIAL\n\n");
    system("pause");
}

