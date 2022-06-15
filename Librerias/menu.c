#include "menu.h"
#include <windows.h>
#include <locale.h>
#include "gotoxy.h"

/// Estructura de los Lectores
typedef struct
{
    int id;
    char name[30];
    char surName[30];
    char address[30];
    char phone[30];
    int favourite[10];
    int cantidadFav;
    char mail[30];
    char password[8];
    int active;
    int administrator;
} stReader;

void InitialMenu(){
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++){
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 24);
        printf("%c", 1732);
    }
    for (int y = 2; y < 24; y++){
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,24);
    printf("%c", bottomLeft);
    gotoxy(78,24);
    printf("%c", bottomRight);
    gotoxy(2,1);
    printf("BIENVENIDO");
    gotoxy(65, 24);
    printf("ESC - Salir");
    gotoxy(15,10);
    printf("1.- INGRESAR AL SISTEMA.");
    gotoxy(15,12);
    printf("2.- REGISTRARSE.");
    gotoxy(15,16);
    printf("9.- OLVIDE MI PASSWORD.");
}

void LoguinMenu(){
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++){
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 24);
        printf("%c", 1732);
    }
    for (int y = 2; y < 24; y++){
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,24);
    printf("%c", bottomLeft);
    gotoxy(78,24);
    printf("%c", bottomRight);
    gotoxy(2,1);
    printf("INGRESO AL SISTEMA");
    gotoxy(15,10);
    printf("USUARIO: ");
    gotoxy(15,12);
    printf("PASSWORD:");
    for (int x = 24; x < 64; x++){
        gotoxy(x, 10);
        printf("%c", 219);
        gotoxy(x, 12);
        printf("%c", 219);
    }
}

void RegistrationMenu(){
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++){
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 24);
        printf("%c", 1732);
    }
    for (int y = 2; y < 24; y++){
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,24);
    printf("%c", bottomLeft);
    gotoxy(78,24);
    printf("%c", bottomRight);
    gotoxy(65, 24);
    printf("ESC - Salir");
    gotoxy(2,1);
    printf("REGISTRO DE USUARIO");
    gotoxy(5,6);
    printf("APELLIDO: ");
    gotoxy(5,8);
    printf("NOMBRE:");
    gotoxy(5,10);
    printf("TELEFONO (SIN 0 Y SIN 15): ");
    gotoxy(5,12);
    printf("DIRECCION:");
    gotoxy(5,14);
    printf("CORREO ELECTRONICO (USERNAME): ");
    gotoxy(5,16);
    printf("PASSWORD:");
    gotoxy(5,18);
    printf("REINGRESE PASSWORD:");

    for (int x = 36; x < 66; x++){
        gotoxy(x, 6);
        printf("%c", 219);
        gotoxy(x, 8);
        printf("%c", 219);
        gotoxy(x, 10);
        printf("%c", 219);
        gotoxy(x, 12);
        printf("%c", 219);
        gotoxy(x, 14);
        printf("%c", 219);
        gotoxy(x, 16);
        printf("%c", 219);
        gotoxy(x, 18);
        printf("%c", 219);
    }
}

void MostrarMensaje(char mensaje[]){
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    for (int x = 10; x < 68; x++){
        gotoxy(x,7);
        printf("%c", 1732);
        gotoxy(x,8);
        printf(" ");
        gotoxy(x, 9);
        printf("%c", 1732);
    }
    for (int y = 7; y < 9; y++){
        gotoxy(10,y);
        printf("%c", borde);
        gotoxy(68,y);
        printf("%c", borde);
    }
    gotoxy(10,7);
    printf("%c", topLeft);
    gotoxy(68,7);
    printf("%c", topRight);
    gotoxy(10,9);
    printf("%c", bottomLeft);
    gotoxy(68,9);
    printf("%c", bottomRight);
    int posicion = (56 - strlen(mensaje)) / 2;
    gotoxy(10 + posicion,8);
    printf("%s", mensaje);
    Sleep(3000);
}

