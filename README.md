# Soluciones de programación competitiva en C++

## Preparar una solución

1. Lee el enunciado con atención e identifica qué datos se reciben, qué resultado se pide y cuáles son las restricciones.
2. Diseña un algoritmo que resuelva el problema dentro de esas restricciones. Antes de programar, considera su complejidad en tiempo y memoria.
3. Escribe la solución en un archivo `.cpp`. La función `main` debe leer los datos desde la entrada estándar (`cin`) y escribir la respuesta en la salida estándar (`cout`).
4. Compila y prueba el programa. Comprueba el ejemplo del enunciado y también casos límite, como el tamaño mínimo y máximo, valores repetidos o entradas especiales.

El archivo `solucion.cpp` sirve como punto de partida. En problemas de programación competitiva suele ser útil configurar la entrada y salida:

```cpp
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
```

Después de desactivar la sincronización, usa `cin` y `cout` de forma consistente, sin mezclarlos con `scanf` y `printf`. La cabecera `<bits/stdc++.h>` está disponible en GCC, pero no forma parte del estándar de C++; para otros compiladores incluye las cabeceras que necesites por separado.

## Compilar

Se necesita un compilador de C++ como GCC. Desde una terminal situada en la carpeta del archivo, ejecuta:

```sh
g++ -O2 -std=c++17 solucion.cpp -o solucion
```

Esto compila `solucion.cpp` usando C++17 y genera un ejecutable llamado `solucion`. Si el compilador informa errores, corrige el código y vuelve a compilar antes de ejecutarlo.

## Ejecutar y probar

Para escribir los datos a mano, ejecuta el programa y proporciona la entrada esperada por el enunciado:

```sh
./solucion
```

En Windows, si se usa Git Bash, el comando anterior funciona cuando el ejecutable se genera como `solucion.exe`; también puedes invocarlo con `./solucion.exe`. En el Símbolo del sistema (cmd), ejecútalo con `solucion.exe`.

Para probar con archivos, coloca la entrada en `input.txt` y redirige la entrada y la salida:

```sh
./solucion < input.txt > output.txt
```

En el Símbolo del sistema de Windows (cmd), usa:

```bat
solucion.exe < input.txt > output.txt
```

La redirección hace que el programa lea `input.txt` como si los datos se escribieran por teclado y guarde lo que imprimiría en `output.txt`. Revisa ese archivo y compara el resultado con el esperado. En una plataforma de programación competitiva normalmente no se usan archivos: el juez proporciona la entrada estándar y evalúa la salida estándar.

## Aprender del proceso

Si una prueba falla, reduce el caso a un ejemplo pequeño y revisa paso a paso cómo cambian las variables. Verifica especialmente los límites de ciclos e índices, los tipos numéricos y los casos que no aparecen en el ejemplo. Al terminar, explica por qué el algoritmo es correcto y cuál es su complejidad; entender esas decisiones es tan importante como obtener una respuesta aceptada.
