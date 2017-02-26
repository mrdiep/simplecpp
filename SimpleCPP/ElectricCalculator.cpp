#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int kwh, total;
	bool isPoor;

	cout << "So kwh:";
	cin >> kwh;

	cout << "La ho ngheo (true/false):";
	cin >> isPoor;

	if (isPoor) {
		if (kwh <= 50)
			total = kwh * 993;
		else if (kwh <= 100)
			total = 50 * 993 + (kwh - 50) * 1418;
		else if (kwh <= 150)
			total = 50 * 993 + 50 * 1418 + (kwh - 100) * 1622;
		else if (kwh <= 200)
			total = 50 * 993 + 50 * 1418 + 50 * 1622 + (kwh - 150) * 2044;
		else if(kwh<=300)
			total = 50 * 993 + 50 * 1418 + 50 * 1622 + 100 * 2044 * (kwh-200)*2210;
		else if (kwh <= 400)
			total = 50 * 993 + 50 * 1418 + 50 * 1622 + 100 * 2044 * 100 * 2210 + (kwh - 300) * 2361;
		else 
			total = 50 * 993 + 50 * 1418 + 50 * 1622 + 100 * 2044 * 100 * 2210 + 100 * 2361 * (kwh-400) * 2420;
	}
	else {
		if (kwh <= 100)
			total = kwh * 1418;
		else if (kwh <= 150)
			total = 100 * 1418 + (kwh - 100) * 1622;
		else if (kwh <= 200)
			total = 100 * 1418 + 50 * 1622 + (kwh - 150) * 2044;
		else if (kwh <= 300)
			total = 100 * 1418 + 50 * 1622 + 100 * 2044 * (kwh - 200) * 2210;
		else if (kwh <= 400)
			total = 100 * 1418 + 50 * 1622 + 100 * 2044 * 100 * 2210 + (kwh - 300) * 2361;
		else
			total = 100 * 1418 + 50 * 1622 + 100 * 2044 * 100 * 2210 + 100 * 2361 * (kwh - 400) * 2420;
	}

	cout << "tong tien dien la : " << total;

    return 0;
}

