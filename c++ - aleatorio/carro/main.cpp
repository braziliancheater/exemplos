#include "Carro.cpp"

int main() {

    Carro C1;
    Carro C2("Azul", "Hillux", 4);

    cout<<C2.getNome()<<endl;
    cout<<C2.getCor()<<endl;
    cout<<C2.getNumeroPortas()<<endl;

    cout << "---x---" << endl;

    C2.setNome("Amarok");
    C2.setCor("Branco");
    C2.setNumeroPortas(2);

    cout<<C2.getNome()<<endl;
    cout<<C2.getCor()<<endl;
    cout<<C2.getNumeroPortas()<<endl;

    cout << "---x---" << endl;
    C2.acelerar();
    cout << "---x---" << endl;
    C2.abrirPortas(false); // true para abrir / false para fechar

    return 0;
}
