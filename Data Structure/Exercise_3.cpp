#include <iostream>

using namespace std;

void Sub (double *pa, double *pb, double *pd);

int main()
{
    double a,b,c,d;
    double *pa = &a;
    double *pb = &b;
    double *pc = &c;
    double *pd = &d;
    cout << "������a��b��ֵ��";
    cin >> *pa >> *pb;
    *pc = (*pa) + (*pb);
    Sub(pa,pb,pd);
    cout << *pc << ' ' << *pd << endl;
    return 0;
}

void Sub (double *pa, double *pb, double *pd)
{
    *pd = (*pa) - (*pb);
}
