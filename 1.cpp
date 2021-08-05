#include "iostream"
#include <vector>
#include "math.h"
using namespace std;

//decomposition for 3 digit number
vector<int> decomposition(int N){
    int n1 = (int)ceil(N/100);
    int n2 = (int)ceil((N - n1*100)/10);
    int n3 = (int)ceil(N - n1*100 - n2*10);
    return {n1,n2,n3};
}


int main(){

    int counter = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            counter += i;
            std::cout << i << endl;
        }
    }    
    std::cout << "method1: " << counter << endl;



   

    //inclusion–exclusion principle
    //arithmetic progression
   
    int N1 = 333;
    int N2 = 199;
    int N3 = 66;

    uint progression1 = N1*(3 + 999) >> 1;
    uint progression2 = N2*(5 + 995) >> 1;
    uint progression3 = N3*(15 + 990) >> 1;
    std::cout << "method2: " << progression1 + progression2 - progression3 << endl;
    
    counter = 0;
    for(int i = 1; i < 1000; i++) {
        auto d = decomposition(i);
        if ((d[0] + d[1] + d[2]) % 3 == 0 || d[2] == 0 || d[2] == 5){
            counter += i;
        }
    }
    std::cout<< "method3: " << counter << endl;

}
