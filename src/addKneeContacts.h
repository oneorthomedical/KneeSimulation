#include "OpenSim/OpenSim.h"

using namespace std;
using namespace OpenSim;
using namespace SimTK;

/* bool LeftOrRight:	true for Left body 
						false for Right body
*/
void addKneeContactGeometries(Model& model, bool LeftOrRight);

void addContactGeometry(Model& model, string bodyName, string objName);

void addEFForce(Model& model, double stiff, double diss, double us, double ud, double uv, bool LeftOrRight);