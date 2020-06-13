#include<iostream>
#include<iomanip>

int main(){

float n1,n2,n3,n4,media,Nexame,Mfinal;

std::cin >> n1 >> n2 >> n3 >> n4;

media = (2*n1+3*n2+4*n3+n4)/10;

std::cout<< std::fixed << std::setprecision(1);
std::cout<< "Media: " << media << std::endl;

if(media>= 7.0)
    std::cout << "Aluno aprovado." << std::endl;
else if(media<5.0)
    std::cout << "Aluno reprovado." << std::endl;
else{
    std::cout << "Aluno em exame." << std::endl;
    std::cin >> Nexame;
    std::cout << "Nota do exame: " << Nexame << std::endl;

    Mfinal = (Nexame+media)/2;

    if(Mfinal>= 5.0)
    std::cout << "Aluno aprovado." << std::endl;
    else{
    std::cout << "Aluno reprovado." << std::endl;
    }
    std::cout << "Media final: " << Mfinal << std::endl;


}



}
