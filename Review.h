//
// Created by navyb on 11/28/2021.
//

#ifndef REVIEWCLASS_REVIEW_H
#define REVIEWCLASS_REVIEW_H


class Review {
private:
    string reviewerName;
    int rating;
    string reviewText;
public:
    const string &getReviewerName() const;
    void setReviewerName(const string &reviewerName);
};


#endif //REVIEWCLASS_REVIEW_H
