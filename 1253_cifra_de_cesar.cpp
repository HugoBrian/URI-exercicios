#include<iostream>
#include<string>

int main(){

    int n;

    std::cin >> n;
    std::cin.ignore();

    for(int i=0; i<n ; i++){

        std::string p;
        int pos;
        std::getline(std::cin, p);
        std::cin>> pos;

        for(int j=0; j<p.length(); j++){
            if( ((int)p[j] -pos) >= 65 && ((int)p[j] -pos) <= 90)
                std::cout << char((int)p[j] -pos);
            else {
                std::cout << char((int)p[j] -pos +26);
            }

        }
        std::cout << std::endl;
        std::cin.ignore();
    }

}

