#include <iostream>
using namespace std;

#include "optionM.hpp"

void backMenu(){
    int ch;
    cout << "enter your choice\n";
    cout << "1. back to main menu\n";
    cout << "0. exit\n";
    cin >> ch;
    if(ch == 1){
        optionMenu();
    } else {
        exit(0);
    }
}