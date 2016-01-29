#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <stdbool.h>

#include "asciiArt.h"
#include "endGames.h"
#include "jokePath.h"
using namespace std;



void waitPatiently()
{
	system("cls");
	cout << "Something from behind you comes and releases you from your chains. They compel you to turn your around and look towards the fire. "
		<< "The sudden change in light hurts your eyes, but you dimly begin to see what the shadows actually are.\n";
	cout << "They then drag you along the cave to outside where it is even more blinding. As the shapes of the world come into view marvel at it's beauty.\n\n";
	cout << "1.Go back and tell your fellow prisoners about what you have experienced.\n2.Leave the cave and live your life.\n\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		tellTheOthers(); //leads to endgame
		break;

	case 2:
		leaveTheCave(); //endgame
		break;
	default:
		waitPatiently();
		cin.clear(); cin.ignore();
		break;
	}
	return;
}

void escapeSuccess()
{
	system("cls");
	cout << "You are able to successfully remove the chains and decide to exit the cave.";
	cout << "As you exit the cave, the brightness of the outside sun blinds you for a few moments as your eyes adjust. As the shapes of the world come into view you marvel at its beauty.\n\n";
	cout << "1.Go back and tell your fellow prisoners about what you have experienced.\n2.Leave the cave and live your life.\n\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		tellTheOthers(); //leads to endgame
		break;

	case 2:
		leaveTheCave(); //endgame
		break;
	default:
		escapeSuccess();
		cin.clear(); cin.ignore();
		break;
	}
	return;
}

void smashChains()
{
	cout << endl;
	cout << "You need to roll a 4 or higher\n\nRolling...";
	cout << endl << endl;
	//Decide random outcome
	int ish = rand();
	int ishish = ish % 10;
	int randNum = ishish + 1;
	cout << "You rolled: " << randNum << endl;
	if (randNum >= 4)
	{
		cout << "Success!\n";
		system("pause");
		escapeSuccess();
	}
	else
	{
		cout << "Failure!\n";
		cout << "The sound of the chains against the rock sounds like a gazelle and attracts a lion.\n\n";
		system("pause");
		lionDeath();
	}
	return;
}
//forward declaration
void breakFree();
void aLion();
void shoutIncoherently();

void pickLock()
{
	cout << endl;
	cout << "You need to roll a 9 or 10";
	cout << endl << endl;
	//Decide random outcome
	int ish = rand();
	int ishish = ish % 10;
	int randNum = ishish + 1;
	cout << "You rolled: " << randNum << endl;
	if (randNum >= 9)
	{
		cout << "Success!\n";
		system("pause");
		escapeSuccess();
	}
	else
	{
		bool repeat = false;
		do
		{
			repeat = false;
			cout << "Failure!\n";
			system("pause");
			system("cls");
			cout << "You failed to pick the lock, but no one noticed.\n\n";
			cout << "1.Look around for ways to break free.\n2.Wait patiently\n3.Say you were just kidding! Of COURSE it's a lion!\n\n";
			int choice;
			cin >> choice;
			switch (choice)
			{
			case 1:
				breakFree();
				break;
			case 2:
				waitPatiently();
				break;

			case 3:
				aLion();
				break;
			default:
				cin.clear(); cin.ignore();
				repeat = true;
				break;
			}
		} while (repeat);
	}
	return;
}

void breakFree()
{
	system("cls");
	cout << "You ponder on ways you might escape and come up with a couple of ideas.\n\n";
	cout << "1.Smash chains against a rock. Loud (70% success)\n2.Attempt to pick the lock. Quiet (20% success)\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		smashChains();
		break;

	case 2:
		pickLock();
		break;
	default:
		cin.clear(); cin.ignore();
		breakFree();
		break;

	}
	return;
}

void realityIsHowWeSee()
{
	system("cls");
	cout << "You watch as Aristotle walks out of the cave, too senseless to inspect your own chains.\n"
		<< "After a few minutes he returns and explains that he has seen what true reality is made of. \"What you see on the wall are just representations of the real objects!\"\n\n";
	cout << "1.Try and get the others on your side.\n"
		<< "2.This is what you have been thinking this whole time.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		rallyTheOthers(); //endgame
		break;

	case 2:
		aristotleDiscovers(); //endgame
		break;

	default:
		cin.clear(); cin.ignore();
		realityIsHowWeSee();
		break;
	}
	return;
}

