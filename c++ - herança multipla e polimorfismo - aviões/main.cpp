#include "includes.hpp"

#include "aeronave/aeronave.hpp"
#include "aviao_a_jato/aviao_a_jato.hpp"
#include "aviao_monomotor/aviao_monomotor.hpp"

int main()
{
	aviao_a_jato av1("747", 4);

	cout << av1.getMarca() << endl;
}
