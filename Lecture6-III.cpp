// Lecture 6 III - Loops Part 3

#include <iostream>
using namespace std;

int main(){
    // while loop
    int i=1; //initialize
    while(i<101 ){ //condition
        cout << i <<" ";
        i++; //updation
    }

    cout << endl;

    int n, input;
    cout << "Enter the number : " << endl;
    for(n=0; n<101; n++){
        cin >> input;
        if(input == 65){
            cout << "Congrats you have guessed correct." << endl;
            break;
        }
    }
    return 0;
}