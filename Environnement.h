#ifndef ENVIRONNEMENT_H
#define ENVIRONNEMENT_H 

//==============================
//    INCLUDES
//==============================

/**
 * @class Environnement
 * @brief Creates an environnement
 */

class Environnement
{
public:
//==============================
//    CONSTRUCTORS
//==============================
 Environnement();
 Environnement(float Ainit,int T,float D);
 
//==============================
//    DESTRUCTOR
//==============================
  
//==============================
//    GETTERS
//==============================
 
//==============================
//    SETTERS
//==============================

//==============================
//    OPERATORS
//==============================
  
//==============================
//    PUBLIC METHODS
//==============================
  
protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
float Ainit_;
int W_; //width
int H_; //height
int T_ ;
float D_; //diffusion



};
//==============================
//    GETTER DEFINITION
//==============================


//==============================
//    SETTER DEFINITION
//==============================

//==============================
//    OPERATOR DEFINITION
//==============================


#endif // ENVIRONNEMENT_H

