// Elijah Andrade
// This program contains a Restaurant Class and includes a rating system
#include <iostream>
#include <limits>
#include <string>
#include "Restaurant.h"

bool rateRestaurant = true;

using namespace std;

// Has to be declared outside the class to initialize the static variable RestaurantCount
int Restaurant::restaurantCount = 0;

int checkValue(int range) {
    while (range < 0 || range > 10 || cin.fail()) //cin must return as true before continuing
        {
        cout << "Please enter a number between 1 and 10 to rate: ";
        cin.clear(); //This clears previous user input
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //This blocks any input over the limit
        cin >> range;
        cin.fail(); //Without this the user can enter items other than a number, which be bad :(
        //This checks to see if the user input matched the intended type i.e. int
        }
    // cout << "Check Value Function range: " << range << endl;
    // This was a test to check to ensure output was correct
    return range;
}

int main()
{
    int userRated, checked;
    //These create Object instances of class Restaurant
    Restaurant r1 = Restaurant("Pizza Hut", "4260 N Blackstone Ave", "Pizza Diner");
    Restaurant r2 = Restaurant("Wendy's", "1778 E Shaw Ave", "Fast Food Burgers");
    Restaurant r3 = Restaurant("Popeyes Louisiana Kitchen","3004 N Blackstone Ave", "Fried Chicken Fast Food");
    Restaurant restaurant;
    cout << "Number of Restaurants available to rate: " << Restaurant::getCount() << endl; //This shows the number of Objects within the Restaurant class
    cout << "Please rate " << r3.getName() << " Between 1 and 10." <<endl;
    cout << "User inputed: ";
    cin >>  userRated;
    checked = checkValue(userRated); //Ensures userInput is of correct type
    r3.rate(checked); //Checked input is then ran through the rate function of the class to save that instances rating

    r3.display();
    r2.display();
    r1.display();
    restaurant.display();
    return 0;
}
