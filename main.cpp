//JUEGO PIEDRA, PAPEL O TIJERA
# include <iostream>
# include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Daniel Paz
//Cuenta: 61411752

//CREDITOS:
//Código tomado de la página:
//http://www.taringa.net/posts/ciencia-educacion/14335016/Programa-para-jugar-piedra-papel-o-tijera-en-C.html
//Le hice modificaciones en algunas partes del código y agregue las opciones de menú, cambie la estética
//de los resultados para que se apreciara de mejor forma así como respetar las sangrías en el código y hacer
//comentarios para su comprensión.

using namespace std;

int main ()
{
    //Definimos variables tipo "int"
    int z, a, m;
    //Funcion srand para obtener valores aleatorios
    srand(time(0));
    //Definimos "z" y "m" a cero y las utilizaremos para las opciones de los menus
    z = 0;
    m = 0;
    //cout para colocar un Menu para el juego y poder elegir lo que deseamos
    cout << "<<<<        MENU DE OPCIONES      >>>>"<<endl;
    cout << "<<<< JUEGO PIEDRA, PAPEL O TIJERA >>>>"<<endl;
    cout << "<<<< 1.  INTRUCCIONES             >>>>"<<endl;
    cout << "<<<< 2.         JUGAR             >>>>"<<endl;
    cout << "<<<< 3.         SALIR             >>>>"<<endl;
    //Abrimos un ciclo While para la variable "m" para el menu principal
    while(m<3)
    {
        //Solicitamos valor para la variable "m" y poder elegir la opcion deseada
        cin >> m ;
        //Usamos un "Switch" para poder darle una instruccion al valor que le dimos a "m"
        switch(m)
        {
            //Si es 1 nos presenta las instrucciones del juego.
            case 1:
                cout<<"Juego Clasico de Piedra Papel o Tijeta"<<endl;
                cout<<"Seleccione las Opciones 0 para Piedra, 1 para Papel y 2 para Tijera"<<endl;
                cout<<"Para Salir del Juego Marque 3 o Si Quiere seguir Jugando Marque 0"<<endl;
                cout<<"PRESIONE 3 PARA SEGUIR EN EL JUEGO O SALIR!!!"<<endl;
                break;
            //Si es 2 procedemos a jugar
            case 2:
                //Ciclo while para controlar los valores ingresados para "z" y poder continuar el juego
                while(z<3)
                {
                    //Instruccion para ingresar los valores a jugar
                    cout << "Piedra! Papel! o Tijera! Ingrese la opcion que desee!!!"<<endl;
                    cout << "(Piedra=0 Papel=1 Tijera=2)"<<endl;
                    cin >> z;
                    cout << " ";
                    //Asignamos el valor aleatorio a la variable "a"
                    a= rand()%3;
                    //Usamos un "Switch" para poder darle una instruccion al valor que le dimos a "z"
                    switch(z)
                    {
                        //El case nos permitira comparar la eleccion del Usuario vs PC
                        //evaluando si es Piedra, Papel o Tijera.
                        //Tambien usuamos otro Switch que evalua si es Empate,
                        //o si Gana el Usuario o Gana el PC.
                        case 0:
                            switch(a)
                            {
                                case 0:
                                    //Mensaje de la eleccion y que es un Empate.
                                    cout << "El ordenador a Elegido Piedra"<<endl;
                                    cout << "Empate!!!"<<endl;
                                    break;
                                case 1:
                                    //Mensaje de la eleccion y que Gana el PC.
                                    cout << "El ordenador a Elegido Papel"<<endl;
                                    cout << "Gana el PC!!!"<<endl;
                                    break;
                                case 2:
                                    //Mensaje de la eleccion y que Gana el Usuario.
                                    cout << "El ordenador a Elegido Tijera"<<endl;
                                    cout << "Gana el Usuario!!!"<<endl;
                                    break;
                            }
                            break;
                        //El case nos permitira comparar la eleccion del Usuario vs PC
                        //evaluando si es Piedra, Papel o Tijera.
                        //Tambien usuamos otro Switch que evalua si es Empate,
                        //o si Gana el Usuario o Gana el PC.
                        case 1:
                            switch(a)
                            {
                                case 0:
                                    //Mensaje de la eleccion y que Gana el Usuario.
                                    cout << "El ordenador a Elegido Piedra"<<endl;
                                    cout << "Gana el Usuario!!!"<<endl;
                                    break;
                                case 1:
                                    //Mensaje de la eleccion y que es un Empate
                                    cout << "El ordenador a Elegido Papel"<<endl;
                                    cout << "Empate!!!"<<endl;
                                    break;
                                case 2:
                                    //Mensaje de la eleccion y que Gana el PC.
                                    cout << "El ordenador a Elegido Tijera"<<endl;
                                    cout << "Gana el PC!!!"<<endl;
                                    break;
                            }
                            break;
                        //El case nos permitira comparar la eleccion del Usuario vs PC
                        //evaluando si es Piedra, Papel o Tijera.
                        //Tambien usuamos otro Switch que evalua si es Empate,
                        //o si Gana el Usuario o Gana el PC.
                        case 2:
                            switch(a)
                            {
                                case 0:
                                    //Mensaje de la eleccion y que Gana el PC.
                                    cout << "El ordenador a Elegido Piedra"<<endl;
                                    cout << "Gana el PC!!!"<<endl;
                                    break;
                                case 1:
                                    //Mensaje de la eleccion y que Gana el Usuario.
                                    cout << "El ordenador a Elegido Papel"<<endl;
                                    cout << "Gana el Usuario!!!"<<endl;
                                    break;
                                case 2:
                                    //Mensaje de la eleccion y que es un Empate
                                    cout << "El ordenador a elegido Tijera"<<endl;
                                    cout << "Empate!!!"<<endl;
                                    break;
                            }
                            break;
                    }
                    //Mensaje para decidir si sigue jugando o no.
                    cout << "Quiere volver a jugar? SI = 0, NO = 3"<<endl;
                    cin >> z;
                }
                cout << "Gracias por Jugar!!!"<<endl;
            case 3:
                //Mensaje para iniciar el juego o salir del juego.
                cout << "Quiere Comenzar a Jugar o Salir? SI = 2, NO = 3"<<endl;
                cout << "Presione 2 dos veces para Jugar"<<endl;
                cin >> m;
        }
    }//FIN MENU INICIO

}
