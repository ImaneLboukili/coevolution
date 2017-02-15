//==============================
//    INCLUDES
//==============================
#include "Case.h"
#include "Cell.h"
#include "CellA.h"
#include "CellB.h"
#include <cstdio>
#include <cstdlib>
//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================

Case::Case(vector <float> organites, char c){
  if (c=='a'){
    *cell_ = new cellA();}
  if (c=='b'){
    *cell_ = new cellB();}
  organites_ = {organites[0], organites[1], organites[2]}
  }

//==============================
//    DESTRUCTOR
//==============================

//Case::~Case(){}

//==============================
//    PUBLIC METHODS
//==============================
