#include <Windows.h>
#include <stdio.h>
#include "Config.h"
#include <iostream>

using namespace std;
// https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731(v=vs.85).aspx

bool ValidateHotkey(int hk)
{
	return MapVirtualKey(hk, MAPVK_VK_TO_VSC) != 0;
}


void GetConfig()
{
	system("color 2F");
	printf("Low Priority Bot Burner V1.1\nResolutions other than 1920x1080 may malufunction.\n\nNew:\n\n\tCourier feeding!\n\tDOTA 2 no longer has to be set as the foreground process!\n\n");
	printf("In order to burn low priority games, we must know some of your binds set.\nSee https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731(v=vs.85).aspx\nYour attack key (hex): ");
	cin >> hex >> DOTA_KEY_ATTACK;
	printf("Your select hero bind (hex): ");
	cin >> hex >> DOTA_KEY_SELECT_HERO;
	printf("Your select courier bind (hex): ");
	cin >> hex >> DOTA_KEY_SELECT_COURIER;
	printf("Feed couriers? (y/n): ");
	char ans;
	cin >> ans;
	switch (ans)
	{
	case 'y':
		DOTA_FEED_COURIERS = true;
		break;
	case 'n':
		DOTA_FEED_COURIERS = false;
		break;
	default:
		printf("Invalid answer, automatically set to true.\n");
		DOTA_FEED_COURIERS = true;
	}
	printf("ATTACK: %i\n", DOTA_KEY_ATTACK);
	printf("SELECT HERO: %i\n", DOTA_KEY_SELECT_HERO);
	printf("SELECT COURIER: %i\n", DOTA_KEY_SELECT_COURIER);
	printf("FEED COURIERS: %c\n", ans);
	printf("We now know all needed binds, press any key to start feeding!\n");
	system("pause");
}