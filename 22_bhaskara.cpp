#include<iostream>
#include<iomanip>
#include<cmath>

int main(){

double a,b,c,delta;

std::cin>> a >> b >> c;

delta = pow(b,2)-4*a*c;

if(delta<0 || a == 0){std::cout << "Impossivel calcular" << std::endl;
    return 0;
}

std::cout << std::fixed << std::setprecision(5);
std::cout << "R1 = " << (-b+sqrt(delta))/(2*a) << std::endl;
std::cout << "R2 = " << (-b-sqrt(delta))/(2*a) << std::endl;

}