int ReaderMenu(){
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    const int linea = 1732;
    const int corte = 1731;
    const int corteOpuesta = 1716;

    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=26 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++){
        gotoxy(x,1);
        printf("%c", linea);
        gotoxy(x, 24);
        printf("%c", linea);
    }
    for (int y = 2; y < 24; y++){
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,24);
    printf("%c", bottomLeft);
    gotoxy(78,24);
    printf("%c", bottomRight);
    gotoxy(2,1);
    printf("BIENVENIDO");
    gotoxy(65, 24);
    printf("ESC-LOGOUT");
    //Area botones
    gotoxy(3,23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(3, 24);
    printf("%c F1-PERFIL %c", corteOpuesta, corte);
    gotoxy(3,25);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(3,25);
    printf("%c", bottomLeft);
    gotoxy(18,23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(18, 24);
    printf("%c F2-GUARDAR %c", corteOpuesta, corte);
    gotoxy(18,25);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(18,25);
    printf("%c", bottomLeft);
    gotoxy(36,23);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(36, 24);
    printf("%c F3-BAJA USUARIO %c", corteOpuesta, corte);
    gotoxy(36,25);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(36,25);
    printf("%c", bottomLeft);
    // Area Busqueda
    for (int x = 3; x < 38; x++){
        gotoxy(x,3);
        printf("%c", linea);
        gotoxy(x, 21);
        printf("%c", linea);
    }
    for (int y = 4; y < 21; y++){
        gotoxy(3,y);
        printf("%c", borde);
        gotoxy(38,y);
        printf("%c", borde);
    }
    gotoxy(3,3);
    printf("%c", topLeft);
    gotoxy(38,3);
    printf("%c", topRight);
    gotoxy(3,21);
    printf("%c", bottomLeft);
    gotoxy(38,21);
    printf("%c", bottomRight);
    gotoxy(4, 3);
    printf("LIBROS");
    for (int x = 4; x < 37; x++){
        gotoxy(x,5);
        printf("%c", linea);
        gotoxy(x, 7);
        printf("%c", linea);
    }
    for (int y = 5; y < 7; y++){
        gotoxy(4,y);
        printf("%c", borde);
        gotoxy(37,y);
        printf("%c", borde);
    }
    gotoxy(4,5);
    printf("%c", topLeft);
    gotoxy(37,5);
    printf("%c", topRight);
    gotoxy(4,7);
    printf("%c", bottomLeft);
    gotoxy(37,7);
    printf("%c", bottomRight);
    gotoxy(5, 5);
    printf("BUSCAR");
    for (int x = 4; x < 37; x++){
        gotoxy(x,8);
        printf("%c", linea);
        gotoxy(x, 20);
        printf("%c", linea);
    }
    for (int y = 8; y < 20; y++){
        gotoxy(4,y);
        printf("%c", borde);
        gotoxy(37,y);
        printf("%c", borde);
    }
    gotoxy(4,8);
    printf("%c", topLeft);
    gotoxy(37,8);
    printf("%c", topRight);
    gotoxy(4,20);
    printf("%c", bottomLeft);
    gotoxy(37,20);
    printf("%c", bottomRight);
    gotoxy(5, 8);
    printf("RESULTADO");
    // Area Detalles
    for (int x = 39; x < 75; x++){
        gotoxy(x,3);
        printf("%c", linea);
        gotoxy(x, 21);
        printf("%c", linea);
    }
    for (int y = 3; y < 21; y++){
        gotoxy(39,y);
        printf("%c", borde);
        gotoxy(75,y);
        printf("%c", borde);
    }
    gotoxy(39,3);
    printf("%c", topLeft);
    gotoxy(75,3);
    printf("%c", topRight);
    gotoxy(39,21);
    printf("%c", bottomLeft);
    gotoxy(75,21);
    printf("%c", bottomRight);
    gotoxy(42, 3);
    printf("DETALLES");
}

int AdminMenu(){
	printf("Admin");
}

void MenuPerfil(stReader reader)
{
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    const int linea = 1732;
    const int corte = 1731;
    const int corteOpuesta = 1716;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++)
    {
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 23);
        printf("%c", 1732);
    }
    for (int y = 2; y < 23; y++)
    {
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,23);
    printf("%c", bottomLeft);
    gotoxy(78,23);
    printf("%c", bottomRight);
    gotoxy(65, 23);
    printf("ESC - Salir");
    gotoxy(2,1);
    printf("MI PERFIL - EDICION");
    gotoxy(5,4);
    printf("APELLIDO: %s", strupr(reader.surName));
    gotoxy(5,6);
    printf("NOMBRE: %s", strupr(reader.name));
    gotoxy(5,8);
    printf("TELEFONO (SIN 0 Y SIN 15): ");
    gotoxy(5,10);
    printf("DIRECCION: ");
    gotoxy(5,12);
    printf("CAMBIO DE PASSWORD");
    gotoxy(5,14);
    printf("PASSWORD ANTERIOR:");
    gotoxy(5,16);
    printf("PASSWORD NUEVA:");
    gotoxy(5,18);
    printf("REINGRESE PASSWORD:");

    //Area botones
    gotoxy(1,21);
    printf("%c%c%cMODIFICAR%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", corte,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(51,22);
    printf("%c", borde);
    gotoxy(51,23);
    printf("%c", 1729);
    gotoxy(3,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(3, 23);
    printf("%c F1-TELEFONO %c", corteOpuesta, corte);
    gotoxy(3,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(3,24);
    printf("%c", bottomLeft);
    gotoxy(19,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(19, 23);
    printf("%c F2-DIRECCION %c", corteOpuesta, corte);
    gotoxy(19,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(19,24);
    printf("%c", bottomLeft);
    gotoxy(36,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(36, 23);
    printf("%c F3-PASSWORD %c", corteOpuesta, corte);
    gotoxy(36,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(36,24);
    printf("%c", bottomLeft);


    for (int x = 36; x < 66; x++)
    {
        gotoxy(x, 8);
        printf("%c", 219);
        gotoxy(x, 10);
        printf("%c", 219);
        gotoxy(x, 14);
        printf("%c", 219);
        gotoxy(x, 16);
        printf("%c", 219);
        gotoxy(x, 18);
        printf("%c", 219);
    }
    gotoxy(36,8);
    printf("%s ", strupr(reader.phone));
    gotoxy(36,10);
    printf("%s ", strupr(reader.address));

}

void CambiarTelefono(stReader reader)
{
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    const int linea = 1732;
    const int corte = 1731;
    const int corteOpuesta = 1716;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++)
    {
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 23);
        printf("%c", 1732);
    }
    for (int y = 2; y < 23; y++)
    {
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,23);
    printf("%c", bottomLeft);
    gotoxy(78,23);
    printf("%c", bottomRight);
    gotoxy(65, 23);
    printf("ESC - Salir");
    gotoxy(2,1);
    printf("CAMBIAR TELEFONO");
    gotoxy(5,8);
    printf("TELEFONO (SIN 0 Y SIN 15): ");
    gotoxy(5,10);
    printf("NUEVO NUMERO DE TELEFONO: ");

    //Area botones
    gotoxy(3,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(3, 23);
    printf("%c F1-GUARDAR CAMBIOS %c", corteOpuesta, corte);
    gotoxy(3,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(3,24);
    printf("%c", bottomLeft);
    gotoxy(26,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(26, 23);
    printf("%c F2-CANCELAR %c", corteOpuesta, corte);
    gotoxy(26,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(26,24);
    printf("%c", bottomLeft);

    for (int x = 36; x < 66; x++)
    {
        gotoxy(x, 8);
        printf("%c", 219);
        gotoxy(x, 10);
        printf("%c", 219);
    }
    gotoxy(36,8);
    printf("%s ", strupr(reader.phone));
    gotoxy(36,10);
    CapturarPalabra(reader.phone,36,10,30,0);
}

void CambiarDireccion(stReader reader)
{
    const int topLeft = 1754;
    const int topRight = 1727;
    const int bottomLeft = 1728;
    const int bottomRight = 1753;
    const int borde = 1715;
    const int linea = 1732;
    const int corte = 1731;
    const int corteOpuesta = 1716;
    setlocale(LC_ALL,"en_EN");
    system("mode con cols=80 lines=25 ");
    SetConsoleTitle("SISTEMA LIBROS Y LECTORES");
    for (int x = 1; x < 78; x++)
    {
        gotoxy(x,1);
        printf("%c", 1732);
        gotoxy(x, 23);
        printf("%c", 1732);
    }
    for (int y = 2; y < 23; y++)
    {
        gotoxy(1,y);
        printf("%c", borde);
        gotoxy(78,y);
        printf("%c", borde);
    }
    gotoxy(1,1);
    printf("%c", topLeft);
    gotoxy(78,1);
    printf("%c", topRight);
    gotoxy(1,23);
    printf("%c", bottomLeft);
    gotoxy(78,23);
    printf("%c", bottomRight);
    gotoxy(65, 23);
    printf("ESC - Salir");
    gotoxy(2,1);
    printf("CAMBIAR DIRECCION");
    gotoxy(5,8);
    printf("DIRECCION: ");
    gotoxy(5,10);
    printf("NUEVA DIRECCION: ");

    //Area botones
    gotoxy(3,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(3, 23);
    printf("%c F1-GUARDAR CAMBIOS %c", corteOpuesta, corte);
    gotoxy(3,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(3,24);
    printf("%c", bottomLeft);
    gotoxy(26,22);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", topLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,topRight);
    gotoxy(26, 23);
    printf("%c F2-CANCELAR %c", corteOpuesta, corte);
    gotoxy(26,24);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", bottomLeft, linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,linea,bottomRight);
    gotoxy(26,24);
    printf("%c", bottomLeft);

    for (int x = 36; x < 66; x++)
    {
        gotoxy(x, 8);
        printf("%c", 219);
        gotoxy(x, 10);
        printf("%c", 219);
    }
    gotoxy(36,8);
    printf("%s ", strupr(reader.address));
    gotoxy(36,10);
    CapturarPalabra(reader.address,36,10,30,0);
}

void CambiarPassword(stReader reader)
{
    char passwordVieja[8];
    char passwordNueva[8];
    char passwordValidacion[8];
    int flag=0;
    while(flag==0)
    {
        gotoxy(36,14);
        CapturarPalabra(passwordVieja,36,14,8,1);
        if(strcmp(passwordVieja,reader.password)==0)
        {
            flag=1;
        }
        else
        {
            gotoxy(36,19);
            color(4);
            printf("LAS CONTRASENIAS NO COINCIDEN");
            color(7);
            Sleep(2000);
            gotoxy(36,19);
            printf("                              ");
            for (int x = 36; x < 66; x++)
            {
                gotoxy(x, 14);
                printf("%c", 219);
            }
        }
    }
    flag=0;
    while(flag==0)
    {
        gotoxy(36,16);
        CapturarPalabra(passwordNueva,36,16,8,1);
        gotoxy(36,18);
        CapturarPalabra(passwordValidacion,36,18,8,1);
        if(strcmp(passwordNueva,passwordValidacion)==0)
        {
            gotoxy(36,19);
            color(2);
            printf("CONTRASENIA CAMBIADA CORRECTAMENTE");
            color(7);
            strcpy(reader.password,passwordNueva);
            flag=1;
        }
        else
        {
            gotoxy(36,19);
            color(4);
            printf("LAS CONTRASENIAS NUEVAS NO COINCIDEN");
            color(7);
            Sleep(2000);
            gotoxy(36,19);
            printf("                              ");
            for (int x = 36; x < 66; x++)
            {
                gotoxy(x, 14);
                printf("%c", 219);
            }
        }
    }

}
