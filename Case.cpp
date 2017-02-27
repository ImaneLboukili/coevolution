//==============================
//    INCLUDES
//==============================
#include "Case.h"
#include "Cell.h"
#include "CellA.h"
#include "CellB.h"
#include <cstdio>
#include <cstdlib>
#include <vector>
//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Case::Case(){
	organites_= {0.,0.,0.};
	
	
}
Case::Case(vector <float> organites, char c){
  if (c=='a'){
    cell_ = new CellA();}
  if (c=='b'){
    cell_ = new CellB();}
  organites_ = {organites[0], organites[1], organites[2]};
}

//==============================
//    DESTRUCTOR
//==============================

//Case::~Case(){}

//==============================
//    PUBLIC METHODS
//==============================
