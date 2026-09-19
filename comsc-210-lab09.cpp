// COMSC-210 | Lab 9 | Ahmad Dharhan

#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <array>

using namespace std;

const int SIZE = 30;

//Function Prototypes
void most_recent_game(array<int,SIZE> points);
void sorted_points(array<int,SIZE> points);

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

    most_recent_game(points);

    sorted_points(points);

}

void most_recent_game(array<int,SIZE> points){
    cout << "Here are Stephen Curry's recent 30 games: ";
    cout << points.front() << endl;
}

void sorted_points(array<int,SIZE> points){
    cout << "Here are his points from low to high" << endl;

    sort(points.begin(), points.end());
    for (int val: points) cout << val << " " << endl;
}