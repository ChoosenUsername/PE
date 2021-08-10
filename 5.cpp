#include "iostream"
#include <vector>
#include "math.h"
using namespace std;
#include <algorithm>
#include <string>


bool check(long long int n){
    if (n % 1 == 0 && n % 2 == 0 && n%3 == 0 && n % 4 ==0 && n % 5 == 0 && n % 6 == 0 && n % 7 == 0 && n % 8 == 0 && n % 9 == 0 && n % 10 == 0 &&
    n % 11 == 0 && n % 12 == 0 && n % 13 == 0 && n % 14 == 0 && n % 15 == 0 && n % 16 == 0 && n % 17 == 0 && n % 18 == 0 && n % 19 == 0 && n % 20 == 0) {
        return true;
    } else {
        return false;
    }
}

long long int factorial(long long int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main(){

    long long int n = factorial(20);
    for (long long int i = 1; i < n; i++) {
        if(check(i)){
            std::cout << i << endl;
            break;
        }
    }

}
