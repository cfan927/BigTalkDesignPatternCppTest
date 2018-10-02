#include <Director.h>

void Director::Construct(Builder *builder)
{
	builder->BuildPartA();
	builder->BuildPartB();
}
