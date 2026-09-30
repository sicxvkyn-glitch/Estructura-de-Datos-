#include <iostream> // Colocamos las librerias correspondientes, en este caso la libreria nos permite utilizar cout y cin para mostrar y recibir datos.
using namespace std; // Permite usar cout y cin sin escribir std

int factorial(int n) // Creamos nuestra funcion llamada factorial que recibe los valores n (numeros enteros) 
{ // Indica el inicio de la función factorial 
    int f; // Declara la variable, es decir f (factorial) que es un tipo de datos entero, donde se guardara el resultado

    if (n == 0) // Se clara un ciclo if que comprueba si el n (numero) es igual a 0.
        f = 1; // Si n es 0, el factorial es 1. Eso se declara por reglad del factorial. 
    else // Se realiza otro ciclo que declara que si n no es 0,  debe realizar la siguiente operación.
        f = n * factorial(n - 1); // Multiplica n por el factorial del número anterior. Y la función se llama a sí misma. Y al mismo tiempo se guarda el valor en f que es nuestra variable que declaramos al inicio. 

    return f; // Se finaliza la funcion y regresa el resultado de la función.
} // Indica el fin de la función

int main() // Iniciamos nuestro metodo main que es la funcion principal 
{
    int fact; // Declara la variable que de tipo entera donde se guardará el factorial.
    int n; // Declara la variable que guardara el numero que ingrese el usuario, declarado que sea entero. 

    cout << "Dame un numero: "; // Muestra el mensaje en pantalla para que el usuario ingrse un valor, es decir un numero. 
    cin >> n; // Guarda el número (n) que introduce el usuario.

    fact = factorial(n); // Llama a la función factorial y almacena el resultado en fact.

    cout << "El factorial = " << fact << endl; // Muestra el resultado del factorial.

    return 0; // Indica q el programa terminó correctamente.
}





















