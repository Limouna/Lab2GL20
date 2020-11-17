#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main()
{
    hash1 HT;
    
    HT.ajouterItem("Hamid", "064132878");
    HT.ajouterItem("Hamza", "074864287");
    HT.ajouterItem("Ikram", "064513287");
    HT.ajouterItem("Ayoub", "054961232");
    HT.ajouterItem("Fatima", "067894315");
    HT.ajouterItem("Ikhlass", "064295432");
    HT.ajouterItem("Ayman", "Bruh 6");

    HT.afficherItem();


    return 0;
}
