#include<iostream>
#include<string>
using namespace std;
 class voiture{
     private:
     std::string mar;
     std::string mod;
     int an;
     float km;
     float v;


     public:
         voiture();
         voiture(std::string marque_, std::string modele_,int an_ ,float v_ ,float km_);

         void accelerer ( float valeur);
         void freiner(float valeur );
         void afficherInfo();
         void avancer( float distance);
         ~voiture();

 };
