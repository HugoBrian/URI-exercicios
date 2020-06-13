#include<iostream>
#include<string>

int main(){

    int n;

    std::cin >> n;
    std::cin.ignore();
    for(int i=0; i<n ; i++){
        std::string palavra;
        std::string palavra_inv;

        std::getline(std::cin, palavra);
        int k = palavra.length();
        for(int j=0; j<k; j++){
            if(j < k/2)
                palavra_inv.push_back(palavra[k/2-j-1]);
        }
        for(int l=0; l<k; l++){
            if(l < k/2)
                palavra_inv.push_back(palavra[k-l-1]);
        }
        std::cout << palavra_inv << std::endl;
    }

}
