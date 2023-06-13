

#include <iostream>
using namespace std;

int main()
{
    //N1!
    int number;
    cout << "Enter number \n";
    cin >> number;
    for (number <= 500; number++;) 
    {
        cout << "Result \n";
        cout << (500 / 2) * (number + 500) << "\n";

    }
    //N2!
    int first;
    int second;
    int i;
    int result;
    cout << "First number: \n";
    cin >> first;
    cout << "Second number; \n";
    cin >> second;
    if (first == 0) {
        result = 1;
    }
    else;
    i = 1;
    do {
        result = result * first;
        i + 1;
    } while (i <= second);

    //N3!
    int res;
    for (int x = 1; x < 500; x++) {
        res = (x + 500) * 500 / 2;
    }
    cout << "Result: " << res << "\n";
   
    //N4!
    int overall;
    int y;
    cout << "Number : \n";
    cin >> y;
    for (y <= 20; y++;) {
        overall = overall *= y;
    }
    cout << "Overall result: " << overall << "\n";
}   




