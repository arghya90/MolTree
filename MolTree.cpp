//============================================================================
// Name        : MolTree.cpp
// Author      : Argo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Use		:    It creates a tree for the input structures (PDb/PQR) file
//============================================================================

#include <iostream>
#include "Molecule.h"
#include "coordinates.h"

using namespace std;

int main() {
	Real xyz1[3] = { 9.0, 4.4, -5.0 };
	coord3D * r1 = new coord3D(xyz1);
	r1->printCoordinates();
	return 0;
}

