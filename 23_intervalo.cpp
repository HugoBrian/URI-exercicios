#include<iostream>

int main(){

float n;

std::cin >> n;

if(n>=0.0 && n<=25.0)
    std::cout<< "Intervalo [0,25]" << std::endl;
else if(n>25.0 && n<=50.0)
    std::cout<< "Intervalo (25,50]" << std::endl;
else if(n>50.0 && n<=75.0)
    std::cout<< "Intervalo (50,75]" << std::endl;
else if(n>75.0 && n<=100.0)
    std::cout<< "Intervalo (75,100]" << std::endl;
else
    std::cout<< "Fora de intervalo" << std::endl;

}
