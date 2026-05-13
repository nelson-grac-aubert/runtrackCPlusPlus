#include "../include/job05.hpp"

bool isTheRightSize(string hour) {

    if (hour.length() != 5) {
        cout << "The string is not 5 characters long, we won't even parse it" << endl;
        return false;
    }

    return true;

}

bool hasTheH(string hour) {

    if (!(hour[2] == 'h' || hour[2] == 'H' || hour[2] == ':')) {
        cout << "The separator character is incorrect" << endl;
        return false;
    }

    return true;

}

bool isADigit(char c) {
    if (('0' <= c && c <= '9')) {
        return true;
    }
    return false;
}

bool hasFourDigits(string hour) {
    if (!(isADigit(hour[0]) && isADigit(hour[1]) && isADigit(hour[3]) && isADigit(hour[4]))) {
        cout << "Non-digits character(s) found where digits should be" << endl; 
        return false;
    }

    return true;
}

bool hasCorrectDigits(string hour) { 

    string hoursStr = hour.substr(0,2);
    string minsStr = hour.substr(3,2); 
    int hours = stoi(hoursStr);
    int mins = stoi(minsStr);

    if (!(0 <= hours && hours <= 24)) {
        cout << "Format error on hours digits" << endl;
        return false;
    }
    if (!(0 <= mins && mins <= 60)) {
        cout << "Format error on minutes digits" << endl;
        return false;
    }

    return true;

}

bool isGoodFormat(string hour) {
    
    if (!isTheRightSize(hour)) {
        return false; 
    }

    if (!hasTheH(hour)) {
        return false;
    }

    if (!hasFourDigits(hour)) {
        return false;
    }

    if (!hasCorrectDigits(hour)) {
        return false;
    }

    cout << "The hour has the right format" << endl;
    return true; 
}

int main() {

    isGoodFormat("Hello, wrong format!");
    isGoodFormat("12H44");
    isGoodFormat("12h44");
    isGoodFormat("12:44");
    isGoodFormat("12a44");
    isGoodFormat("14673H0");
    isGoodFormat("25H12");
    isGoodFormat("2aH12");
    isGoodFormat("12H99");
    isGoodFormat("12Hb9");
    return 0; 
}