#include<iostream>
#include<string>
using namespace std;

void convertToRoman(int number) 
{
   string romanCharThousands[4]={"M","MM","MMM","MMMM"};
   string romanChar[3][10] = { {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                               {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                               {"I","II","III","IV","V","VI","VII","VIII","IX"}
                            };
   string romanNumber;
   int n = 0;
   if((0<number)&&(5000>number)){
       n = number/1000;
       if(n){
           romanNumber+=romanCharThousands[n-1];
           number%=1000;
           n=0;
       }
       
       n = number/100;
       if(n){
           romanNumber+=   romanChar[0][n-1];
           number%=100;
           n=0;
       }
       n = number/10;
       if(n){
           romanNumber+=   romanChar[1][n-1];
           number%=10;
           n=0;
       }
       if(number){
           romanNumber+=   romanChar[2][(number-1)];
       }
    cout<< romanNumber;        
   }
}