void watchAristotleLeave()
{
	system("cls");
	cout << "You watch as Aristotle walks out of the cave, too senseless to inspect your own chains.\n"
		<< "After a few minutes he returns and explains that he has seen what true reality is made of. \"What you see on the wall are just representations of the real objects!\"\n\n";
	cout << "1.\"That is what I was saying the whole time!\"\n"
		<< "2.Explain that is impossible.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		aristotleDiscovers(); //endgame
		break;

	case 2:
		realityIsHowWeSee(); //endgame
		break;

	default:
		cin.clear(); cin.ignore();
		watchAristotleLeave();
		break;
	}
	return;
}

void keepRambling()
{
	system("cls");
	cout << "You continue rambling about nothing in particular. \n\"Clearly you aren't paying any attention to what I have to say.\" responds Aristotle. He begins to try to look for a way to escape from his bonds.\n\n"
		<< "In frustration, Aristotle stands up, realizing that his chains are actually not attached to anything. All the while, you continue to rant and rave about things no one cares about.\n\n";
	cout << "1.Keep rambling.\n"
		<< "2.Watch Aristotle walk out of the cave.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		keepRambling();
		break;

	case 2:
		watchAristotleLeave();
		break;

	default:
		cin.clear(); cin.ignore();
		keepRambling();
		break;
	}
	return;
}

void ballAndCylinder()
{
	system("cls");
	cout << "You don't really see how this is helpful, but you point out a ball and a cylinder. The ball appears as though it would fit perfectly inside the cylinder. Archimedes is a little more excited than you expected.\n"
		<< "\"Oh that's the perfect solution to this riddle!\" He speaks of a riddle inscribed on a stone tablet in the room.\n"
		<< "The riddle reads: \"If you inscribe a sphere inside a cylinder, what is the ratio of the sphere to the cylinder?\" Archimedes confidently answers \"two-thirds\" and the chains fall off of everyone's wrists.\n\n";
	system("pause");

	archimedesEnding();
	return;
}

void reflectiveMaterial()
{
	system("cls");
	cout << "You look around and see a pile of reflective material on the ground. You point this out to Archimedes and he looks thrilled.\n"
		<< "You reach and slide the pieces over to Archimedes. After a couple of minutes he has fashioned a dish-shaped structure. He uses the light from behind everyone, focuses it with his device, and burns through the metal chains with a brilliant flash of  light.\n"
		<< "Oohs and aahs all around. He then proceeds to cut off the chains of everyone else.\n\n";
	system("pause");
	archimedesEnding();
	
	return;
}

void waitForStrike();

void strikeFirst()
{
	system("cls");
	cout << "In a blind rage, you swing your sword at Aristotle. But, you realize that you are actually still chained to the ground. So you end up just looking really stupid.\n\n";
	cout << "One of the other cave-members shouts \"STOP! CAN YOU NOT SEE THIS FIGHTING IS TEARING US ALL APART!\" It's the famous Archimedes.\n"
		<< "\"I have an idea on how we can all escape, but I need your help. Look around for things that I can use to get us out of here.\"\n\n";
	cout << "1.?\n2.?\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		reflectiveMaterial();
		break;

	case 2:
		ballAndCylinder();
		break;

	default:
		cin.clear(); cin.ignore();
		waitForStrike();
		break;
	}
	return;
}

void waitForStrike()
{
	system("cls");
	cout << "In a blind rage, Aristotle swings his sword at you But, he realizes that he is actually still chained to the ground. So he ends up just looking really stupid.\n\n";
	cout << "One of the other cave-members shouts \"STOP! CAN YOU NOT SEE THIS FIGHTING IS TEARING US ALL APART!\" It's the famous Archimedes.\n"
		<< "\"I have an idea on how we can all escape, but I need your help. Look around for things that I can use to get us out of here.\"\n\n";
	cout << "1.?\n2.?\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		reflectiveMaterial();
		break;

	case 2:
		ballAndCylinder();
		break;

	default:
		cin.clear(); cin.ignore();
		waitForStrike();
		break;
	}
	return;
}

