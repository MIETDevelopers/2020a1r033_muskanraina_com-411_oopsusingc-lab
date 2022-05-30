#include<iostream>
using namespace std;
class length
{
    protected :int l,b,a;
    public :void get()
    {
        cout<<"\n enter length of rectangle:";
        cin>>l;
    }
};
class breadth : public length
{
    public :void getbreadth()
    {
        cout<<"\n enter breadth of rectangle:";
        cin>>b;
    }
};
class area : public breadth
{
    public :void getarea()
    {
        cout<<"\n area of rectangle"<<l*b<<endl;
    }
};
int main()
{
    area obj;
    obj.get();
    obj.getbreadth();
    obj.getarea();
    return 0;
}
