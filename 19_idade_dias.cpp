#include<iostream>

int main(){

int dias, meses, anos;

std::cin >> dias;

anos = dias/365;
dias = dias - (dias/365)*365;

meses = dias/30;
dias = dias - (dias/30)*30;

std::cout << anos << " ano(s)" << std::endl;
std::cout << meses << " mes(es)" << std::endl;
std::cout << dias << " dia(s)" << std::endl;

}
