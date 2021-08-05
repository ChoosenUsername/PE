#include "iostream"
#include <vector>
#include "math.h"
using namespace std;

int main(){

float phi1 = (1+sqrt(5))/2;
float phi2 = (1-sqrt(5))/2;

auto F_n = (pow(phi1, 33) - pow(phi2, 33))/sqrt(5);

cout << F_n << endl;

int current_value = 3;
int prev_value = 2;

int sum = 0;
while (current_value < 4000000)
{
    int temp = current_value;
    current_value += prev_value;

    if(current_value % 2 == 0){
        sum += current_value;
    }

    prev_value = temp;
    std::cout << current_value << endl;
}
std::cout << sum + 2 << endl;


}
