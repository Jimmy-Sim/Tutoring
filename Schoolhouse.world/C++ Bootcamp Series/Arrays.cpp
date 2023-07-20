#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Array of size 10 with integer elements:
    int numbers[10];
    // Initializing elements:
    int numbers2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Getting input for elements:
    string usernames[10];
    for (int i = 0; i < 10; i++) {
        cin >> usernames[i];
    }
    // Printing the usernames:
    for (int i = 0; i < 10; i++) {
        cout << usernames[i] << '\n';
    }

    // Creating an array with size of user's input:
    int arrSize;
    cin >> arrSize;

    char characters[arrSize];
    for (int i = 0; i < arrSize; i++) {
        cin >> characters[i];
    }
    for (int i = 0; i < arrSize; i++) {
        cout << characters[i] << ' ';
    }

    // Sorting an array in increasing order:
    // * You need #include <algorithm>
    sort(&array_name[start index], &array_name[end index + 1]);
    double decimals[10] = {0.7, 0.9, -0.8, 7.4, 9.9, 10.1, -10.0, -5.3, -4.4, -5.5};
    sort(&decimals[0], &decimals[10]);
    --> decimals[10] = {-10.0, -5.5, -5.3, -4.4, -0.8, 0.7, 0.9, 7.4, 9.9, 10.1}


    // Creating a two-dimensional array with width 10 and height 20:
    int map[10][20];

    // Getting input for elements in a two-dimensional array:
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            cin >> map[i][j];
        }
    }

    return 0;
}
