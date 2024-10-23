#include"voiture.h"

using namespace std;

int main()
{
    voiture v1;
    v1.afficherInfo();
    cout<<endl;

    voiture v2("Porsche", "Taycan", 2024, 15000, 0);
    v2.afficherInfo();
    cout<<endl;

    v2.accelerer(60);
    v2.freiner(40);
    v2.avancer(120);

 return 0;
}
