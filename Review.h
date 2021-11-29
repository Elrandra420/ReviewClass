//
// Created by navyb on 11/28/2021.
//

#ifndef REVIEWCLASS_REVIEW_H
#define REVIEWCLASS_REVIEW_H
#include <iostream>
#include <string>

using namespace std;

class Review {
private:
    string reviewerName;
    int rating;
    string reviewText;

public:
//    Constructors

    Review(string, int, string);

    const string &getReviewerName() const;
    void setReviewerName(string);

    int getRating() const;
    void setRating(int);

    const string &getReviewText() const;
    void setReviewText(string);
};


#endif //REVIEWCLASS_REVIEW_H
