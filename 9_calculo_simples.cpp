#include<iostream>
#include<iomanip>

int main(){
int cod1,num1,cod2,num2;
double valor1,valor2;

std::cin>> cod1;
std::cin>> num1;
std::cin>> valor1;
std::cin>> cod2;
std::cin>> num2;
std::cin>> valor2;

std::cout<<std::fixed<<std::setprecision(2);
std::cout<< "VALOR A PAGAR: R$ " << num1*valor1+num2*valor2 << std::endl;

}
