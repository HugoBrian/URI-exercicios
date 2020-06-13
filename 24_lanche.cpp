#include<iostream>
#include<iomanip>

int main(){

int cod,quant;

float tab[5] = {4.00,4.50,5.00,2.00,1.50};

std::cin >> cod >> quant;

std::cout << std::fixed << std::setprecision(2);

std::cout << "Total: R$ " << tab[cod-1]*quant << std::endl;


}
