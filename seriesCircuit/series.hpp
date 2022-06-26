#include <iostream>
using namespace std;

void Series(){
    int loop;
    float R[50], result(0);

    cout << "How much resistance available in your circuit?";
    cin >> loop;

    cout << "Value of Resitances" << endl;
    
    for(int i = 1; i <= loop; i++){
        cout << "Resistance R[" << i << "]= ";
        cin >> R[i];
        result += R[i];
    }

    cout << "Total Resistance of your circuit= " << result;
}