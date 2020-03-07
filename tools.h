#ifndef TOOLS_HEADER_H
#define TOOLS_HEADER_H

struct S2d {
	double x;
	double y;
};

struct Cercle {
	S2d centre;
	double rayon;
};

struct Segment {
	S2d pointDep;
	S2d pointArr;
};

namespace tools
{
	bool testInterCercles (Cercle c1, Cercle c2);
	bool testInterCerSeg (Cercle c, Segment s);
}

#endif // TOOLS_HEADER_H
