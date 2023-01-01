// Not an optimized solution.

#include <iostream>
using namespace std;
int main(){
    int binaryString[32];
    cout << "Enter binary string";
    for(int i = 0; i < 32; i++){
        cin >> binaryString[i];
    }
    int countOne = 0;
    for(int i = 0; i < 32; i++){
        if(binaryString[i] == 1){
            countOne++;
        }
        else{
            continue;
        }
    }
    cout << countOne << endl;
    return 0;
    
}