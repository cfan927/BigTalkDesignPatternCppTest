#ifndef Singleton_H
#define Singleton_H

class Singleton
{
public:
	static Singleton* GetInstance();

private:
	Singleton();

	static Singleton *m_Instance;
};

#endif // !Singleton_H
