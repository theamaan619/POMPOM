#include(iosterm.h)
using namespace std;
class A;(
public:
void show1()(
cout<<"/n this is class A";
)
public:
void show()(
show1();
)	
);
class B:public A(
public:
void show2()(
cout<<"/n this is class B"
(
);
void main()(
clrscr();
A a;
a.show()
B b;
//b.show2();
//b.show1();
return0;
)
