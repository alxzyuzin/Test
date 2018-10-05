
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <list>
#include <stack>

#include <istream>

#pragma warning(suppress : 4996)
using namespace std;

class A
{
int _i;
public: A(int i){  _i  =  i; }
~A()
{
	 printf("%d  ",_i);}
};


class MyClass1
   {
     int n;
     MyClass1(int);
     ~MyClass1();
   };

class MyClass2
   {
     float s;
     MyClass2(int);
     ~MyClass2();
   };



template <class T>
class set
{
	public:
		set(){};
		virtual void insert(T*)=0;
		virtual void remove(T*)=0;

		virtual void is_member(T*)=0;

		virtual void first(T*)=0;
		virtual void next(T*)=0;

		virtual ~set(){}
};

template<class T>
class slist_set:public set<T>, private list<T>
{
	private:
//		slink* current_elem;
	public:
		void insert(T*){};
		void remove(T*){};

		void is_member(T*){};

		void first(T*){};
		void next(T*){};
};
class Point
{
	int x,y;
	double Point::operator()() {return sqrt(x*x+y*y);}
	bool Point::operator==(Point a) { return (x==a.x && y==a.y);}
	int Point::operator[] (int i) {if ( i == 0) return x; if(i==1) return y; else return -1;}
	Point& Point::operator++() {x++; y++; return *this;}
};


int main()
{
	{
	A a(-1);
   	{
		A a(0);
		A a1(1);
		throw "Error executed.";
		A a2(2);
   	}
   	A a1(4);
	}

	getchar();
}
