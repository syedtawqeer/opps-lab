#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Number of values: ";
    cin >> N;

    int values[N];
    cout << "Enter " << N << " values (one per line/space seperated): " << endl;
    for (int i = 0; i < N; i++)
        cin >> values[i];

    int smallest, largest;
    double sum = 0, average;

    smallest = largest = values[0];

    for (int i = 0; i < N; i++)
    {
        sum += values[i];

        if (values[i] < smallest)
            smallest = values[i];

        if (values[i] > largest)
            largest = values[i];
    }

    average = sum / N;

    cout << "--------------" << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    cout << "Average: " << average << endl;

    return 0;
}
