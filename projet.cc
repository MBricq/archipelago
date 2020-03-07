#include <iostream>
#include "error.h"
#include "constantes.h"
#include "ville.h"

#include "tools.h"
#include "noeud.h"

using namespace std;

int main(int argc, char* argv[]) {
	
	Noeud n(0, 0, {{5, 0}, 4});
	n.afficher();
	
	if (argc == 2) {
		ville::lecture_fichier(argv[1]);
	}
	
	return 0;
}
