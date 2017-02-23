//==============================
//    INCLUDES
//==============================
#include "Environnement.h"
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
}

Environnement::Environnement(float Ainit,int T,float D){
	Ainit_ = Ainit;
	W_ = 32; 
	H_ = 32; 
	T_ = T;
	D_ = D;
}
//==============================
//    DESTRUCTOR
//==============================


//==============================
//    PUBLIC METHODS
//==============================

