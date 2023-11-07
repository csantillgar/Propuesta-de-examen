// a^2 + b^2 = c^2

#include <iostream>
using namespace std;
int main(){
 for (int a = 1; a < 9; ++a){ // bucle para inicializar a y que su valor se encuentre entre 1 y 8 para no realizar calculos innecesarios
     for (int b = a ; b < 16; ++b){ // bucle para imicializar b y que su valor se encuentre entre a y 15 para no realizar calculos innecesarios
         for (int c = b; c < 20; ++c){ // bucle para inicializar c y que su valor se encuentre entre b y 19 para no realizar calculos innecesarios
             if (a*a + b*b == c*c){
                 cout << a << " " << b << " " << c <<endl;
             }
         }
     }
 }








    return 0;
}