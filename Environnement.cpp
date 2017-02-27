//==============================
//    INCLUDES
//==============================
#include "Environnement.h"
#include "Case.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================
Environnement::Environnement(){
	Ainit_ = 30;
	W_ = 32; 
	H_ = 32; 
	T_ = 1000;
	D_ = 0.1;
	grille  = new Case* [H_];
	for(int i=0; i<H_;i++){
		grille[i] = new Case[W_];
	}
}
//==============================
//    DESTRUCTOR
//==============================


//==============================
//    PUBLIC METHODS
//==============================

