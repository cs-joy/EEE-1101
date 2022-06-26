#include <iostream>
using namespace std;

#include "parallel.hpp"
#include "series.hpp"

int main(){

    int like;

    cout << "Choose one option for calculation: \n";
    cout << "1. Series Circuit\n";
    cout << "2. Parallel Circuit\n";

    cin >> like;

    if(like == 1){
        Series();
    } else {
        Parallel();
    }
    return 0;
}