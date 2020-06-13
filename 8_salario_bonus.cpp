#include<iostream>
#include<iomanip>
#include<string>

int main(){

std::string nome;
double salario,vendas;

std::cin>> nome;
std::cin>> salario;
std::cin>> vendas;
std::cout<<std::fixed<<std::setprecision(2);
std::cout<< "TOTAL = R$ " << salario+0.15*vendas << std::endl;

}
