#include<iostream>
#include<iomanip>
#include<cmath>

int main(){

float a,b,c;

std::cin >> a >> b >> c;
std::cout << std::fixed << std::setprecision(1);
if((std::abs(b-c)< a && a < b+c) && (std::abs(a-c)<b && b<a+c) && (std::abs(a-b)<c && c<a+b)){
    std::cout << "Perimetro = " << a+b+c << std::endl;
}
else{
    std::cout << "Area = " << (a+b)*c/2 << std::endl;
}
}
