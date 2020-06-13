#include<iostream>

int main(){

int n,N;

std::cin >> n;

if( n>0 && n<=1000000){
    N=n;
}else{
    std::cout<< " valor incorreto";
    return 0;
}
std::cout<< N <<std::endl;
if(N>=100){
    std::cout << N/100<< " nota(s) de R$ 100,00" << std::endl;
    N=N-(N/100)*100;
}else{std::cout<< "0 nota(s) de R$ 100,00"  <<std::endl;}
if(N>=50){
    std::cout << N/50<< " nota(s) de R$ 50,00" << std::endl;
    N=N-(N/50)*50;
}else{std::cout<< "0 nota(s) de R$ 50,00"  <<std::endl;}
if(N>=20){
    std::cout << N/20<< " nota(s) de R$ 20,00" << std::endl;
    N=N-(N/20)*20;
}else{std::cout<< "0 nota(s) de R$ 20,00"  <<std::endl;}
if(N>=10){
    std::cout << N/10<< " nota(s) de R$ 10,00" << std::endl;
    N=N-(N/10)*10;
}else{std::cout<< "0 nota(s) de R$ 10,00"  <<std::endl;}
if(N>=5){
    std::cout << N/5<< " nota(s) de R$ 5,00" << std::endl;
    N=N-(N/5)*5;
}else{std::cout<< "0 nota(s) de R$ 5,00"  <<std::endl;}
if(N>=2){
    std::cout << N/2<< " nota(s) de R$ 2,00" << std::endl;
    N=N-(N/2)*2;
}else{std::cout<< "0 nota(s) de R$ 2,00"  <<std::endl;}
if(N>=1){
    std::cout << N/1<< " nota(s) de R$ 1,00" << std::endl;
    N=N-(N/1)*1;
}else{std::cout<< "0 nota(s) de R$ 1,00"  <<std::endl;}


}

