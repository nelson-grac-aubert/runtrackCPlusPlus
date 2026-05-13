#include "../include/job05.hpp"

bool isGoodFormat(string hour) { 
    return false; 
}

int main() {

    isGoodFormat("Hello, wrong format!");
    isGoodFormat("12H44");
    isGoodFormat("14673H0");
    isGoodFormat("25H12");
    isGoodFormat("12H99");
    return 0; 
}