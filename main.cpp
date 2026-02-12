#include <iostream>    // Pour affichage
#include "point.h"     // Inclusion de la classe Point

using namespace std;   // Pour éviter std::cout

int main() {
    // Déclaration d’un point avec coordonnées (1.0, 2.0)
    Point p1(1.0, 2.0);

    // Affichage du point initial
    cout << "Position initiale :" << endl;
    p1.affiche();

    // Déplacement du point de dx = 3 et dy = 2
    p1.deplace(3.0, 2.0);

    // Affichage du point après déplacement
    cout << "Apres deplacement :" << endl;
    p1.affiche();

    return 0;  // Fin du programme
}
