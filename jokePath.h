#pragma once

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include "endGames.h"
#include "choices.h"

using namespace std;

void acceptWarriorRole();
void runOutOfTheCave()
{
	system("cls");
	cout << "As you exit the cave you are blinded by the intense light, but you feel such incredible power that you just power through it. "
		<< "You look around, taking it the surroundings. You see a road leading down to a small dock where there sits a boat.\n\n";
	cout << "1.Wait for you eyes to adjust more\n"
		<< "2.Run down and get in the boat.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		cout << endl << endl;
		cout << "You feel a crack across your head...\n\n";
		system("pause");
		wakeUp();
		break;

	case 2:
		getInTheBoat(); //endgame
		break;

	default:
		runOutOfTheCave();
		std::cin.ignore();
		break;
	}
	return;
}

void resortToViolence()
{
	system("cls");
	cout << "A door in the rock face slides open and a pair of time travelling German scientists emerge.\n"
		<< "\'Alright everyone, the test is over. Plato over here ruined it.\' they say. \'Your memories will be returned shortly.\'\n\n";
	cout << "1.Attempt to rectify the situation by explaining you were not yourself.\n"
		<< "2.Accept your new identity as cave dictator and attempt to indoctrinate the German scientists by whatever means necessary. (10% chance)\n\n";
	int ish, ishish, randNum;
	int choice;
	std::cin >> choice;
	
	switch (choice)
	{
	case 1:
		calmScientists(); //endGame
		break;

	case 2:
		cout << endl << endl;
		cout << "You need to roll a 10.\n\nRolling...";
		cout << endl << endl;
		//Decide random outcome
		ish = rand();
		ishish = ish % 10;
		randNum = ishish + 1;
		cout << "You rolled: " << randNum << endl;
		if (randNum == 10)
		{
			cout << "Success!\n";
			system("pause");
			platoIsGod();
		}
		else
		{
			cout << "Failure!\n";
			system("pause");
			calmScientists();
		}
		break;

	default:
		resortToViolence();
		std::cin.ignore(); std::cin.clear();
		break;
	}
}

void indoctrinateEveryone()
{
	system("cls");
	cout << "The children, women, and some of the smaller men readily join. Some of the more rebellious ones hesitate.\n\n";
	cout << "1.Free your new comrades.\n"
		<< "2.Resort to violence.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		freeComrades();//endgame
		break;

	case 2:
		resortToViolence();
		break;

	default:
		indoctrinateEveryone();
		std::cin.ignore();
		break;
	}
	return;
}

void commandLoyalty()
{
	system("cls");
	cout << "Everyone in the cave quivers in fear, you know none will betray you now.\n\n";
	cout << "1.Give a motivational speech\n"
		<< "2.Attempt to indoctrinate everyone into your newly created dictatorship.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		cout << "You stand upon a rock and begin to speak at your crowd. \"Friends, prisoners, countrymen, lend me your ears.We are in a strange land. We have no knowledge of where we have been. Perhaps this is where we have always been.However, we can become more. We can rise above. We can discover the world!\"\n";
		cout << "You are met with some slightly confused cheering by the majority of the prisoners.\n\n";
		system("pause");
		acceptWarriorRole();
		break;

	case 2:
		indoctrinateEveryone();
		break;

	default:
		std::cin.ignore(); cin.clear();
		commandLoyalty();
		
		break;
	}
	return;
}

void yes()
{
	system("cls");
	cout << "A shining smile on your face, you approach the man who spoke up. You reach down and also rip his chains apart.\n"
		<< "The rest of the prisoners are stunned, but in a good way. They begin to cheer and yell for you. You go to each of the others in the cave and also free them from their bonds. Among the cave-dwellers are people such as Aristotle and Archimedes. You have become greater than themselves in the eyes of those around you.\n\n";
	cout << "1.Lead everyone out of the cave.\n"
		<< "2.Stay in the cave.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		leadEveryoneOutOfTheCave(); //endgame
		break;

	case 2:
		stayInCave(); //endgame
		break;

	default:
		cin.clear(); cin.ignore();
		yes();
		break;
	}
	return;
}

