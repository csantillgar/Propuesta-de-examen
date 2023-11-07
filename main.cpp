// a^2 + b^2 = c^2

#include <iostream>
using namespace std;
int main(){
 for (int a = 1; a < 9; ++a){
     for (int b = a ; b < 16; ++b){
         for (int c = b; c < 20; ++c){
             if (a*a + b*b == c*c){
                 cout << a << " " << b << " " << c <<endl;
             }
         }
     }
 }








    return 0;
}