#include<iostream>
#include<iomanip>
#include<cmath>

int main(){

float x1,y1,x2,y2;

std::cin >> x1;
std::cin >> y1;
std::cin >> x2;
std::cin >> y2;

std::cout << std::fixed << std::setprecision(4);

std::cout << sqrt(pow(x2-x1,2)+pow(y2-y1,2)) << std::endl;

}
