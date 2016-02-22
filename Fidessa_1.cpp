#include <iostream>
#include <stdio.h>
//#include <vector>
//#include <string>

class A
{
public:
	A() : val_(0) {}
	~A() {}

	A(const A& c)
	{
		if (&c != this)
		{
			std::cout << "Copying" << std::endl;
			this->val_ = c.val_;
		}
	}

	void SetVal(int v)
	{
		this->val_ = v;
	}
	int GetVal()
	{
		return (this->val_);
	}

private:
	int val_;
};

static void foo(A a)
{
	std::cout << "Foo called" << std::endl;
	a.SetVal(18);
}

static void bar(A& a)
{
	std::cout << "bar called" << std::endl;
	a.SetVal(22);
}

int main(int argc, char const *argv[])
{
	A a;
	a.SetVal(99);
	std::cout << "Val starts as " << a.GetVal() << std::endl;
	foo(a);
	std::cout << "After foo, val is " << a.GetVal() << std::endl;
	bar(a);
	std::cout << "After bar, value is " << a.GetVal() << std::endl;
	return 0;
}
