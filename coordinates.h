/*
 * coordinates.h
 *
 *  Created on: Aug 10, 2017
 *      Author: Compbio
 */

#ifndef COORDINATES_H_
#define COORDINATES_H_

#include <cmath>
#include <vector>

typedef double Real;


using namespace std;

class coord3D {
	Real x, y, z;
	Real xyz[3];

public:
	coord3D() {
		x = y = z = 0.f;
		toArray();
	}//constr

	coord3D (vector<Real> &xyz) {
		if ( xyz.size() != 3 ) cerr << "1 - Bad input for Coordinates" << endl;
		vector<Real>::iterator it = xyz.begin();
		x = *it;
		y = *(it++);
		z = *(it++);
		toArray();
	}//constr

	coord3D (Real * xyz) {
		if ( (sizeof(xyz)/sizeof(Real)) != 3 ) cerr << "2 - Bad input for Coordinates" << endl;
		x = xyz[0];
		y = xyz[1];
		z = xyz[2];
		toArray();
	}//constr

	void toArray() {
		xyz[0] = x; xyz[1] = y; xyz[2] = z;
	}//toArray

	void printCoordinates () {
		cout << sizeof(xyz)/sizeof(Real) << endl;
		for (int i = 0; i < 3; ++i) {
			cout << xyz[i] << "   ";
		}
		cout << endl;
	}//printcoordiantes


};



#endif /* COORDINATES_H_ */
