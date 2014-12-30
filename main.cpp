#include <iostream>
#include "objet.h"
//SFML
using namespace std;

int main()
{
    geometrie f(1235);
    objet o(1.0,1.0,30.0,"canard",f);
    cout << o.get_nom() << endl;
    return 0;
}

