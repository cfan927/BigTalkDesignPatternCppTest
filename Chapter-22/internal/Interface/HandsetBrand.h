#ifndef HandsetBrand_H
#define HandsetBrand_H

#include <HandsetSoft.h>

class HandsetBrand
{
public:
	void SetHandsetSoft(HandsetSoft *soft);
	virtual void Run() = 0;

protected:
	HandsetSoft *m_Soft;
};

#endif // !HandsetBrand_H
