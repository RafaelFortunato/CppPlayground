class PrivateFieldClass
{
private:
    int privateField = 4;
    friend class FriendTest;
};

class FriendTest
{
public:
    static void runTest();
};