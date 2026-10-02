#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x1[100], x2[100], y[100];

    for(int i = 0; i < n; i++)
    {
        cin >> x1[i] >> x2[i] >> y[i];
    }

    double w1 = 0,w2 = 0,b = 0;

    double lr;
    int epoch;
    cin >> lr;
    cin >> epoch;

    for(int e = 0; e < epoch; e++)
    {
        for(int i = 0; i < n; i++)
        {
            double z = x1[i] * w1 + x2[i] * w2 + b;
            int prediction;

            if(z >= 0)
                prediction = 1;
            else
                prediction = 0;

            int error = y[i] - prediction;

            w1 = w1 + lr * error * x1[i];
            w2 = w2 + lr * error * x2[i];

            b = b + lr * error;
        }
    }

    cout << "w1 = " << w1 << endl;
    cout << "w2 = " << w2 << endl;
    cout << "bias = " << b << endl;

    int test1, test2;
    cin >> test1 >> test2;

    double z = test1 * w1 + test2 * w2 + b;

    int prediction;
    if(z >= 0)
        prediction = 1;
    else
        prediction = 0;

    cout << "Prediction = " << prediction << endl;

    return 0;
}