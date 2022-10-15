#include <iostream>
#include <fstream>      // std::ifstream monfichier;

int main (int argc, char *argv[],ios char**) 
{
    std::ifstream fichier;
    char caractere;
    char chaine[255];
    int i,u,p,j,s;
    float	tension, courant;

    if (argc <2)
    {
        std::cerr << "lecture_fichier fichier.txt" << std::endl;
        exit(1);
    }
    fichier.open(argv[1], std::ios::in);     // ouverture en lecture seul
    if (fichier.is_open()==false)             // verification que le fichier est bien ouvert
    {
        std::cerr << "Probleme d'ouverture du fichier : " << argv[1] << std::endl;
        std::cerr << " - fichier absent" << std::endl;
        std::cerr << " - erreur de nom de fichier" << std::endl;
        std::cerr << " - vous n'avez pas les droits d'acces" << std::endl;

        exit(2);
    }
    while(fichier.eof()==false )    // tant qu'on peut lire un caractere
    {
        fichier >> tension >> courant;      // lecture d'une acquisition et sauvegarde dans ds variables temporaires
p=u*i;
s=1;
j=p*s;

	
	
        std::cout << "U : " << tension << "V\tI : " << courant <<"V\tP:"<< p <<"V\tW:"<< j << std::endl;    // affichage des valeurs sur la sortie standards
       
    }
    fichier.close();                 // fermeture du fichier
    return 0;
}
