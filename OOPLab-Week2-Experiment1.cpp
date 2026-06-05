#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Function to set distance values
    void setDistance(int f, float i) {
        feet = f;
        inches = i;
    }

    // Function to add two distances
    void addDistance(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;

        // If inches are 12 or more, convert them to feet
        if (inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
    }

    // Function to display the distance
    void display() {
        cout << feet << " feet and " << inches << " inches" << endl;
    }
};

int main() {
    Distance dist1, dist2, dist3;

    // Setting values for first and second distance
    dist1.setDistance(5, 7.5);
    dist2.setDistance(3, 6.2);

    // Adding them together
    dist3.addDistance(dist1, dist2);

    cout << "Distance 1: ";
    dist1.display();
    cout << "Distance 2: ";
    dist2.display();
    cout << "Total Summed Distance: ";
    dist3.display();

    return 0;
}
