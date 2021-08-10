#include "iostream"
#include <vector>
#include "math.h"
using namespace std;
#include <algorithm>
#include <string>

int main(){
    std::vector<int> top;
    for(int i = 999; i > 100; i--){
        for(int j = 999; j > 100; j--){
            int n = i*j;
            string a = std::to_string(n);
            if(a.front() == a.back() && a[1] == a[a.length() - 2]){
                top.push_back(n);
            }
        }
    }

    for(int i = 0; i < 50; i++){

        auto it = max_element(std::begin(top), std::end(top)); // C++11
        std::cout << *it << endl;
        top.erase(it);
    }


}

