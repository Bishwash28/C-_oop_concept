#include<iostream>
using namespace std;
class simple
{
    private:
    int p,t,r;
    public:
    void getdata()
    {
        cin>>p>>t>>r;
    }
    void displaydata()
    {
        int s=(p*t*r)/100;
        cout<<"simple interest="<<s;
    }
};
main()
{
    simple i;
    i.getdata();
    i.displaydata();
}