void acceptWarriorRole()
{
	system("cls");
	cout << "A timid person who you had not noticed before, now speaks up. \"Please will you also free me from these chains?\"\n\n";
	cout << "1.Yes\n2.No.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		yes();
		break;

	case 2:
		resortToViolence();
		break;

	default:
		cin.clear(); cin.ignore();
		acceptWarriorRole();
		break;
	}
	return;
}

void explainYourself()
{
	system("cls");
	cout << "\"So you're saying you just broke out of them?\" The group is divided in their opinion of you. Half of them now respect you as a great warrior, and the other half is suspicious of your loyalities.\n\n";
	cout << "1.Command the undying loyalty of everyone in the cave, with a threatening \"Or else...\"\n"
		<< "2.Reassure the group that you are still on their side\n"
		<< "3.Accept the new-founded role of warrior the group has given you.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		commandLoyalty();
		break;

	case 2:
		cout << endl << endl;
		cout << "The group is now 75% trusting of you.\n\n";
		system("pause");
		acceptWarriorRole();
		break;

	case 3:
		acceptWarriorRole();
		break;

	default:
		explainYourself();
		std::cin.ignore();
		break;
	}
	return;
}

void addressEveryoneAroundYou()
{
	system("cls");
	cout << "You are greeted by an array of mixed emotions. It is clear no one knows how to react.\n\n";
	cout << "1.Run out of the cave\n"
		<< "2.Attempt to explain yourself\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		runOutOfTheCave();
		break;

	case 2:
		explainYourself();
		break;
		 
	default:
		addressEveryoneAroundYou();
		std::cin.ignore();
		break;
	}
	return;
}

void doNothing()
{
	system("cls");
	cout << "You are fairly suprised that you could even have broken the chains that easily and stand in silence.\n\n";
	cout << "1.Run out of the cave\n"
		<< "2.Attempt to explain yourself\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		runOutOfTheCave();
		break;

	case 2:
		explainYourself();
		break;

	default:
		doNothing();
		std::cin.ignore();
		break;
	}
	return;
}

void tearApartChainsSuccess()
{
	system("cls");
	cout << "In a moment of pure strength you shatter your chains.\n\n";
	cout << "1.Address everyone around you\n"
		<< "2.Do nothing\n"
		<< "3.Immediately run out of the cave.\n\n";
	int choice;
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		addressEveryoneAroundYou();
		break;

	case 2:
		doNothing();
		break;
		
	case 3:
		runOutOfTheCave();
		break;

	default:
		tearApartChainsSuccess();
		std::cin.ignore();
		break;

	}
	return;
}

void tearApartChains()
{
	cout << endl;
	cout << "You need to roll a 6 or higher\n\nRolling...";
	cout << endl << endl;
	//Decide random outcome
	int ish = rand();
	int ishish = ish % 10;
	int randNum = ishish + 1;
	cout << "You rolled: " << randNum << endl;
	if (randNum >= 6)
	{
		cout << "Success!\n";
		system("pause");
		tearApartChainsSuccess();
	}
	else
	{
		cout << "Failure!\n";
		system("pause");
		aeroStar();
	}
	return;
}

void shoutMore()
{
	system("cls");
	cout << "\"Alright, pal.Calm down.You might attract a bear or something.\"\n\n";
	cout << "1.Stop shouting.\n2.Keep shouting.\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		stopShouting();
		break;

	case 2:
		bearDeath();
		break;
	default:
		shoutMore();
		std::cin.ignore();
		break;
	}
	return;
}

void shoutIncoherently()
{
	system("cls");
	cout << "You begin shouting random things that are completely incomprehensible. The others are speechless as they stare at you\n\n";
	cout << "1.Shout more\n2.Tear apart the chains that bind you. (50% chance of success)\n\n";
	int choice;
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		shoutMore();
		break;

	case 2:
		tearApartChains();
		break;
	default:
		shoutIncoherently();
		std::cin.ignore();
		break;
	}
	return;
}