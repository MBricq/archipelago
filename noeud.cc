#include "ville.h"
#include "tools.h"
#include "error.h"
#include "constantes.h"
#include "noeud.h"

static std::vector<Noeud> noeuds;

Noeud::Noeud(double uid_, double nbp_, Cercle c)
: uid(uid_), nbp(nbp_), cercle(c) {
	
}

void Noeud::afficher() {
	std::cout << "uid = " << uid << std::endl;
	std::cout << "nbp = " << nbp << std::endl;
	std::cout << "Cercle : (" << cercle.centre.x << ", " << cercle.centre.y << ") et r = " << cercle.rayon << std::endl; 
}