void drawYourSword()
{
	system("cls");
	cout << "In a fury, you draw your samurai sword, commanding Aristotle to draw his own. Aristotle draws his sword and you both stare into each other's eyes.\n\n";
	hercules();
	cout << endl << endl;
	cout << "1.Wait for him to strike.\n"
		<< "2.Strike first.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		waitForStrike();
		break;

	case 2:
		strikeFirst();
		break;

	default:
		cin.clear(); cin.ignore();
		drawYourSword();
		break;
	}
	return;
}
void sayNothing();
void continueToDebate()
{
	system("cls");
	cout << "You continue to argue that a person would not be able to recognize an object if it did not relate back to a Form. You say \"before we were born, we must have been shown all of the Forms of objects so that when we came into life we would be able to recognize them. Matter is inherently imperfect, as shown by: regardless of how precise of a tool you may use, you will never be able to perfectly draw a right angle.\"";
	cout << "Aristotle responds by saying \"You can't test conclusions because setting up such an experiment changes the conditions of the experiment. These things would need to be observed in a natural environment.\"\n\n";
	cout << "1.Place bets that he is wrong.\n"
		<< "2.Accept philosophical defeat.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << endl;
		cout << "How much Drachma would you like to bet?\nAmount: ";
		cin >> betAmount;
		cout << "Alright, then. " << betAmount << " Drachma it is.\n\n";
		cout << "1.Look around for ways to break free.\n2.Wait patiently\n3.Say you were just kidding! Of COURSE it's a lion!\n\n";
		int choice2;
		cin >> choice2;
		switch (choice2)
		{
		case 1:
			breakFree();
			return;
			break;
		case 2:
			waitPatiently();
			return;
			break;

		case 3:
			aLion();
			return;
			break;
		default:
			cin.clear();
			cin.clear(); cin.ignore();
			sayNothing();
			break;
		}
	case 2:
		acceptAristotleTruth(); //endgame
		break;

	default:
		cin.clear(); cin.ignore();
		continueToDebate();
		break;
	}
	return;
}

void questionHisThoughts()
{
	system("cls");
	cout << "You consider what he has said and ask: \"Where do you think these shadows come from ? What made them ?\" You then put forth the idea that these objects are based off of an ideality, which we can call the Form.\n\n"
		<< "Aristotle responds that these things are more than just a representation of a Form. They also carry with them a potential. They can change shape into different objects. So they do not necessarily relate back to a single Form. He calls this ability to change an object's 'potential'.\n\n";
	cout << "1.Continue to debate.\n"
		<< "2.Accept his explanation of the truth.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		continueToDebate();
		break;

	case 2:
		acceptAristotleTruth(); //endgame
		break;

	default:
		cin.clear(); cin.ignore();
		questionHisThoughts();
		break;
	}
	return;
}

void hearHimOut()
{
	system("cls");
	cout << "Aristotle continues: \"Can you not see how the creature is in a constant state of fluctuation? It is merely the beginning of something new. We can use our own observations to conclude this.\"\n\n";
	cout << "1.Question his thoughts.\n"
		<< "2.His insolence infuriates you.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		questionHisThoughts();
		break;

	case 2:
		drawYourSword();
		break;

	default:
		cin.clear(); cin.ignore();
		hearHimOut();
		break;
	}
	return;
}

void keepRanting()
{
	system("cls");
	cout << "You continue: \"You don't see what I'm saying though, man. It's like the idea of a right triangle. It can only truly exist in your mind. No matter how hard you try, it can never be physically realized.\n"
		<< "Aristotle has a quizzical look on his face. \"What does that have to do with what I was talking about?\"\n\n";
	cout << "1.Continue to ignore him.\n"
		<< "2.Hear him out.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		keepRambling();
		break;

	case 2:
		hearHimOut();
		break;

	default:
		cin.clear(); cin.ignore();
		keepRanting();
		break;
	}
	return;
}

void representation()
{
	system("cls");
	cout << "You tell Aristotle that you believe the shadow, as he calls it, is not its own being, but just a representation of the actual thing.\n"
		<< "\"That's pretty much what I just said.\" responds Aristotle.\n\n";
	cout << "1.Completely ignore him and continue with rant.\n"
		<< "2.Hear him out.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		keepRanting();
		break;

	case 2:
		hearHimOut();
		break;

	default:
		cin.clear(); cin.ignore();
		representation();
		break;
	}
	return;
}

void nothingSpecial()
{
	system("cls");
	cout << "You believe that Aristotle speaks foolishly. You explain that you have seen these shapes your entire life and they have never changed.\n\n";
	cout << "1.Keep rambling.\n"
		<< "2.Watch Aristotle walk out of the cave.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		keepRambling();
		break;

	case 2:
		watchAristotleLeave();
		break;

	default:
		cin.clear(); cin.ignore();
		keepRambling();
		break;
	}
	return;
}

void stopShouting()
{
	cout << "One of the other people, whose name you've concluded to be Aristotle, says that he thinks it is just a shadow on a wall. But the shadow is only the beginning. It must just be the beginning of an evolution.\n\n";
	cout << "How do you respond?\n\n";
	cout << "1.That's impossible. It is merely a representation of the true version of the object.\n2.There is nothing special about these shapes.\n\n";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
		representation();
		break;

	case 2:
		nothingSpecial();
		break;
	default:
		cin.clear(); cin.ignore();
		stopShouting();
		break;
	}
}

