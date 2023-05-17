// P012_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>

int main()
{
    int opc;
    bool continuar = true;
    bool vida = true;
    int aux = 3;
    while (continuar)
    {
        std::cout << " Hola Bienvenido, que deseas hacer?\n ";
        std::cout << "\topciones\n";
        std::cout << "1- Bucle de juego infinito\n";
        std::cout << "2- contador del 0 al 100\n" << std::endl;
        std::cin >> opc;
        switch (opc)
        {
        case 1:
            vida = true;
            aux = 3;
            while (vida) {
                std::cout << "tienes " << aux << " vidas\n" << std::endl;
                aux = aux - 1;
                if (aux <= -1) {
                    vida = false;
                }
            }
            break;

        case 2:

            for (int i = 0; i <= 100; i++)
            {
                std::cout << "El contador va en: " << i << std::endl;
            }
            break;
        default:
            std::cout << "Esa opción no la conozco\n";
            break;

        }
        std::cout << "Deseas realizar otra opcion? 0.- No 1.- Si \n";
        std::cin >> continuar;

    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
