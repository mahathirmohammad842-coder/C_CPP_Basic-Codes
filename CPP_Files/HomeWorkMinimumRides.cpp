#include <iostream>

using namespace std;

const int MAX_GROUPS = 100;
const int MAX_PER_RIDE = 4;

int main() {
    int groupSizes[MAX_GROUPS];
    int numGroups;

    cout << "Enter number of groups: ";
    cin >> numGroups;

    cout << "Enter group sizes:\n";
    for (int i = 0; i < numGroups; ++i) {
        cin >> groupSizes[i];
    }

    int rideNumber = 1;
    int currentRide[MAX_GROUPS]; // temporary array to hold current ride
    int currentCount = 0;        // number of people in current ride

    cout << "\nRide Grouping:\n";

    for (int i = 0; i < numGroups; ++i) {
        int group = groupSizes[i];

        while (group > 0) {
            int spaceLeft = MAX_PER_RIDE - currentCount;

            if (spaceLeft == 0) {
                // Ride is full, print and reset
                cout << "Ride " << rideNumber++ << ": ";
                for (int j = 0; j < currentCount; ++j) {
                    cout << currentRide[j] << " ";
                }
                cout << "(Total: " << MAX_PER_RIDE << " persons)\n";
                currentCount = 0;
            }

            int toAdd = (group < spaceLeft) ? group : spaceLeft;
            currentRide[currentCount++] = toAdd;
            group -= toAdd;
        }
    }

    // Print last ride if not empty
    if (currentCount > 0) {
        cout << "Ride " << rideNumber++ << ": ";
        int total = 0;
        for (int j = 0; j < currentCount; ++j) {
            cout << currentRide[j] << " ";
            total += currentRide[j];
        }
        cout << "(Total: " << total << " persons)\n";
    }

    return 0;
}
