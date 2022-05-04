class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == -1)
            return 1 / x;
        if (n == 0)
        {
            return 1;
        }

        double small = myPow(x, n / 2);

        if (n % 2 == 0)
        {
            return small * small;
        }

        if (n < 0)
            return small * small * (1 / x);

        return small * small * x;
    }
};