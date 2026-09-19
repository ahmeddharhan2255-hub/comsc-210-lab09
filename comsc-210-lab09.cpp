// COMSC-210 | Lab 9 | Ahmad Dharhan

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

const int SIZE = 30;

//Function Prototypes
void size(array<int,SIZE> points);

int main(){

    array<int,SIZE> points;

    ifstream inputFile("stephen-curry-points.txt");

    if (!inputFile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }

    for(int i = 0; i < SIZE; i++){
        inputFile >> points[i];
    }

    inputFile.close();


}

void size(array<int,SIZE> points){
    cout << "Here are Stephen Curry's recent 30 games: ";
    
}