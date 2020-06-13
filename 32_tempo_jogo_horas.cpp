#include<iostream>

int main(){

int horaIni, horaFim, duracao;

std::cin >> horaIni >> horaFim;




if(horaFim < horaIni)
    horaFim = horaFim + 24;

duracao = horaFim - horaIni;

if(duracao == 0)
    duracao = 24;

std::cout << "O JOGO DUROU " << duracao << " HORA(S)" << std::endl;

}
