#include<iostream>

int main(){

int n,h,m;

std::cin >> n;

h=n/3600;
n=n-(n/3600)*3600;
m=n/60;
n=n-(n/60)*60;


std::cout << h << ":"<< m << ":" << n << std::endl;

}
