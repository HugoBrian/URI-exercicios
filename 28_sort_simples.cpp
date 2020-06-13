#include<iostream>

void troca(int &x, int &y){
int aux;
if(x>y){
    aux=x;
    x=y;
    y=aux;
}
}

int main(){

int a,b,c,d,e,f;

std::cin >> a >> b >> c;

d=a;
e=b;
f=c;

troca(a,b);
troca(b,c);
troca(a,b);

std::cout << a << std::endl << b << std::endl << c << std::endl << std::endl;
std::cout << d << std::endl << e << std::endl << f << std::endl;
}
