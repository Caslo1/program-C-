#include <iostream>
#include "Character.h"
#include <cstring>

using namespace std;

int main()
{
    Character<string> FirstPerson("Caslo", "21", "Shaman");
    
    FirstPerson.GetCharacter;

    FirstPerson.Print();

    Character<string>::GetCharacter(FirstPerson, "Third", "40", "Rouge");

    FirstPerson.Print();

}
