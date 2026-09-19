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
void points_sum(array<int,SIZE> points);
void average(array<int,SIZE> points);

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

    cout << "STEPHEN CURRY STATS" << endl;

    most_recent_game(points);

    sorted_points(points);

    points_sum(points);

    average(points);

    return 0;
}

void most_recent_game(const array<int,SIZE> points){
    cout << "Recent game points: ";
    cout << points.front() << endl;
}

void sorted_points(array<int,SIZE> points){
    cout << "Past 30 game points from low to high" << endl;

    sort(points.begin(), points.end());
    for (int val: points) cout << val << " ";
    cout << endl;
}

void points_sum(const array<int,SIZE> points){
    cout << "The sum of the points scored is: ";
    double sum = accumulate(points.begin(),points.end(),0);
    cout << sum << endl;
}

void average(const array<int,SIZE> points){
    cout << "Average points scored: ";
    int sum = accumulate(points.begin(),points.end(),0);
    int size = points.size();

    cout << sum / size << endl;

}