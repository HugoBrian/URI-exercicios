#include<iostream>
#include<string>

using namespace std;

int main(){
    string  palavra1,palavra2,palavra3;
    int casos,tam_menor,tam_maior;

    cin >> casos;

    for(int i=0; i<casos ; i++){
        cin >> palavra1 >> palavra2;

        if(palavra1.size()<palavra2.size()){
            tam_menor = palavra1.size();
            tam_maior = palavra2.size();
            palavra3 = palavra2;
        }
        else{
            tam_menor = palavra2.size();
            tam_maior = palavra1.size();
            palavra3 = palavra1;
        }

        for(int j=0; j<tam_menor; j++){
            cout << palavra1[j] << palavra2[j];
        }

        for(int k=tam_menor; k<tam_maior; k++){
        cout << palavra3[k];
        }
        cout << endl;
    }



}
