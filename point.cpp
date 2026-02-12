#include "point.h"     // Inclusion du fichier header pour la classe Point
#include <iostream>    // Pour utiliser cout

using namespace std;   // Pour éviter d’écrire std::cout

// Constructeur : initialise les coordonnées du point
Point::Point(float abs, float ord) {
    x = abs;  // On affecte abs à la coordonnée x
    y = ord;  // On affecte ord à la coordonnée y
}

// Méthode deplace : effectue une translation du point
void Point::deplace(float dx, float dy) {
    x += dx;  // On ajoute dx à la coordonnée x
    y += dy;  // On ajoute dy à la coordonnée y
}

// Méthode affiche : affiche les coordonnées du point
void Point::affiche() {
    cout << "Coordonnees du point : (" << x << ", " << y << ")" << endl;
}
