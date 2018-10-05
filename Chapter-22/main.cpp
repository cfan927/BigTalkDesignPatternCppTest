#include <iostream>

#include <HandsetBrand.h>
#include <HandsetBrandM.h>
#include <HandsetBrandN.h>
#include <HandsetGame.h>
#include <HandsetAddressList.h>

using namespace std;

void main()
{
	HandsetBrand *ab = new HandsetBrandN();

	ab->SetHandsetSoft(new HandsetGame());
	ab->Run();

	ab->SetHandsetSoft(new HandsetAddressList());
	ab->Run();

	ab = new HandsetBrandM();

	ab->SetHandsetSoft(new HandsetGame());
	ab->Run();

	ab->SetHandsetSoft(new HandsetAddressList());
	ab->Run();

	getchar();
}


