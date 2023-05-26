#include<iostream>
using namespace std;
///////////////////////////////////////

class counter
{
    protected:
    unsigned int count;
    public:
    counter() : count(0)
    { }
    counter(int c): count(c)
    { }
    unsigned int get_count() const
    {
        return count;
    }
    counter operator ++ (int)
    {
        return counter(++count);
    }

};
///////////////////////////////////////////////////////////

class countdb : public counter
{
    public:
    counter operator -- (int)
    {
        return counter(--count);
    }
};
////////////////////////////////////////

int main()
{
    countdb ck;
    cout<<"\n c = "<<ck.get_count();
    ck++;ck++;ck++;ck++;
    cout<<"\n c = "<<ck.get_count();
    ck--;ck--;ck--;
    cout<<"\n c = "<<ck.get_count();
    cout<<endl;
    return 0;
}