# Introduction to iostream: cout, cin and endl

## std::cout 
`std::cout` pour **Caractère output** est une variable qui nous d'envoyer des données dans la console qui seront affichées
sous forme de texte.

```c++
#include <iostream> // importé pour utiliser std::cout

int main() {
    
    std::cout << "Hello world";     // Envois le texte Hello world à la console pour qu'il soit afficher sous forme de texte
    
    return 0;
}
```

`<<` est appelé **Caractère ou opérateur d'insertion**.

**std::cout** permet également d'afficher la valeur d'une variable: 
```c++
int x{ 5 };         // Déclare une variable de type entier nomé x avec pour valeur initiale 5

std::cout << x;     // Affiche la valeur de la variable x dans la console.
```
pour afficher plusieurs choses sur une même ligne: 
```c++
int x{ 1 };
std::cout << "Hello" << " World!" << x;     // Affiche Hello World! 1 dans la console.
```

## std::endl
Pour `end line` permet d'aller à la ligne. Une nouvelle est un caractère spécial spécifique au système d'exploitation.
`std::endl` permet de dire à la console de déplacé le curseur au début d'une nouvelle ligne.

```c++
std::cout << "Hi" << std::endl;                 // std::endl fais passer le curseur au début d'une nouvelle ligne
std::cout << " My name is Jamy" << std::endl;   //
```
```shell
Hi
My name is Jamy
```

## std::cin
Pour `character input` cin permet de lire les données saisies au clavier en utilisant **l'opérateur d'extraction**.
```c++
#include <iostream>

int main() {
    std::cout << "Enter a value: ";
    
    int x{};                                            // 
    
    std::cin >> x; 
    
    std::cout << "Vous avez saisi: " << x << "\n";
    
    return 0;
}
```