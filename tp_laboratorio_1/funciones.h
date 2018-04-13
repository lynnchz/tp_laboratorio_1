#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED






float sumar(float a, float b)
{
    float resultado;
    resultado = a + b;
    return resultado;
}

float resta (float a, float b)
{
    float resultado;
    resultado = a - b;
    return resultado;
}

float multi (float a, float b)
{
    float resultado;
    resultado = a * b;
    return resultado;
}

float divi (float a, float b)
{
    float resultado;
    if(b!=0)
    {
        resultado = a / b;
        return resultado;
    }
}

int factorial (int a)
{
    int resultado;

    if (a==0) //si a es cero el factorial de cero es = 1
        resultado=1;
    else // de lo contrario se hace el factorial del numero difernte a cero
        resultado = a*factorial(a-1);
    return resultado;
}


#endif // FUNCIONES_H_INCLUDED
