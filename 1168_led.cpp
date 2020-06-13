// O programa deveria utilizar string para o calculo

#include<iostream>
#include<string>
#include<cmath>

int quant_alg(int n)
{
    if(n == 0)
        return 1;

    int quant = 0;
    while(n>0)
    {
        quant = quant + 1;
        n = n/10;
    }
    return quant;
}

int main()
{

    long int n,v;
    int leds = 0;

    std::cin >> n;

    if(n<1 || n> 1000)
        return 0;


    for(int i=0; i<n; i++)
    {
        std::cin >> v;

        if(v<0 || v > pow(10,100))
            return 0;


        leds = 0;
        int quant = quant_alg(v);

        for(int j=0; j<quant; j++)
        {
            switch(v%10)
            {
            case 0:
                leds = leds + 6;
                v = v/10;
                break;
            case 1:
                leds = leds + 2;
                v = v/10;
                break;
            case 2:
                leds = leds + 5;
                v = v/10;
                break;
            case 3:
                leds = leds + 5;
                v = v/10;
                break;
            case 4:
                leds = leds + 4;
                v = v/10;
                break;
            case 5:
                leds = leds + 5;
                v = v/10;
                break;
            case 6:
                leds = leds + 6;
                v = v/10;
                break;
            case 7:
                leds = leds + 3;
                v = v/10;
                break;
            case 8:
                leds = leds + 7;
                v = v/10;
                break;
            case 9:
                leds = leds + 6;
                v = v/10;
                break;
            }
        }
        std::cout << leds << " leds" << std::endl;
    }
}
