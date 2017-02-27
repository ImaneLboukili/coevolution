//==============================
//    INCLUDES
//==============================

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using namespace std;

#include "Environnement.h"
#include "Case.h"
#include "Cell.h"
#include "CellA.h"
#include "CellB.h"

//==============================
//    FUNCTION DeCLARATION
//==============================

//==============================
//    MAIN
//==============================

int main(int argc, char const *argv[])
{   
	Environnement env = Environnement();
	CellA c = CellA();
	char d = 'a' ; 
	vector <float> organites = {0.3,1.2,2.5};
	Case cas = Case(organites, d);
	Cell* ce = new CellA();
  return 0;
}
