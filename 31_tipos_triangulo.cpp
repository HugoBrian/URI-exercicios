#include<iostream>

void troca(float &x, float &y){
int aux;
if(x<y){
    aux=x;
    x=y;
    y=aux;
}
}

int main(){

float a,b,c;

std::cin >> a >> b >> c;

if(a<=0 || b<=0 || c<=0)
    return 0;

troca(a,b);
troca(b,c);
troca(a,b);

if(a>=b+c){
    std::cout << "NAO FORMA TRIANGULO" << std::endl;
    return 0;
    }
if((a*a) == (b*b)+(c*c))
    std::cout << "TRIANGULO RETANGULO" << std::endl;
if((a*a) > (b*b)+(c*c))
    std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
if((a*a) < (b*b)+(c*c))
    std::cout << "TRIANGULO ACUTANGULO" << std::endl;


if(a == b && b == c){
    std::cout << "TRIANGULO EQUILATERO" << std::endl;
    return 0;
}
if(a == b || b == c || a == c ){
    std::cout << "TRIANGULO ISOSCELES" << std::endl;
}
}
