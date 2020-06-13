#include<iostream>
#include<iomanip>

int main(){

double pi, R;
pi = 3.14159;

std::cin >> R;
std::cout<< std::setprecision(3)<< std::fixed;
std::cout << "VOLUME = "<< (4.0/3.0)*pi*(R*R*R) << std::endl;

}
