#ifndef POINT_H        // Directive pour éviter les inclusions multiples
#define POINT_H

// Définition de la classe Point
class Point {
private:
    float x;   // Coordonnée x du point (privée)
    float y;   // Coordonnée y du point (privée)

public:
    // Constructeur qui initialise les coordonnées du point
    Point(float abs, float ord);

    // Méthode qui effectue une translation du point
    void deplace(float dx, float dy);

    // Méthode qui affiche les coordonnées du point
    void affiche();
};

#endif // Fin de la directive de protection
