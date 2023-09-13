// BlanketRPGCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Player.cpp"

int main()
{
    std::cout << "What is your name?\n";
    std::string b;
    std::cin >> b;
	Player play(1,1,1,1,1);
	
	int vit, str, dex, mag, agi;
	vit = str = dex = mag = agi = 1;
	int Points = 30;
	while (Points > 0)
	{
		std::cout << "Points left: " << Points << "\n";
		std::cout << "1: VIT: " << vit << "\n2: STR " << str << "\n3: DEX " << dex << "\n4: MAG " << mag << "\n5: AGI " << agi << "\n";
		int x;
		std::cin >> x;
		switch (x)
		{
		case 1:
			vit += 1;
			break;
		case 2:
			str += 1;
			break;
		case 3:
			dex += 1;
			break;
		case 4:
			mag += 1;
			break;
		case 5:
			agi += 1;
			break;

		default:
			continue;
		}
		Points -= 1;
		
	};

	Player player(vit, str, dex, mag, agi);
	std::cout << "NAME: " << b << "\n" << "HP: " << player.GetHP() << "\nSPEED: " << player.GetSPE() << "\nVIT: " << player.GetVIT() << "\nSTR " << player.GetSTR() << "\nDEX " << player.GetDEX() << "\nMAG " << player.GetMAG() << "\nAGI " << player.GetAGI() << "\n";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
