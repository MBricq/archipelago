#ifndef NOEUD_HEADER_H
#define NOEUD_HEADER_H

#include <vector>

class Noeud {
private:
	const double uid; 
	double nbp;
	Cercle cercle;
	std::vector<Noeud const*> liens;
	
	void gere_erreurs();
	
public:
	Noeud(double uid_, double nbp_, Cercle c);

	void afficher();
};

#endif // NOEUD_HEADER_H
