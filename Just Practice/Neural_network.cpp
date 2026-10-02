#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x1[n], x2[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x1[i] >> x2[i] >> y[i];
    }

    double w1, w2, bias, lr;
    int epoch;
    cin >> w1 >> w2 >> bias;
    cin >> lr;
    cin >> epoch;

    for(int e=0; e<epoch ; e++)
    {
        for(int i=0; i<n; i++)
        {
            double sum = x1[i] * w1 + x2[i] * w2 + bias;
            int prediction ;
            if(sum >= 0)
            {
                prediction = 1;
            }
            else 
            {
                prediction = 0;
            }
            int error = y[i] - prediction;
            w1 = w1 + lr * error * x1[i];
            w2 = w2 + lr * error * x2[i];
            bias = bias + lr * error;

        }
    }
    cout << w1 << endl;
    cout << w2 << endl;
    cout << bias << endl;

    int a,b;
    cin >> a >> b;

    double sum = a * w1 + b * w2 + bias;
    if(sum >= 0)
    {
        cout << "Prediction = 1" << endl;
    }
    else
        cout << "Prediction = 0" << endl;
    return 0;
}