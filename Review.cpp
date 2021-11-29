//
// Created by navyb on 11/28/2021.
//

#include "Review.h"

const string &Review::getReviewerName() const {
    return reviewerName;
}

void Review::setReviewerName(const string &reviewerName) {
    Review::reviewerName = reviewerName;
}
