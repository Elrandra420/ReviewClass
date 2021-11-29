//
// Created by navyb on 11/28/2021.
//

#ifndef REVIEWCLASS_RESTAURANT_H
#define REVIEWCLASS_RESTAURANT_H


#include <string>
#include <iostream>
#include "Review.h"

using namespace std;

class Restaurant {
private:

    string Name;
    string Address;
    string Genre;
    int numOfRatings;
    double rating;
public:
//    Constructors
    Restaurant();
    Restaurant(string,string,string);

//    Destructors
    ~Restaurant();

//    Getters and Setters
    const string &getName() const;
    void setName(const string &name);

    const string &getAddress() const;
    void setAddress(const string &address);

    const string &getGenre() const;
    void setGenre(const string &genre);

    int getNumOfRatings() const;
    void setNumOfRatings(int rated);

    double getRating() const;

    static int restaurantCount;
    static int getCount() {
        return restaurantCount;
    }

//    Functions
    void rate(int);
    void display();
};


#endif //REVIEWCLASS_RESTAURANT_H
