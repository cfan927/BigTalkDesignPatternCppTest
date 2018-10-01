#ifndef IGiveGift_H
#define IGiveGift_H

class IGiveGift
{
public:
	IGiveGift();
	~IGiveGift();

protected:
	virtual void GiveDolls() = 0;
	virtual void GiveFlowers() = 0;
	virtual void GiveChocolate() = 0;
};

#endif // !IGiveGift_H


