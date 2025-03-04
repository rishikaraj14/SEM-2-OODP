#include <iostream>
#include <cmath> // Required for round()

int main(){
    double pi=3.14159;
    int approx_pi=round(pi); // Correct rounding

    std::cout<<approx_pi<<std::endl;
    return 0;
}
