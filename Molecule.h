/*
 * Molecule.h
 *
 *  Created on: Aug 10, 2017
 *      Author: Compbio
 */

#ifndef MOLECULE_H_
#define MOLECULE_H_

#include <vector>
#include "coordinates.h"

using namespace std;

typedef double Real;

namespace Molecule {

	class aGaussian {
		aGaussian();
		aGaussian(Real sigma, Real Rvdw, coord3D center);
	};
}



#endif /* MOLECULE_H_ */
