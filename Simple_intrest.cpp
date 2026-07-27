// #include <iostream>
// using namespace std;

// inline float simpleInterest(float principal, float rate, float time)
// {
//     return (principal * rate * time) / 100;
// }

// float calculateSI(float principal, float rate, float time)
// {
//     return simpleInterest(principal, rate, time);
// }

// float calculateSI(float principal, float rate, float time = 1)
// {
//     return simpleInterest(principal, rate, time);1
// }

// float calculateSI(int principal, int rate, int time)
// {
//     return simpleInterest(principal, rate, time);
// }

// int main()
// {
//     float p, r, t;

//     cout << "Enter Principal, Rate, and Time: ";
//     cin >> p >> r >> t;

//     cout << "\nUsing all parameters: " << calculateSI(p, r, t);
//     cout << "\nUsing default time (1 year): " << calculateSI(p, r);
//     cout << "\nUsing integer version: " << calculateSI((int)p, (int)r, (int)t);

//     return 0;
// }

#include <iostream>
using namespace std;

inline float simpleInterest(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
}

// Single version with default argument
float calculateSI(float principal, float rate, float time = 1)
{
    return simpleInterest(principal, rate, time);
}

// Overloaded version with integers
float calculateSI(int principal, int rate, int time)
{
    return simpleInterest(principal, rate, time);
}

int main()
{
    float p, r, t;

    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;

    cout << "\nUsing all parameters: " << calculateSI(p, r, t);
    cout << "\nUsing default time (1 year): " << calculateSI(p, r);
    cout << "\nUsing integer version: " << calculateSI((int)p, (int)r, (int)t);

    return 0;
}
