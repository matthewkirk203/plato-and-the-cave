#pragma once
#include <iostream>
#include <Windows.h>
#define DURATION 500

#include "asciiArt.h"

using namespace std;
int betAmount;
void marioEnd()
{
	Beep(523.251, DURATION);//C
	Beep(391.995, DURATION);//G
	Beep(329.628, DURATION);//E
	Beep(440, DURATION/2);//A
	Beep(493.883, DURATION/2);//B
	Beep(440, DURATION/2);//A
	Beep(415.305, DURATION/2);//Ab
	Beep(466.164, DURATION/2);//A#
	Beep(415.305, DURATION/2);//Ab
	Beep(391.995, 2*DURATION);//G hold
	return;
}

void marioClear()
{
	/*
	G C E G+ C+ E+ G+ E+
	*/
	// A# D F G# D F A# - A# A# A# C
	Beep(233.082, DURATION/3);
	Beep(293.665, DURATION/3);
	Beep(349.228, DURATION/3);
	Beep(415.305, DURATION / 3);
	Beep(587.330, DURATION / 3);
	Beep(698.456, DURATION / 3);
	Beep(932.328, DURATION*4/3);
	Beep(932.328, DURATION / 3);
	Beep(932.328, DURATION / 3);
	Beep(932.328, DURATION / 3);
	Beep(1046.50, DURATION*2);
	return;
}


