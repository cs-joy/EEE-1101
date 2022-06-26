#include <iostream>
using namespace std;

#include "backM.hpp"

void Parallel(){
    int loop;
    float R[50], result(0), parallel;
    
    cout << "-----------------\n";
    cout << "Parallel Circuit\n";
    cout << "-----------------\n";

    cout << "How much resistance available in your circuit?\n";
    cin >> loop;

    cout << "Value of Resitances" << endl;
    
    for(int i = 1; i <= loop; i++){
        cout << "Resistance 1 / R[" << i << "]= ";
        cin >> R[i];
        result += 1 / R[i];
    }

    parallel = 1 / result;

    cout << "Total Resistance of your circuit= " << parallel << endl;
    backMenu();
}