//
// Created by navyb on 11/28/2021.
//

#include "Restaurant.h"
#include <iostream>
#include <string>
#include <utility>

using namespace std;

//Constructors
    //For creating an instance of class Restaurant
Restaurant::Restaurant(string n, string a, string g) {
    Name = std::move(n);
    Address = std::move(a);
    Genre = std::move(g);
    rating = 0; //This sets the initial rating to 0 for every new object of the class
    numOfRatings = 0; //This sets the initial rating to 0 for every new object of the class
    restaurantCount++; //For each creation of a new restaurant within the Restaurant class, we add 1 to the total count
}
Restaurant::Restaurant() {
    Name = "";
    Address = "";
    Genre = "";
    rating = 0; //This sets the initial rating to 0 for every new object of the class
    numOfRatings = 0; //This sets the intitial rating to 0 for every new object of the class
    restaurantCount++; //For each creation of a new restaurant within the Restaurant class, we add 1 to the total count
}

//Getters and Setters
const string &Restaurant::getName() const {
    return Name;
}
void Restaurant::setName(const string &name) {
    Name = name;
}
const string &Restaurant::getAddress() const {
    return Address;
}
void Restaurant::setAddress(const string &address) {
    Address = address;
}
const string &Restaurant::getGenre() const {
    return Genre;
}
void Restaurant::setGenre(const string &genre) {
    Genre = genre;
}
int Restaurant::getNumOfRatings() const {
    return numOfRatings;
}
void Restaurant::setNumOfRatings(int rated) {
    Restaurant::numOfRatings = rated;
}
double Restaurant::getRating() const {
    return rating;
}

//Functions
//    Rating related functions
void Restaurant::rate(int score) {
    int percentage; //Needed for the percentage conversion
    double ratingTemp; //Needed so as to not change the default rating before performing the new calculation
    percentage = score*10; //The percentage conversion for the user input
    numOfRatings++;
    ratingTemp = (percentage+rating)/numOfRatings; //Standard averaging equation
    rating = ratingTemp;
}

// Displays information on the class object
void Restaurant::display() {
    cout << "Restaurant Name: " << Name << endl;
    cout << "Address: " << Address << endl;
    cout << "Genre: " << Genre << endl;
    cout << "Rating:" << rating << "%" << endl;
    cout << "Total Ratings: " << numOfRatings << endl;
    cout << endl;
}
Restaurant::~Restaurant() {
    cout << "Restaurant " << Name << " has been destroyed :O\n BOOM!\n";
    cout << "So Sad :(\n" << endl;
}
