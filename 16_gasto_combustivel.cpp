#include<iostream>
#include<iomanip>

int main(){

int X,Y;

std::cin >> X;
std::cin >> Y;

std::cout << std::fixed << std::setprecision(3);

std::cout << (Y/12.0)*X << std::endl;

}
