#include <iostream>

using namespace std;

int main()
{
    long long a;
    cin >> a;
    long long b[a][2];
    for (int i = 0; i < a; i++)
    {
        long long c, d;
        cin >> c >> d;
        if (c == d)
        {
            b[i][0] = 0;
            b[i][1] = 0;
        }
        else
        {
            long long e = c > d ? c - d : d - c;
            b[i][1] = e;
            long long f = c > d ? c : d;
            f = f % e;
            if (f > e - f)
            {
                b[i][0] = e - f;
            }
            else if (f == e - f)
            {
                b[i][0] = f;
            }
            else
            {
                b[i][0] = f;
            }
        }
    }
    for (long long i = 0; i < a; i++)
    {
        cout << b[i][1] << " " << b[i][0] << endl;
    }
}