void aLion()
{
	system("cls");
	cout << "Nods and murmurs of agreement. \"Yeah okay.Lion.That sounds cool.You're pretty cool, man.\" They seem to accept you as one of them.\n";
	stopShouting();
	return;
}

void aShadow()
{
	system("cls");
	cout << "They laugh at you. \"Pffft.A shadow!Who does this man think he is!? CLEARLY that is a lion!\"\n\n";
	cout << "1.Look around for ways to break free.\n2.Wait patiently\n3.Say you were just kidding! Of COURSE it's a lion!\n\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		breakFree();
		break;
	case 2:
		waitPatiently();
		break;

	case 3:
		aLion();
		break;
	default:
		cin.clear();
		cin.clear(); cin.ignore();
		aShadow();
		break;
	}
	return;
}

void sayNothing()
{
	system("cls");
	cout << "They say \"Oh have we a mute here ?\" They turn away from you in disgust and continue naming things that pass by on the wall.\n\n";
	cout << "1.Look around for ways to break free.\n2.Wait patiently\n3.Say you were just kidding! Of COURSE it's a lion!\n\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		breakFree();
		break;
	case 2:
		waitPatiently();
		break;

	case 3:
		aLion();
		break;
	default:
		cin.clear();
		cin.clear(); cin.ignore();
		sayNothing();
		break;
	}
	return;
}

void lookAround()
{
	system("cls");
	cout << "You notice there are several people on either side of you chained in a fashion similar to your own. "
		<< "All of you are facing a wall where you can see shadowy figures slither across.\n";
	cout << "The others begin naming the shapes. A dog. A pot... They ask you, what do you think that is?\n\n";
	dragon();
	cout << endl;
	cout << "1.Say nothing\n2.\"Uh I think that's just a shadow\"\n3.\"Oh that's definitely a lion.\"\n4.Shout incoherently\n";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		sayNothing();
		break;
	case 2:
		aShadow();
		break;

	case 3:
		aLion();
		break;

	case 4:
		shoutIncoherently();
		break;
	default:
		cin.clear();
		cin.clear(); cin.ignore();
		lookAround();
		break;
	}
	return;

}

void wakeUp()
{
	betAmount = 0;
	system("cls");
	cout << "You wake up to find yourself in a cave, chained to the floor and facing a wall.\n\n";
	cout << "Do you:\n\n1.Go back to sleep\n2.Look around\n";
	int choice2;
	cin >> choice2;
	switch (choice2)
	{
	case 1:
		lionDeath();
		break;

	case 2:
		lookAround();
		break;
	default:
		cin.clear();
		cin.clear(); cin.ignore();
		wakeUp();
		break;
	}
	return;
}

void instructions()
{
	cout << "Welcome to a game. An interesting game. A game where you are in a cave.\n"
		<< "In case you are unaware, this is supposed to be like Plato's allegory of the cave.\n"
		<< "Look it up, it's a good one.\n\n"
		<< "You will be presented with some text at the top of each page and some choices.\n"
		<< "How you choose is up to you! Just type the option number and hit enter.\n\n\n";
	cout << "If you are of the teacher persuasion, make sure you check out the README.\n\n";
	system("pause");
}

void welcome()//instructions
{
	system("cls");
	//print instructions and stuff. ascii art probs
	//cout << "================================================================================";
	//cout << "======                                                                    ======";
	//cout << "==                             Plato and the Cave                             ==";
	//cout << "======                                                                    ======";
	//cout << "================================================================================";
	//cout << "\n";
	//cout << "\n";

	title();
	cout << "\n\t\t\t\t\t\tMaximize the window!\n\n";
	cout << "\n";
	cout << "\n";
	cout << "Please type either 1 or 2.\n\n";
	cout << "1.Play Game.\n2.Show help and instructions.\n\n";
	int playChoice;
	cin >> playChoice;
	if (playChoice == 2)
	{
		instructions();
	}
	//first decision
	cout << "What is your name?\n\n1.Plato\n2.Enter a name.\n";
	string name = "";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Hi, Plato.\n";
		system("pause");
		break;
	case 2:
		cout << "Alright then. What is it? Go ahead. Type it in.\n";
		cin >> name;
		cout << endl;
		system("cls");//clear screen
		cout << name << "? That's terrible. I'm going to call you Plato.\n";
		system("pause");
		break;
	default:
		cin.clear();
		cin.clear(); cin.ignore();
		welcome();
		break;
	}

	wakeUp();

	return;
}

