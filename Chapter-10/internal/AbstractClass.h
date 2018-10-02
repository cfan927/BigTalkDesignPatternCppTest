#ifndef AbstractClass_H
#define AbstractClass_H

class AbstractClass
{
public:
	void TemplateMethod();

	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
};

#endif // !AbstractClass_H
