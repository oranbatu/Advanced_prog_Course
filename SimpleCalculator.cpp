#include <iostream>
using namespace std;

double sum(int a, int b){
    return a + b;
}

double abstract (int a , int b){
    return a - b;
}

double multiply(int a, int b){
    if (a == 0 || b == 0){
        return 0;
    }
    else {
        return a * b;
    }
}
