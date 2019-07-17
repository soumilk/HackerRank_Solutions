

/* Define the exception here */

class BadLengthException
{
    private:
    int n;
    public:
    BadLengthException(int num)
    {
        n=num;
    }
    int what()
    {
        return n;
    }
};

