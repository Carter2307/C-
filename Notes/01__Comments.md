## Les commentaires en C++
Les commentaires permettent de documenter le code. Ils sont ignorés par le compilateur et uniquement au programmeur.  

En C++ il existe deux types de commentaires : 
- Les commentaires sur une ligne : Avec les symboles `//`, permette d'écrire un commentaire rapide.
```c++
// The quick brown fox
```
- Les commentaires sur plusieurs lignes : Avec les symboles `/* */`
```c++
/*
 * the quick
 * Brown
 * Fox
 * */
 ```


### Utilisation des commentaires
Généralement les commentaires sont utilisés pour trois choses : 

**Premièrement** ils sont utiles pour décrire ce qu'une library, un program ou une fonction fait.  
```c++
// Ce programme calcule la note de l'étudiant en se basant sur les notes d'examens et de travaux dirigés.
```

```c++
// Cette fonction utilise la méthode de Newton pour déterminer la racine d'une équation donnée.
```  

**Deuxièmement** dans une librairie, un programme ou une fonction, les commentaires sont utiles pour décrire 
_**Comment le code va atteindre son objectif**_. 
```c++
/* Pour calculer la note finale d'un étudiant il faut additionné la somme totale des notes d'examen et de travaux pratique
 puis la divisé par le nombre totale de note */
```

```c++
// Pour générer un élément aléatoire nous allons procédé tel que suit
// 1) Mettre tout les éléments dans un tableau
// 2) Générer un nombre aléatoire
// 3) Comprendre à quel élément se nombre correspond
// 4) renvoyer cet élément
```


**Troisièmement** au niveau des déclarations, les commentaires sont utilisés pour décrire le _**Pourquoi le code fait X ou Y**_.

Exemple de mauvais commentaire: 
```c++
    // définie la vue à 0
    vue = 0;
```
Le problème c'est que la déclaration `vue = 0` nous permet déjà de comprendre ce qui est fait. donc inutile de rajouté un commentaire pour se repeété.


Exemple de bon commentaire:
```c++
    // Le joueur vient de boire une potion de cécité (aveuglement) il ne peut plus rien voir
    vue = 0
```
Grâce à se commentaire maintenant, on sait pourquoi la variable `vue` a été définie à `0`

En tant que développeur, on doit souvent décider sur la façon dont on va faire les choses. **Les commentaires** sont une bonne
façon de se rappeler pourquoi on a choisi cette solution et pas une autre.

```c++
//Nous avons décidé d'utiliser une liste lié à la place d'un tableau parce que
// les tableaux sont très lent pour les insertions.
```

```c++
// Nous allons utiliser la méthode d'Euler parce qu'il y'a pas de méthode déterminé
// pour résoudre ce type d'équation
```

Les commentaires doivent être écrits de façon à ce qu'on puisse comprendre ce que le code fait sans toute fois avoir à le lire.  


<div class="alert alert-green">
    <h5>Bonne pratique</h5>
    <p>Commenter votre code de façon claire comme si vous l'expliquer à quelqu'un qui n'a aucune idée de ce que votre code fait</p>
</div>