// COMSC-210 | Lab 9 | Ahmad Dharhan

#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <array>
#include <vector>

using namespace std;

const int SIZE = 30;

//Function Prototypes
void most_recent_game(vector<int> points);
void sorted_points(vector<int> points);
void points_sum(vector<int> points);
void average(vector<int> points);
void location(vector<int> points);
void oldest_game(vector<int> points);

int main(){

    vector<int> points;

    ifstream inputFile("stephen-curry-points.txt");

    if (!inputFile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }

    for(int i = 0; i < SIZE; i++){
        inputFile >> points.push_back(i);
    }

    inputFile.close();

    cout << "STEPHEN CURRY STATS" << endl;

    most_recent_game(points);

    sorted_points(points);

    points_sum(points);

    average(points);

    return 0;
}

void recent_game(const vector<int> points){
    cout << "Recent game points: ";
    cout << points.front() << endl;
}

void oldest_game(const vector<int> points){
    cout << "Oldest game points: ";
    cout << points.back() << endl;
}

void sorted_points(vector<int>points){
    cout << "Past 30 game points from low to high" << endl;

    sort(points.begin(), points.end());
    for (int val: points) cout << val << " ";
    cout << endl;
}

void points_sum(vector<int> points){
    cout << "The sum of the points scored is: ";
    double sum = accumulate(points.begin(),points.end(),0);
    cout << sum << endl;
}

void average(vector<int> points){
    cout << "Average points scored: ";
    int sum = accumulate(points.begin(),points.end(),0);
    int size = points.size();

    cout << sum / size << endl;

}

void location(vector<int> points){
    cout << "Location of the array: ";
    cout << points.data() << endl;
}