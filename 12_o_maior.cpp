#include<iostream>
#include<cmath>

int main(){

int A,B,C,maiorAB;

std::cin >> A;
std::cin >> B;
std::cin >> C;

maiorAB = (A+B+std::abs(A-B))/2;

std::cout << (maiorAB+C+std::abs(maiorAB-C))/2 << " eh o maior" << std::endl;

}
