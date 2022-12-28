/*#include <iostream>  // LABA 1 VARIANT 22
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, p, s = 1;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    if (a + b > c && a + c > b && b + c > a)
    {
        s *= sqrt(p * (p - a) * (p - b) * (p - c));
        cout << s;
    }
    else cout << "Net takogo treugolnika!";
}*/
/*#include <iostream> //GONOR LABA 2.1
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Vvedite peremennuyu 1:  ";
    cin >> n;
    int x;
    cout << "Vvedite peremennuyu 2:  ";
    cin >> x;
    int b, a;
    float f = 0;
    for (int i = 0; i <= n; i++)
    {
        cin >> a;
        b = a + f;
        f = b * x;
    }
    cout << b;
}*/
/*#include <iostream> // LABA 2.2
using namespace std;
int main ()
{
    int n, A0;
    cin >> n >> A0;
    int max = A0;
    int min = A0;
    int *A = (int*)malloc(n * sizeof(int));
    int m = 1;
    int m1 = 1;
    for (int i = 1; i < n; i++)
    {
        cin >> A[i];
        if (max < A[i])
        {
            max = A[i];
            m = i + 1;
        }
        if (min > A[i])
        {
            min = A[i];
            m1 = i + 1;
        }
    }
    cout << max << "  " << m;
    cout << "\n";
    cout << min << "  " << m1;
}*/
/*#include <iostream> //LABA 3.1
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\n";
    int B[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> B[i][j];
            B[i][j] += A[i][j];
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
}*/
/*#include <iostream> //LABA 3.2
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\n";
    int k, l;
    cin >> k >> l;
    int B[k][l];
    if (m == k)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < l; j++)
            {
                cin >> B[i][j];
                B[i][j] *= A[i][j];
            }
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << "\n";
        }
    }
    if (m != k)
        cout << "Net Vozmozhnosty umnozhit";
}*/
/*#include <iostream> // LABA 4.2
#include <cmath>
using namespace std;
int main()
{
    int x0 = 1, n = 5, s = 0;
    cout << x0 << "  ";
    for (int i = 2; i <= n; i++)
    {
        for (int k = i; k <= n; k++)
        {
            s += pow(x0, i);
        }
    x0 = s;
    s = 0;
    cout << x0 << "  ";
    }
}*/
/*#include <iostream> //LABA 5.1
#include <cmath>
using namespace std;
int main()
{
    float a, b, n, x, fx, s = 0;
    cin >> a >> b >> n;
    float h = ((b - a) / n);
    for (int i = 0; i < n; i++)
    {
        x = a + i * h;
        fx = pow(x, 2);
        s += fx;
    }
    s *= h;
    cout << s;
}*/
/*#include <iostream>
#include <cmath>
using namespace std;
double F(double x)
{
    double Q;
    Q = x * x * x + 2 * x - 10;
    return Q;
}
int main()
{
    double a=1, b=2;
    double c;
    c= (a + b) / 2;
    int s = 1;
    double z = 0.01;
    while (abs(F(c)) > z)
    {
        if (F(a) * F(c) < 0)  b = c;
        else  a = c;
        s++;
        c = (a + b) / 2;
    }
    cout << s << "  " << c << "  " << F(c) << endl;
}*/


/*#include <iostream> //VARIANT 22
#include <cmath>
using namespace std;
double F (double x)
{
    double e = 2.7183;
    int p = pow(e, x) - pow(x, 3) - 1;
    return p;
}
int main()
{
    double ep = 0.0001;
    double x1;
    double x2;
    cin >> x1 >> x2;
    double k = (x1 + x2) / 2;
    int x = 0;
    if (F(x1) == 0)
    cout << x1 << "  " << F(x1) << "  " << x << "\n" << "Sovpalo s nachalom";
    else if (F(x2) == 0)
    cout << x2 << "  " << F(x2) << "  " << x << "\n" << "Sovpalo s kontsom";
    else
    {
        while (abs(F(k)) > ep)
        {
            x++;
            if (F(x1) * F(k) < 0)   x2 = k;
            else x1 = k;
            k = (x1 + x2) / 2;
            cout << x << "  " << k << "  " << F(k);
        }
    }
}*/


