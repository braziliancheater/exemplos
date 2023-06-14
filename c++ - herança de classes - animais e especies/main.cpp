#include "includes.hpp"

#include "animal/animal.hpp"
#include "especies/reptil/reptil.hpp"
#include "especies/mamifero/mamifero.hpp"

int main()
{
    Animal anim("Animal de teste");
    Animal anim2("Animal de testes 2", "Mamifero 2.0", 3);

    cout << "O primeiro animal e " << anim.getNome() << endl;
    cout << "O segundo animal tem o nome de " << anim2.getNome() << endl;

    cout << "*********" << endl;

    Mamifero mam;
    Mamifero mam2("Cachorro");

    mam.setNome("Mamifero de testes");
    cout << "O primeiro animal mamifero e " << mam.getNome() << endl;
    cout << "O segundo animal mamifero e " << mam2.getNome() << endl;

    cout << "*********" << endl;
    Reptil rep;
    Reptil rep2("Lagarto de Komodo");
  
    rep.setNome("Reptil de testes");
    cout << "O primeiro animal reptil e " << rep.getNome() << endl;
    cout << "O segundo animal reptil e " << rep2.getNome() << endl;

    return 0;
}