#include "objet.h"

using namespace std;

    //Seters

    void objet::set_x(float xo) 
        {
        x = xo;
        }

    void objet::set_y(float yo)
        {
            y = yo;
        }

    void objet::set_masse(float mass)
        {
            masse = mass;
        }

    void objet::set_nom(string name)
        {
            nom = name;
        }

    void objet::set_forme(geometrie form)
        {
            forme = form;
        }   

    //Geters

    float objet::get_x()
        {
            return x;
        }
    
    float objet::get_y()
       {
            return y;
        }
    
    float objet::get_masse()
        {
            return masse;
        }

    string objet::get_nom()
        {
            return nom;
        }    

    geometrie objet::get_forme()
        {
        return forme;
        }   
    objet::objet(float vx, float vy, float vmasse, string vnom, geometrie vforme): x(vx), y(vy), masse(vmasse), nom(vnom), forme(vforme)
        {
        }

