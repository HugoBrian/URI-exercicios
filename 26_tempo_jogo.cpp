#include<iostream>

int main(){

int horaIni, minIni, horaFim, minFim, duracao;

std::cin >> horaIni >> minIni >> horaFim >> minFim;


if(horaFim <= horaIni && minFim<=minIni){
    duracao = (24 + horaFim - horaIni)*60;
    duracao = duracao + (minFim - minIni);
}
if(horaFim <= horaIni && minFim>minIni){
    duracao = (24 + horaFim - horaIni)*60;
    duracao = duracao + (minIni - minFim);
}
if(horaFim > horaIni){
    duracao = (horaFim - horaIni)*60;
    duracao = duracao + (minFim - minIni);
}

if(horaFim == horaIni && minFim>minIni){
    duracao = (horaFim - horaIni)*60;
    duracao = duracao + (minFim - minIni);
}

if(horaFim == horaIni && minFim==minIni){
    duracao = 24*60;
}


if(horaIni>23 ||horaFim>23 ||minIni>59 ||minFim>59 ){
    return 0;
}

if((horaFim == 0 && horaIni == 0 && minFim == 0 && minIni == 0) || duracao/60 > 24 ){
    return 0;
}

std::cout << "O JOGO DUROU " << duracao/60 << " HORA(S) E " << duracao - (duracao/60)*60 << " MINUTO(S)"<< std::endl;

}
