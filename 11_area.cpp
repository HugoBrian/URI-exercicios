#include<iostream>
#include<iomanip>

int main(){

double A,B,C,pi;
pi = 3.14159;

std::cin >> A;
std::cin >> B;
std::cin >> C;

std::cout<< std::setprecision(3)<< std::fixed;

std::cout << "TRIANGULO: "<< A*C/2 << std::endl;
std::cout << "CIRCULO: "<< pi*(C*C) << std::endl;
std::cout << "TRAPEZIO: "<< ((A+B)*C)/2 << std::endl;
std::cout << "QUADRADO: "<< B*B << std::endl;
std::cout << "RETANGULO: "<< A*B << std::endl;

}
