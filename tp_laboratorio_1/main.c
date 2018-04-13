#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    system("color 3");//da color
    char seguir='s';
    int opcion=0;
    float a = 0;
    float b = 0;
    float rta;

    printf("Calculadora 100tifika de Federico Guevara\n\n");

    while(seguir =='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",a);
        printf("2- Ingresar 2do operando (B=%.2f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        system("cls");       //Limpia operaciones realizadas
        switch(opcion)
        {
        case 1:
            printf("Ingrese numero X :");
            fflush(stdin);
            scanf("%f", &a );
            break;
        case 2:
            printf("Ingrese numero Y :");
            fflush(stdin);//limpia el buffer
            scanf("%f", &b );
            break;
        case 3:
            /** \brief se llama a la funcion para realizar la suma
         *
         * \param A es el primer numero
         * \param b es el segundo numero
         * \return y devuelve el resultado
         */
            rta = sumar ( a, b); //suma
            if (a==0&& b==0)
                printf("Porfavor asigne un valor a A o B \n");
            else if (!(a==0&& b==0))
                printf("El resultado de la suma es : %.2f\n",rta);
            break;
        case 4:
            /** \brief se llama a la funcion para realizar la resta
         *
         * \param A es el primer numero
         * \param b es el segundo numero
         * \return y devuelve el resultado
         */
            rta = resta (a, b);
            if (a==0&& b==0)
                printf("Porfavor asigne un valor a A o B \n");
            else if (!(a==0&& b==0))
                printf("El resultado de la resta es : %.2f\n",rta);
            break;
        case 5:
        /** \brief se llama a la funcion para realizar la division
         *
         * \param A es el primer numero
         * \param b es el segundo numero
         * \return y devuelve el resultado
         */
            rta = divi(a, b);
            while(b==0)  //solo en caso de que el segundo numero sea sero va a dar error por que no se puede dividir entre cero
            {
                printf("NO SE PUEDE DIVIDIR ENTRE 0, POR FAVOR ASIGNELE UN VALOR A B\n");
                break;
            }
            if (b!=0)
                printf("el resultado de la division es: %.2f\n",rta);
            break;
        case 6:
        /** \brief se llama a la funcion para realizar la multiplicacion
         *
         * \param A es el primer numero
         * \param b es el segundo numero
         * \return y devuelve el resultado
         */
            rta = multi(a, b);
            if (a==0&& b==0)
                printf("Porfavor asigne un valor a A o B \n");// si a vale cero y b tambien pide asignarle un valor a alguno de los dos almenos
            else if (!(a==0&& b==0))//en caso de que valga un valor diferente a cero la funcion sigue su rumbo
                printf("El resultado de la multiplicacion es : %.2f\n",rta);
            break;

        case 7:
        /** \brief se llama a la funcion para realizar la el factorial del numero A
         *
         * \param A es el numero por factorizar
         * \return y devuelve el resultado
         */

            rta = factorial(a);
            while(a>12.00)//si el numero ingresado es mayor a 12 no se puede realizar el factorial por que la calculadora empieza a poner mal los resultados
            {

                printf("Lo siento, pero no puedo calcular el factorial de se numero :(\n\n");
                break;
            }
            if (a<13.00)
                printf("FACORIAL DE A = %.2f\n\n",rta);
            break;
        case 8:
        /** \brief se llama a todas las funcioones para que hagan todos los ejercicios
         *
         * \param A es el primer numero
         * \param b es el segundo numero
         * \return y devuelve los resultados
         */

            printf("Resultados \t\n");
            rta = sumar(a, b);
            printf("SUMA = %.2f\n",rta);
            rta = resta(a, b);
            printf("RESTA = %.2f\n",rta);
            rta = divi(a, b);
            while(b==0)
            {
                printf("DIVISION = ERROR NO SE PUEDE DIVIDIR ENTRE 0\n");
                break;
            }
            if (b!=0)
            {
                printf("DIVISION = %.2f\n",rta);
            }
            rta = multi(a, b);
            printf("MULTIPLICACION = %.2f\n",rta);
            rta = factorial(a);
            while(a>12.00)//si el numero ingresado es mayor a 12 no se puede realizar el factorial por que la calculadora empieza a poner mal los resultados
            {
                printf("Lo siento, pero no puedo calcular el factorial de es numero :(, intenta con un numero que sea menor que 12\n\n");
                break;
            }
            if (a<13.00)
                printf("FACORIAL DE A = %.2f\n\n",rta);
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 1;

}
