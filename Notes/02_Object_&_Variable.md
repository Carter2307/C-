## Objects and Variable 

### data
Une **donnée**, c'est toute information qui peut être déplacer, manipuler ou stocker par un ordinateur.

### value
Une **valeur**, c'est un nombre, un texte ou tout autre élément qui peut être représenté en tant qu'une donnée.

### Object
Un **objet** en c++, c'est une région de stockage (généralement en mémoire) qui peut stocker des valeurs et a d'autres propriétés
associés. 

### Variable
une variable, c'est un objet qui a un nom (un identifiant).
un identifiant, c'est le nom qui permet d'accéder à une variable

En c++ on utilise les objets pour stocker des valeurs en mémoire.  
un **objet nommé** est une `variable`.  
Une `variable` est constitué :  
- d'un identifiant (le nom de la variable)
- un type (int, double, ...) permet de déterminer **comment la valeur de la variable** doit être **interprété en mémoire**.

## Variable Assignment and Initialization
### Assignment
Affecter une value à une variable se faire avec **l'opérateur d'affectation (`=`)**
```c++
    int width; // définit une variable nommé `width` de type `entier`
    width = 5; // Affectation de la valeur `5` à la variable `width` 
```
Cette deuxième instruction copie la _valeur_ à **droite** de l'opérateur d'affectation (=) (la valeur 5 dans notre cas) 
dans la _variable_ à gauche (la variable width).

### Intialisation
Lorsqu'on crée un objet, on peut lui affecter une value initiale. Affecter une value à un objet (une variable) lors de sa création
est appelé **Initialisation**. La syntaxe utilisée pour cette opération est appelée **Initialisateur**.

```c++
    int width { 5 }; // Initialisation de la variable width avec la valeur 5 
```

En c++  il existe **6 façons basic** d'initialiser une variable.
```c++
int a;          // Pas d'initialisation (initialisation par défaut)
int b = 5;      // Valeur initiale après l'égalité (Initialisation par copie). hérité du language C
int c(6);       // Valeur initiale dans les parenthèses (Initialisation directe)

// Méthode d'initialisation des Listes (à partir de c++11)
int d { 7 };       // Valeur initiale dans les accolades (initialisation direct des listes). same as d{7}
int e = { 8 };    // Valeur initiale dans les accolades après l'égalité (Initialisation par copie des listes)
int f {};       // L'initialisateur est une paire d'accolade vie (Initialisation par valeur)

```

### [[maybe_unused]] Attribute
Nous pouvons spécifier au compilateur de ne pas générer d'érreur si une variable est initialisée avec une valeur mais pas utilisé en utilisant l'expression `[[maybe_unused]]`
à gauche du type de notre variable.
```c++
[[maybe_unused]] double phi { 1.61803 };
```

<div class="alert alert-green">
    <h5 style="color:#94e55b">Bonne pratique</h5>
    <p style="color:#94e55b">-> Ne pas initialiser plusieurs variables sur une même ligne</p>
    <p style="color:#94e55b">-> Utiliser les affectations directes par liste <code>int a {5};</code></p>
</div>