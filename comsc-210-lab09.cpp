// COMSC-210 | Lab 9 | Ahmad Dharhan

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

const int SIZE = 30;

int main(){

    array<int,SIZE> points;

    ifstream inputFile("stephen-curry-points.txt");

    if (!inputFile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }

    
}