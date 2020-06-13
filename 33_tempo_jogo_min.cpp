
#include<iostream>

int main(){

int horaIni, minIni, horaFim, minFim, duracao;

std::cin >> horaIni >> minIni >> horaFim >> minFim;

if(horaIni>23 || horaFim>23 || minIni>59 || minFim>59 || horaIni<0 || horaFim<0 || minIni<0 || minFim<0 ){
    return 0;
}

if(horaFim < horaIni)
    horaFim = horaFim + 24;
if(horaFim == horaIni && minFim == minIni)
    horaFim = horaFim + 24;
if(horaFim == horaIni && minFim < minIni)
    horaFim = horaFim + 24;



duracao = (horaFim - horaIni)*60;
duracao = duracao + (minFim - minIni);

std::cout << "O JOGO DUROU " << duracao/60 << " HORA(S) E " << duracao - (duracao/60)*60 << " MINUTO(S)"<< std::endl;

}