/*#include <iostream>
#include <math.h>
using namespace std;
typedef double(*pointFunc)(double);
double f(double x)
{
    int p = (pow(x, 2) + (1 / pow(x, 4)));
    return p;
}
double integral(pointFunc f, double a, double b, int n)
{
    double x, h = (b - a) / n;
    double sum = 0.0;
    double fx;
    for (int i = 0; i < n; i++)
    {
        x = a + i * h;
        fx = f(x);
        sum += fx;
    }
    sum *= h;
    return sum;
}
int main()
{
    double a = 1, b = 2, e = 2.00001;
    double s1, s;
    int n = 5;
    s1 = integral(f, a, b, n);
    s = s1;
    while (abs(s1 - s) > e)
    {
        s1 = integral(f, a, b, n);
        s = s1;
    }
    cout << s1 << endl;
}*/


/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    double s;
    float x, y;
    s = n * x + h * y;

    for (x = 0; x < n; x += 0.5)
    {
        if (h * y >= n * x) s = h * y;
        else if (n * x > h * y)
        for (y = 0; y < h; y += 0.5)
        {

        }
    }
}*/



/*#include <iostream>
#include <cmath>
using namespace std;
double f(int x, int y, int z) {
    double f1 = 17 * x + 15 * y + 10 * z;
    double f2 = 11 * x + 8 * y + 16 * z;
    double f3 = 9 * x + 18 * y + 11 * z;
    if (f1 <= 214 && f2 <= 149 && f3 <= 175) return 1;
    else return 0;}
int F(int x, int y, int z) {return 1500 * x + 1700 * y + 1400 * z;}
int main () {
    int x = 0, y = 0, z = 0;
    double m = 0.0;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            for (int k = 0; k < 30; k++) {
                if (f(x, y, z) == 1 && m < F(x, y, z)) {
                    m = F(x, y, z);
                    a = x;
                    b = y;
                    c = z; }
                z++; }
            z = 0;
            x++;}
        x = 0;
        y++;}
    cout << "X = " << a << "\nY = " << b << "\nZ = " << c << "\nMaximum = " << m << "\n";}*/


/*#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float N = 10, h = 0.000005, s = 0, T = 0.00005, a0 = -0.82, t2 = h/2, Sa = 0, Sb = 0,
    t[10] = {0, 0.000005, 0.00001, 0.000015, 0.00002, 0.000025, 0.00003, 0.000035, 0.00004, 0.000045},
    f[10] = {7.85548, 8.04204, 1.34901, -7.13584, -10.78098, -6.84274, 1.29831, 6.93749, 5.57287, -1.39763},
    F[10];
    const float Pi = 3.14159;
    for (int i = 0; i <= N; i++)
    {
        if(i != 0 && i != N) s=s+f[i];
        float an[20], bn[20];
        cout << endl << "n  an  bn"<<endl;
        for (int n = 1; n <= 2 * N; n++)
        {
            Sa = 0; Sb = 0;
            for (int i = 1; i < N; i++)
            {
                Sa = Sa + f[i] * (sin((2 * Pi * n * (t[i] + t2)) / T) - sin((2 * Pi * n * (t[i] - t2)) / T));
                Sb = Sb + f[i] * (cos((2 * Pi * n * (t[i] + t2)) / T) - cos((2 * Pi * n * (t[i] - t2)) / T));
            }
            an[n] = (8.5805 * sin(2 * Pi * n * h / T) - 11.61118 * sin(2 * Pi * n * (T - t2) / T) + Sa) / Pi / n;
            bn[n] = (8.5805 * (1 - cos(2 * Pi * n * h / T)) - 11.61118 * (1 - cos(2 * Pi * n * (T - t2) / T)) - Sb) / Pi / n;
            cout << n << " " << an[n] << "\t" << bn[n] << endl;
        }
        cout << endl << "t" << "\t" << "F(t)" << endl;
        for (int i = 0; i <= N; i++)
        {
            s = 0;
            for (int n = 1; n <= 2 * N; n++)
                s = s + an[n] * cos(2 * Pi * n * t[i] / T) + bn[n] * sin(2 * Pi * n * t[i] / T);
            F[i] = a0 + s;
            cout << t[i] << "\t" << F[i] << endl;
        }
    }
}*/


#include <iostream>
#include <cmath>
using namespace std;
int main()
{

}
