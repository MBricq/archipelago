# Definitions de macros

PROGNAME = projet
CXX     = g++
CXXFLAGS = -g -Wall -std=c++11
CXXFILES = $(PROGNAME).cc error.cc ville.cc tools.cc noeud.cc
OFILES = $(CXXFILES:.cc=.o)

# Definition de la premiere regle

prog: $(OFILES)
	$(CXX) $(OFILES) -o $(PROGNAME)

# Definitions de cibles particulieres

depend:
	@echo " *** MISE A JOUR DES DEPENDANCES ***"
	@(sed '/^# DO NOT DELETE THIS LINE/q' Makefile && \
	  $(CXX) -MM $(CXXFLAGS) $(CXXFILES) | \
	  egrep -v "/usr/include" \
	 ) >Makefile.new
	@mv Makefile.new Makefile

clean:
	@echo " *** EFFACE MODULES OBJET ET EXECUTABLE ***"
	@/bin/rm -f *.o *.x *.cc~ *.h~ prog

#
# -- Regles de dependances generees automatiquement
#
# DO NOT DELETE THIS LINE
projet.o: projet.cc error.h constantes.h ville.h
error.o: error.cc error.h constantes.h
ville.o: ville.cc ville.h error.h constantes.h
tools.o: tools.cc tools.h
noeud.o: noeud.cc noeud.h
