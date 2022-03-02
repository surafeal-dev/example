#include <iostream>
using namespace std;
void problem(int &a, int &b)
{
    int k, n;
    bool error = false;
    do
    {
        cout << "compute the equation given  by entering k and n (e^k  + e^n)/(n!/(n-k)!k!)\n\n";
        cout << "enter the value of k and n separated by space: ";
        cin >> a >> b;
        if (a < 0 || n < 0)
        {
            cout << "only postive integers are allowed to enter\n";
            error = true;
        }

    } while (a < 0 || b < 0);
    // *K=a;
    //     *N=b;
}
int power1(int x)
{
    int ans = 1;
    for (int i = 0; i < x; i++)
    {
        int e = 2;
        ans *= e;
    }
    return ans;
}
int power2(int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        int e = 2;
        ans *= e;
    }
    return ans;
}
int add(int a, int b)
{
    int answer;
    answer = power1(a) + power2(b);
    // cout<<answer;
    return answer;
}
int factor(int b1)
{
    int mult = 1;
    for (int i = b1; i > 0; i--)
    {
        mult *= i;
    }
    return mult;
}
int factorial1(int a, int b)
{
    int mult = 1;
    for (int i = b - a; i > 0; i--)
    {
        mult *= i;
    }
    return mult;
}
int factorial2(int a)
{
    int mult = 1;
    for (int i = a; i > 0; i--)
    {
        mult *= i;
    }
    return mult;
}
int multi(int a1, int b1)
{
    int multi;
    multi = factorial1(a1, b1) * factorial2(a1);
    return multi;
}
float denom_division(int a, int b)
{
    float divison;
    divison = factor(b) / multi(a, b);
    return divison;
}
int main()
{
    int upper, n, k;
    float lower, answer;
    problem(k, n);
    // cout<<k<<n;
    upper = add(k, n);
    // cout<<upper;
    lower = denom_division(k, n);
    // cout<<lower<<endl;
    answer = upper / lower;
    cout << "the answer is: " << answer;

    // bottom();
}