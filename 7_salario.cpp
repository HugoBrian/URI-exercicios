#include<iostream>
#include<iomanip>

int main(){
int numero,horas;
double valorhora;

std::cin>> numero;
std::cin>> horas;
std::cin>> valorhora;
std::cout<<std::fixed<<std::setprecision(2);
std::cout<< "NUMBER = " << numero<< std::endl;
std::cout<< "SALARY = U$ " << horas*valorhora<< std::endl;

}
