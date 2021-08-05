#include "iostream"
#include <vector>
#include "math.h"
using namespace std;




int main(){
    long int n = 10086647; //number
    int b = 3175+1; //square
    for(int i = 1; i < b; i++){
        if(n % i == 0){
            std::cout << i << endl; //show divisors and get new number and square
        }
    }

    return 0;
}

//71,839,1471,6857
