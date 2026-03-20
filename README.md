# ➕ Sumar Números Multilenguaje

## 📌 Descripción

Este proyecto consiste en un programa simple que permite **sumar dos números ingresados por el usuario**.

La idea principal es implementar el mismo programa en **distintos lenguajes de programación**, para comparar sintaxis, estructuras y formas de interactuar con el usuario.

---

## 🎯 Objetivos

* Practicar lógica básica de programación
* Comparar diferentes lenguajes
* Entender entrada y salida de datos
* Familiarizarse con estructuras simples

---

## 🧠 Funcionamiento

El programa:

1. Solicita al usuario un número
2. Solicita otro número
3. Realiza la suma
4. Muestra el resultado en pantalla

---

## 🧮 Implementación en Pascal

```pascal id="d0alx4"
program sumarnumeros;
var n1, n2, suma: Integer;
begin
 write('Ingresa un número: ');
 readln(n1);
 write('Ingresa otro número: ');
 readln(n2);

 suma := n1+n2;

 writeln(n1, ' + ' ,n2, ' = ' ,suma)
end.
```

---

## 💻 Implementación en C++

```cpp id="k39sl2"
#include <iostream>

int main() {
 int x, y, suma;

 std::cout << "Introduce un número: ";
 std::cin >> x;
 std::cout << "Introduce otro número: ";
 std::cin >> y;
 suma = x + y;

 std::cout << x << " + " << y << " = " << suma;
 return 0;
}
```

---

## 🧾 Explicación

### 🟢 Forma simple

Se piden dos números, se suman y se muestra el resultado.

### 🔵 Forma formal

Sean ( n_1 ) y ( n_2 ) dos números enteros:

[
suma = n_1 + n_2
]

---

## 🚀 Futuras mejoras

* Agregar más lenguajes (Python, JavaScript, etc.)
* Validar la entrada del usuario
* Permitir sumar más de dos números
* Crear versión con interfaz gráfica

---

## 📂 Estructura del proyecto

```id="68cv3g"
sumar-numeros-multilenguaje/
│
├── pascal/
│   └── sumarnumeros.pas
│
├── cpp/
│   └── sumarnumeros.cpp
│
└── README.md
```
