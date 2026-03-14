# Proyecto_C

## Descripción

Este repositorio contiene tanto el código en C de un convertidor de monedas como el conversor para poder compilar el código.

## Prerrequisitos

- Instalar el compilador de C (`build-essential`)

## Pasos para su ejecución

Para ejecutar este programa en Linux, primero asegúrate de tener GCC instalado (`sudo apt install gcc` en Ubuntu/Debian), luego guarda el código como `conversor.c`, compila con:


gcc conversor.c -o conversor -Wall -std=c99

y ejecuta con:

bash
./conversor

El programa mostrará un menú interactivo donde podrás seleccionar el tipo de conversión deseada (por ejemplo, opción 2 para dólares a quetzales), ingresar la cantidad y obtener el resultado según las tasas de cambio predefinidas (1 USD = 7.72 GTQ, 1 USD = 0.95 EUR).

Diego Jose Cifuentes moran 26001221@galileo.edu  26001221


