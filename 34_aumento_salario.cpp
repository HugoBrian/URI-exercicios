#include<iostream>
#include<iomanip>

int main(){

float salario, percentual, nv_salario;

std::cin >> salario;

if(salario <= 400.0){
    nv_salario = salario*1.15;
    percentual = 15;
}

else if(salario <= 800.0){
    nv_salario = salario*1.12;
    percentual = 12;
}

else if(salario <= 1200.0){
    nv_salario = salario*1.1;
    percentual = 10;
}

else if(salario <= 2000.0){
    nv_salario = salario*1.07;
    percentual = 7;
}

else if(salario > 2000.0){
    nv_salario = salario*1.04;
    percentual = 4;
}

std::cout << std::fixed << std::setprecision(2);
std::cout << "Novo salario: " << nv_salario << std::endl;
std::cout << "Reajuste ganho: " << nv_salario - salario << std::endl;
std::cout << "Em percentual: " << std::setprecision(0) <<percentual << " %"<< std::endl;


}