void freeComrades()
{
	system("cls");
	cout << "You look around the cave and see a rack of weapons. There are swords, axes, maces, and the like. You decide to take one of the swords and use it to slice through all of your comrades chains. Each time you slice through another set of chains, the crowd cheers a little louder and gets you a little more pumped up. You finally cut through everyone's chains When you realize how tiring being a hero is. You take a quick break, but, without your knowlege, one of your detractors stuck over to the weapon rack. He comes up behind you and cracks you across the skull. You die.\n\n";
	cout << "Score: 60% Plato. With a jump in your step you relished in the opportunity to help your comrades, but it ultimately got you killed.\n\n";

	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void stayInCave()
{
	system("cls");
	cout << "You have freed everyone and are fully capable of leaving, but you decide to stay in the cave. Perhaps it is because you are afraid your realities may be shattered by leaving the cave. You set up a sort of commune, where all of you live and die in the cave and continue to name the things on the wall.\n\n";
	cout << "Score: 50% You decided to stay in the cave despite the knowledge that may have been gained after leaving.\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void leadEveryoneOutOfTheCave()
{
	system("cls");
	cout << "You lead everyone out of the cave. When you reach outside you are blinded by the intense light. After a moment you begin to see what life is truly like. You can feel wind in your hair, the warmth of the sun on your face, and the clean air in your lungs. You follow the path outside the cave into your new life with your new family.\n\n";
	cout << "Score: 80% You realized what life was actually like outside of the cave and you brought others to join with you in this knowledge. However, you still have not come to the conclusion of the Form of things.\n\n";

	cout << "Game Over. ";
	marioClear();
	system("pause");
	return;
}

void calmScientists()
{
	system("cls");
	cout << "The German scientists immediately restrain you, you feel incredibly foolish, and apologize to everyone.\n"
		<< "They agree to let you go so long as you agree to come back 2-3 times a week for further psychiatric consulation.\n\n"
		<< "Score: 5% Some guy who met Plato once in passing and decided he thoroughly did not like him.\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void platoIsGod()
{
	system("cls");
	cout << "You are successful and are now the leader of everyone in the \"cave\" and the time-travelling German scientists. \n"
		<< "You take over their technology and travel through time teaching everyone your \"philosophy of life\".\n"
		<< "You are the master of all things past, present, and future. You have become Plato in a completely new sense of the word.\n"
		<< "You live forever, and have never lived. If modern philosophers could have studied your lifeline, they would have all the answers to their questions.\n\n"
		<< "Score: 0% Plato - However, you control everything. therefore 100% Plato. I'm sorry master, please don't hurt me.\n\n";
	if (betAmount > 0)
		cout << "Also, Aristotle hands you " << betAmount*10000 << " Drachma. Nice!\n\n";

	cout << "Game Over...? ";
	marioClear();
	system("pause");
	dragon();
	system("pause");
	return;
}

void acceptAristotleTruth()
{
	system("cls");
	cout << "You concede to Aristotle's explanation.\n\n";
	cout << "Score 60% You fought for a little bit in your belief of the Forms, but you ultimately were convinced by the philosophies of your own pupil, Aristotle.\n\n";
	if (betAmount > 0)
		cout << "Also, you hand Aristotle " << betAmount << " Drachma. Shucks!\n\n";

	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void archimedesEnding()
{
	system("cls");
	cout << "With the help of Archimedes's incredible intellect, you are able to free everyone from their bonds. You then proceed to look around with your fellow prisoners and discover what reality was like all along.\n"
		<< "You lead everyone outside and are able to live a life of freedom.\n"
		<< "Score: 90% You were able to realize what reality was like, but you had to have Archimedes run the show.\n\n";

	if (betAmount > 0)
		cout << "Also, Aristotle hands you " << betAmount << " Drachma. Nice!\n\n";

	cout << "Game Over. ";
	marioClear();
	system("pause");
	return;
}

void aristotleDiscovers()
{
	system("cls");
	cout << "Aristotle scoffs at your sad attempt to take credit for his discovery. The other people in the cave all stand up and follow Aristotle out of the cave.\n"
		<< "You stay, chained to the ground by nothing but your imagination yelling into the darkness. You will never know what exists beyond this wall, and part of you has already accepted this.\n"
		<< "Score: 30% You let someone else discover the true Form of things. You were close, kind of. Try a little harder next time and you might actually contribute to something.\n\n";
	if (betAmount > 0)
		cout << "Also, Aristotle hands you " << betAmount << " Drachma. Nice!\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void rallyTheOthers()
{
	system("cls");
	cout << "You rally the other cave-members to agree that Aristotle is wrong and drive him out of the cave. As Aristotle tries to find his way out of the cave again, he falls into a large hole and dies.\n"
		<< "You and the other cave-members go back to staring at the wall and naming the shapes that go by.\n"
		<< "Score: 15% You had an idea going there for you, but you let it slip. You contradicted yourself a lot. Now the world will never know of the true idea of the Form of things as all of you die in the cave shortly thereafter.\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void getInTheBoat()
{
	system("cls");
	cout << "You run down to the boat and get in. Somehow sailing comes naturally and you begin to sail towards the horizon.\n"
		<< "Suddenly your boat hits something. A wall painted like the sky. \"What is a wall doing out here?\" you think to yourself.\n"
		<< "You see a staircase leading up the side of the wall. You ascend the staircase and are greeted by a pair of German scientists, who seem surprised to see you.\n"
		<< "They begin to shake and plead \"Please don't hurt us, oh mighty Plato.\" Truly you are the greatest of all the philosophers, having seen the true Form of things.\n\n";
	cout << "You have seen through the lies and into the true Form, but in a pretty bizarre way.\n"
		<< "Score: 50% Plato.\n\n";
	cout << "Game Over. ";
	marioClear();
	system("pause");
	return;
}

void aeroStar()
{
	system("cls");
	cout << "You utterly fail and look like an idiot. A door in the rock face slides open and a pair of time-travelling German scientists emerge.\n";
	cout << "\"Alright everyone, the test is over.Plato over here ruined it.\" they say.\n";
	cout << "Flood lights come on and the scientists unchain everyone. \"Unfortunately, we will be unable to pay any of you for participating in the study. Your memories will be returned to you and you may continue with your lives.\"\n\n";
	cout << "Score: 0% Plato. This did not happen. Like, at all.\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void bearDeath()
{
	system("cls");
	cout << "You are mauled to death by a bear. Like, a huge huge bear. Like the one you dream about, but not in a good way.\n\n";
	cout << "Score: 10% Plato. You acted pretty crazy, and a lot of people definitely thought he was crazy.\n\n";
	cout << "Game Over. ";
	marioEnd();
	system("pause");
	return;
}

void lionDeath()
{
	system("cls");
	cout << "You were mauled to death by a lion.\n\nScore: 0% Plato. You got immediately mauled to death. I shouldn't need to explain.\n\nGame Over. ";
	marioEnd();
	system("pause");
	return;
}

void tellTheOthers()
{
	system("cls");
	cout << "You go back to tell the others what you have discovered. \"Everyone! I have seen things as they truly are! What you see on this wall is mere a shadow of the reality. I have seen the From of these things!\" you exclaim.\n";
	cout << "You are met with much doubt and skepticism as they tell you that they have known what they see all along. It can be nothing different.\n\n";
	cout << "Undisturbed, you go on to spread your new found revelations to others in hopes of giving everyone the same knowledge of the Forms.\n\n";
	cout << "Score: 100% Plato. You have ascended to the rank of true Plato. You have a true understanding of the world of forms and want to share it with others.\n\n";
	if (betAmount > 0)
		cout << "Also, Aristotle hands you " << betAmount << " Drachma. Nice!\n\n";
	cout << "Game Over. ";
	marioClear();
	system("pause");
	return;
}

void leaveTheCave()
{
	system("cls");
	cout << "You go outside and live your life as a normal person. You don't try and spread the knowledge you have gained, but instead keep it to yourself.\nScore: 80 % Plato.You have come to the realization of the form of things but were unwilling to try and englighten those around you.";
	cout << "\nGame Over. ";
	marioClear();
	system("pause");
	return;
}