#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Pessoa
{
	string nome;
	int idade;
    int peso;
	
}Pessoa;

bool compare(Pessoa a, Pessoa b){
	if(a.idade < b.idade)
		return 1;
	else 
		return 0;
}

int main()
{
	int i,n;
	cout << "Quantos pessoas deseja cadastrar? : ";   
	cin >> n; 
	
	Pessoa pessoa_array[n];
	
	cout << "Insira o nome, idade e peso da pessoa\n\n";
	for(i = 0; i < n; i++) {  
        cout << "_______\n" << endl; 
		cin >> pessoa_array[i].nome;
		cin >> pessoa_array[i].idade;
		cin >> pessoa_array[i].peso;
	}
	
	sort(pessoa_array, pessoa_array + n, compare);

	cout<<"\nQuem e o mais gordinho? :\n";
	for(i = 0; i < n ; i++){
		cout << pessoa_array[i].nome <<"   " ;
		cout << pessoa_array[i].idade << "  ";
		cout << pessoa_array[i].peso << endl;
	}
}