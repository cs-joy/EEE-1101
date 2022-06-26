#include <iostream>
using namespace std;

#include "series.hpp"
#include "parallel.hpp"

void optionMenu(){
    int like;
    cout << "|-----------\n";
    cout << "|-Choose one option for calculation: \n";
    cout << "|-----------\n";
    cout << "1. Series Circuit\n";
    cout << "2. Parallel Circuit\n";
    cout << "3. Exit\n\n";

    cin >> like;
    if (like == 1)
        {
            Series();
        }
        else if (like == 2)
        {
            Parallel();
        }
        else
        {
            exit(0);
        }
}