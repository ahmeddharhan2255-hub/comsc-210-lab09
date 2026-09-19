// COMSC-210 | Lab 9 | Ahmad Dharhan

#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

const int SIZE = 30;

//Function Prototypes
void recent_game(vector<int> points);
void sorted_points(vector<int> points);
void points_sum(vector<int> points);
void average(vector<int> points);
void location(vector<int> points);
void oldest_game(vector<int> points);

int main(){
    int val;

    vector<int> points;

    ifstream inputFile("stephen-curry-points.txt");
    
    //Check if file is read
    if (!inputFile.is_open()){
        cout << "Error opening file" << endl;
        return 1;
    }

    //Reads data into vector
    while (inputFile >> val){
        points.push_back(val);
    } 

    inputFile.close();

    cout << "STEPHEN CURRY STATS" << endl;

    recent_game(points);

    oldest_game(points);

    sorted_points(points);

    points_sum(points);

    average(points);

    location(points);

    return 0;
}

//Find the most recent game
void recent_game(vector<int> points){
    cout << "Recent game points: ";
    cout << points.back() << endl;
}

//Finds the oldest game
void oldest_game(vector<int> points){
    cout << "Oldest game points: ";
    cout << points.front() << endl;
}

//Sorted Vector
void sorted_points(vector<int>points){
    cout << "Past 30 game points from low to high" << endl;

    sort(points.begin(), points.end());
    for (int val: points) cout << val << " ";
    cout << endl;
}

//Points sum
void points_sum(vector<int> points){
    cout << "The sum of the points scored is: ";
    int sum = accumulate(points.begin(),points.end(),0);
    cout << sum << endl;
}

//Returns average
void average(vector<int> points){
    cout << "Average points scored: ";
    double sum = accumulate(points.begin(),points.end(),0);
    double size = points.size();

    cout << sum / size << endl;

}

//Returns memory address
void location(vector<int> points){
    cout << "Address of the array: ";
    cout << points.data() << endl;
}