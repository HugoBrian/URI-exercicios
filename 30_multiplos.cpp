#include<iostream>

int main(){

int a,b;

std::cin >> a >> b;


if(a == 0)
    std::cout << "Sao Multiplos" << std::endl;
else if(b%a == 0 || a%b == 0)
    std::cout << "Sao Multiplos" << std::endl;
else {
    std::cout << "Nao sao Multiplos" << std::endl;
}

}
