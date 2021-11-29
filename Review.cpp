//
// Created by navyb on 11/28/2021.
//

#include "Review.h"
#include <string>
#include <iostream>

using namespace std;

Review::Review(string name, int rated, string inputText) {
    reviewerName = std::move(name);
    rating = rated;
    reviewText = std::move(inputText);
}

const string &Review::getReviewerName() const {
    return reviewerName;
}

void Review::setReviewerName(string name) {
    Review::reviewerName = std::move(name);
}

int Review::getRating() const {
    return rating;
}

void Review::setRating(int rated) {
    Review::rating = rated;
}

const string &Review::getReviewText() const {
    return reviewText;
}

void Review::setReviewText(string inputText) {
    Review::reviewText = std::move(inputText);
}
