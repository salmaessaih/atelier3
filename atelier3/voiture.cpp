#include"voiture.h"

voiture ::voiture():mar("inconnue"),mod("inconnu"),an(0),v(0),km(0)
{
}

voiture::voiture(std::string marque_, std::string modele_ ,int an_ ,float km_,float v_):mar(marque_),mod(modele_),an(an_),v(v_),km(km_){}


void voiture::accelerer(float valeur)
{
    v=v+valeur;
}

void voiture::freiner(float valeur)
{
    if(v<valeur)
        v=0;
    else
        v=v-valeur;
}

void voiture::afficherInfo()
{
   cout <<"marque: "<<mar<<endl;
   cout<<"modele : "<<mod<<endl;
   cout <<"annee : "<<an<<endl;
   cout <<"kilometrage : "<<km<<endl;
   cout <<"vitesse : "<<v<<endl;

}


void voiture::avancer(float distance)
{
    km=km+ distance;
}
 voiture::~voiture()
{
    cout<<"la voiture est detruite"<<endl;
}




