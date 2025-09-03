Estructura del Código
---------------------

El programa está estructurado en dos partes principales para promover la modularidad y la claridad del código: una función main que controla el flujo principal y una función auxiliar que contiene la lógica de negocio.

### bool esPrioridadAlta(int cantidadItems)

Esta es la función auxiliar que encapsula la lógica principal del problema.

*   **Entrada:** Recibe un único parámetro de tipo int que representa la cantidad de ítems en una caja.
    
*   **Proceso:** Utiliza el operador módulo (%) para calcular el residuo de la división de la cantidad de ítems por 2. Si el residuo es 0, el número es par.
    
*   **Salida:** Devuelve un valor booleano:
    
    *   true si la cantidad es par (Prioridad Alta).
        
    *   false si la cantidad es impar (Prioridad Normal).
        

### int main()

Esta es la función principal y el punto de entrada del programa.

1.  **Inicialización:**
    
    *   Define un arreglo estático de enteros inventarioCajas con los datos del problema.
        
    *   Calcula el tamaño del arreglo de forma segura usando la expresión sizeof(inventarioCajas) / sizeof(inventarioCajas\[0\]).
        
    *   Inicializa una variable contadorPrioridad en 0.
        
2.  **Procesamiento:**
    
    *   Utiliza un bucle for para recorrer cada elemento del arreglo inventarioCajas.
        
    *   Dentro del bucle, llama a la función esPrioridadAlta() para cada cantidad.
        
    *   Basado en el resultado booleano (true o false), imprime en la consola si la caja es de "Prioridad Alta" o "Prioridad Normal".
        
    *   Incrementa contadorPrioridad si la caja es de alta prioridad.
        
3.  **Reporte Final:**
    
    *   Una vez que el bucle ha terminado, imprime el valor final de contadorPrioridad, mostrando el total de cajas de alta prioridad encontradas.
        

Salida de Ejemplo
-----------------

Al ejecutar el programa, la salida esperada en la consola será la siguiente:
```
Forma de recorrido estandar

Caja con 150 ítems: Prioridad Alta
Caja con 77 ítems: Prioridad Normal
Caja con 40 ítems: Prioridad Alta
Caja con 51 ítems: Prioridad Normal
Caja con 98 ítems: Prioridad Alta
Caja con 29 ítems: Prioridad Normal
Caja con 64 ítems: Prioridad Alta

Total de cajas de alta prioridad: 4
```
