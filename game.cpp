#include "game.h"
#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>

using namespace std;

void game::loadFromFile(sf::RenderWindow& window)
{
	window.setMouseCursorVisible(false);

	int index = 0;
	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	_spriteLoadingScreen.setPosition(sf::Vector2f(640 - (_spriteLoadingScreen.getGlobalBounds().width / 2), 360 - (_spriteLoadingScreen.getGlobalBounds().height / 2)));

	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTexturePanah.loadFromFile("img/Anak Panah/arrow.png");
	tempTexturePanah.setSmooth(true);

	tempTextureHealth = new sf::Texture[16];
	tempTextureHealth[0].loadFromFile("img/Health Bar/Health bar0_[empty].png");
	tempTextureHealth[1].loadFromFile("img/Health Bar/Health bar1.png");
	tempTextureHealth[2].loadFromFile("img/Health Bar/Health bar2.png");
	tempTextureHealth[3].loadFromFile("img/Health Bar/Health bar3.png");
	tempTextureHealth[4].loadFromFile("img/Health Bar/Health bar4.png");
	tempTextureHealth[5].loadFromFile("img/Health Bar/Health bar5.png");
	tempTextureHealth[6].loadFromFile("img/Health Bar/Health bar6.png");
	tempTextureHealth[7].loadFromFile("img/Health Bar/Health bar7.png");
	tempTextureHealth[8].loadFromFile("img/Health Bar/Health bar8.png");
	tempTextureHealth[9].loadFromFile("img/Health Bar/Health bar9.png");
	tempTextureHealth[10].loadFromFile("img/Health Bar/Health bar10_[Normal].png");
	tempTextureHealth[11].loadFromFile("img/Health Bar/Health bar11.png");
	tempTextureHealth[12].loadFromFile("img/Health Bar/Health bar12.png");
	tempTextureHealth[13].loadFromFile("img/Health Bar/Health bar13.png");
	tempTextureHealth[14].loadFromFile("img/Health Bar/Health bar14.png");
	tempTextureHealth[15].loadFromFile("img/Health Bar/Health bar15_[full].png");
	for (int i = 0; i < 16; i++)
	{
		tempTextureHealth[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingGolem = new sf::Texture[12];
	tempTextureAttackingGolem[0].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_000.png");
	tempTextureAttackingGolem[1].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_001.png");
	tempTextureAttackingGolem[2].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_002.png");
	tempTextureAttackingGolem[3].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_003.png");
	tempTextureAttackingGolem[4].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_004.png");
	tempTextureAttackingGolem[5].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_005.png");
	tempTextureAttackingGolem[6].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_006.png");
	tempTextureAttackingGolem[7].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_007.png");
	tempTextureAttackingGolem[8].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_008.png");
	tempTextureAttackingGolem[9].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_009.png");
	tempTextureAttackingGolem[10].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_010.png");
	tempTextureAttackingGolem[11].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Attacking/Golem_01_Attacking_011.png");
	for (int i = 0; i < 12; i++)
	{
		tempTextureAttackingGolem[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingGolem2 = new sf::Texture[12];
	tempTextureAttackingGolem2[0].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_000.png");
	tempTextureAttackingGolem2[1].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_001.png");
	tempTextureAttackingGolem2[2].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_002.png");
	tempTextureAttackingGolem2[3].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_003.png");
	tempTextureAttackingGolem2[4].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_004.png");
	tempTextureAttackingGolem2[5].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_005.png");
	tempTextureAttackingGolem2[6].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_006.png");
	tempTextureAttackingGolem2[7].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_007.png");
	tempTextureAttackingGolem2[8].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_008.png");
	tempTextureAttackingGolem2[9].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_009.png");
	tempTextureAttackingGolem2[10].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_010.png");
	tempTextureAttackingGolem2[11].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Attacking/Golem_02_Attacking_011.png");
	for (int i = 0; i < 12; i++)
	{
		tempTextureAttackingGolem2[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingGolem3 = new sf::Texture[12];
	tempTextureAttackingGolem3[0].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_000.png");
	tempTextureAttackingGolem3[1].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_001.png");
	tempTextureAttackingGolem3[2].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_002.png");
	tempTextureAttackingGolem3[3].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_003.png");
	tempTextureAttackingGolem3[4].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_004.png");
	tempTextureAttackingGolem3[5].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_005.png");
	tempTextureAttackingGolem3[6].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_006.png");
	tempTextureAttackingGolem3[7].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_007.png");
	tempTextureAttackingGolem3[8].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_008.png");
	tempTextureAttackingGolem3[9].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_009.png");
	tempTextureAttackingGolem3[10].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_010.png");
	tempTextureAttackingGolem3[11].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Attacking/Golem_03_Attacking_011.png");
	for (int i = 0; i < 12; i++)
	{
		tempTextureAttackingGolem3[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingViking1 = new sf::Texture[10];
	tempTextureAttackingViking1[0].loadFromFile("img/Enemy/Viking1/Attack1H/0.png");
	tempTextureAttackingViking1[1].loadFromFile("img/Enemy/Viking1/Attack1H/1.png");
	tempTextureAttackingViking1[2].loadFromFile("img/Enemy/Viking1/Attack1H/2.png");
	tempTextureAttackingViking1[3].loadFromFile("img/Enemy/Viking1/Attack1H/3.png");
	tempTextureAttackingViking1[4].loadFromFile("img/Enemy/Viking1/Attack1H/4.png");
	tempTextureAttackingViking1[5].loadFromFile("img/Enemy/Viking1/Attack1H/5.png");
	tempTextureAttackingViking1[6].loadFromFile("img/Enemy/Viking1/Attack1H/6.png");
	tempTextureAttackingViking1[7].loadFromFile("img/Enemy/Viking1/Attack1H/7.png");
	tempTextureAttackingViking1[8].loadFromFile("img/Enemy/Viking1/Attack1H/8.png");
	tempTextureAttackingViking1[9].loadFromFile("img/Enemy/Viking1/Attack1H/9.png");
	for (int i = 0; i < 10; i++)
	{
		tempTextureAttackingViking1[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingViking2 = new sf::Texture[10];
	tempTextureAttackingViking2[0].loadFromFile("img/Enemy/Viking2/Attack2H/0.png");
	tempTextureAttackingViking2[1].loadFromFile("img/Enemy/Viking2/Attack2H/1.png");
	tempTextureAttackingViking2[2].loadFromFile("img/Enemy/Viking2/Attack2H/2.png");
	tempTextureAttackingViking2[3].loadFromFile("img/Enemy/Viking2/Attack2H/3.png");
	tempTextureAttackingViking2[4].loadFromFile("img/Enemy/Viking2/Attack2H/4.png");
	tempTextureAttackingViking2[5].loadFromFile("img/Enemy/Viking2/Attack2H/5.png");
	tempTextureAttackingViking2[6].loadFromFile("img/Enemy/Viking2/Attack2H/6.png");
	tempTextureAttackingViking2[7].loadFromFile("img/Enemy/Viking2/Attack2H/7.png");
	tempTextureAttackingViking2[8].loadFromFile("img/Enemy/Viking2/Attack2H/8.png");
	tempTextureAttackingViking2[9].loadFromFile("img/Enemy/Viking2/Attack2H/9.png");
	for (int i = 0; i < 10; i++)
	{
		tempTextureAttackingViking2[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingViking3 = new sf::Texture[10];
	tempTextureAttackingViking3[0].loadFromFile("img/Enemy/Viking3/Attack1H/0.png");
	tempTextureAttackingViking3[1].loadFromFile("img/Enemy/Viking3/Attack1H/1.png");
	tempTextureAttackingViking3[2].loadFromFile("img/Enemy/Viking3/Attack1H/2.png");
	tempTextureAttackingViking3[3].loadFromFile("img/Enemy/Viking3/Attack1H/3.png");
	tempTextureAttackingViking3[4].loadFromFile("img/Enemy/Viking3/Attack1H/4.png");
	tempTextureAttackingViking3[5].loadFromFile("img/Enemy/Viking3/Attack1H/5.png");
	tempTextureAttackingViking3[6].loadFromFile("img/Enemy/Viking3/Attack1H/6.png");
	tempTextureAttackingViking3[7].loadFromFile("img/Enemy/Viking3/Attack1H/7.png");
	tempTextureAttackingViking3[8].loadFromFile("img/Enemy/Viking3/Attack1H/8.png");
	tempTextureAttackingViking3[9].loadFromFile("img/Enemy/Viking3/Attack1H/9.png");
	for (int i = 0; i < 10; i++)
	{
		tempTextureAttackingViking3[i].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingSatyr1 = new sf::Texture[12];
	tempTextureAttackingSatyr1[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_000.png");
	tempTextureAttackingSatyr1[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_001.png");
	tempTextureAttackingSatyr1[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_002.png");
	tempTextureAttackingSatyr1[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_003.png");
	tempTextureAttackingSatyr1[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_004.png");
	tempTextureAttackingSatyr1[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_005.png");
	tempTextureAttackingSatyr1[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_006.png");
	tempTextureAttackingSatyr1[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_007.png");
	tempTextureAttackingSatyr1[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_008.png");
	tempTextureAttackingSatyr1[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_009.png");
	tempTextureAttackingSatyr1[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_010.png");
	tempTextureAttackingSatyr1[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Attacking/Satyr_01_Attacking_011.png");
	for (int aa = 0; aa < 12; aa++)
	{
		tempTextureAttackingSatyr1[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingSatyr2 = new sf::Texture[12];
	tempTextureAttackingSatyr2[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_000.png");
	tempTextureAttackingSatyr2[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_001.png");
	tempTextureAttackingSatyr2[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_002.png");
	tempTextureAttackingSatyr2[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_003.png");
	tempTextureAttackingSatyr2[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_004.png");
	tempTextureAttackingSatyr2[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_005.png");
	tempTextureAttackingSatyr2[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_006.png");
	tempTextureAttackingSatyr2[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_007.png");
	tempTextureAttackingSatyr2[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_008.png");
	tempTextureAttackingSatyr2[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_009.png");
	tempTextureAttackingSatyr2[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_010.png");
	tempTextureAttackingSatyr2[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Attacking/Satyr_02_Attacking_011.png");
	for (int aa = 0; aa < 12; aa++)
	{
		tempTextureAttackingSatyr2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingSatyr3 = new sf::Texture[12];
	tempTextureAttackingSatyr3[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_000.png");
	tempTextureAttackingSatyr3[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_001.png");
	tempTextureAttackingSatyr3[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_002.png");
	tempTextureAttackingSatyr3[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_003.png");
	tempTextureAttackingSatyr3[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_004.png");
	tempTextureAttackingSatyr3[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_005.png");
	tempTextureAttackingSatyr3[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_006.png");
	tempTextureAttackingSatyr3[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_007.png");
	tempTextureAttackingSatyr3[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_008.png");
	tempTextureAttackingSatyr3[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_009.png");
	tempTextureAttackingSatyr3[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_010.png");
	tempTextureAttackingSatyr3[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Attacking/Satyr_03_Attacking_011.png");
	for (int aa = 0; aa < 12; aa++)
	{
		tempTextureAttackingSatyr3[aa].setSmooth(true);
	}

	index = 0;
	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureAttackingKnight = new sf::Texture[10];
	tempTextureAttackingKnight[0].loadFromFile("img/Enemy/Knight/Attack1H/0.png");
	tempTextureAttackingKnight[1].loadFromFile("img/Enemy/Knight/Attack1H/1.png");
	tempTextureAttackingKnight[2].loadFromFile("img/Enemy/Knight/Attack1H/2.png");
	tempTextureAttackingKnight[3].loadFromFile("img/Enemy/Knight/Attack1H/3.png");
	tempTextureAttackingKnight[4].loadFromFile("img/Enemy/Knight/Attack1H/4.png");
	tempTextureAttackingKnight[5].loadFromFile("img/Enemy/Knight/Attack1H/5.png");
	tempTextureAttackingKnight[6].loadFromFile("img/Enemy/Knight/Attack1H/6.png");
	tempTextureAttackingKnight[7].loadFromFile("img/Enemy/Knight/Attack1H/7.png");
	tempTextureAttackingKnight[8].loadFromFile("img/Enemy/Knight/Attack1H/8.png");
	tempTextureAttackingKnight[9].loadFromFile("img/Enemy/Knight/Attack1H/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureAttackingKnight[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingGolem = new sf::Texture[18];
	tempTextureWalkingGolem[0].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_000.png");
	tempTextureWalkingGolem[1].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_001.png");
	tempTextureWalkingGolem[2].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_002.png");
	tempTextureWalkingGolem[3].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_003.png");
	tempTextureWalkingGolem[4].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_004.png");
	tempTextureWalkingGolem[5].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_005.png");
	tempTextureWalkingGolem[6].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_006.png");
	tempTextureWalkingGolem[7].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_007.png");
	tempTextureWalkingGolem[8].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_008.png");
	tempTextureWalkingGolem[9].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_009.png");
	tempTextureWalkingGolem[10].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_010.png");
	tempTextureWalkingGolem[11].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_011.png");
	tempTextureWalkingGolem[12].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_012.png");
	tempTextureWalkingGolem[13].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_013.png");
	tempTextureWalkingGolem[14].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_014.png");
	tempTextureWalkingGolem[15].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_015.png");
	tempTextureWalkingGolem[16].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_016.png");
	tempTextureWalkingGolem[17].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Walking/Golem_01_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingGolem[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingGolem2 = new sf::Texture[18];
	tempTextureWalkingGolem2[0].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_000.png");
	tempTextureWalkingGolem2[1].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_001.png");
	tempTextureWalkingGolem2[2].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_002.png");
	tempTextureWalkingGolem2[3].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_003.png");
	tempTextureWalkingGolem2[4].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_004.png");
	tempTextureWalkingGolem2[5].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_005.png");
	tempTextureWalkingGolem2[6].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_006.png");
	tempTextureWalkingGolem2[7].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_007.png");
	tempTextureWalkingGolem2[8].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_008.png");
	tempTextureWalkingGolem2[9].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_009.png");
	tempTextureWalkingGolem2[10].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_010.png");
	tempTextureWalkingGolem2[11].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_011.png");
	tempTextureWalkingGolem2[12].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_012.png");
	tempTextureWalkingGolem2[13].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_013.png");
	tempTextureWalkingGolem2[14].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_014.png");
	tempTextureWalkingGolem2[15].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_015.png");
	tempTextureWalkingGolem2[16].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_016.png");
	tempTextureWalkingGolem2[17].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Walking/Golem_02_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingGolem2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingGolem3 = new sf::Texture[18];
	tempTextureWalkingGolem3[0].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_000.png");
	tempTextureWalkingGolem3[1].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_001.png");
	tempTextureWalkingGolem3[2].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_002.png");
	tempTextureWalkingGolem3[3].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_003.png");
	tempTextureWalkingGolem3[4].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_004.png");
	tempTextureWalkingGolem3[5].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_005.png");
	tempTextureWalkingGolem3[6].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_006.png");
	tempTextureWalkingGolem3[7].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_007.png");
	tempTextureWalkingGolem3[8].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_008.png");
	tempTextureWalkingGolem3[9].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_009.png");
	tempTextureWalkingGolem3[10].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_010.png");
	tempTextureWalkingGolem3[11].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_011.png");
	tempTextureWalkingGolem3[12].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_012.png");
	tempTextureWalkingGolem3[13].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_013.png");
	tempTextureWalkingGolem3[14].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_014.png");
	tempTextureWalkingGolem3[15].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_015.png");
	tempTextureWalkingGolem3[16].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_016.png");
	tempTextureWalkingGolem3[17].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Walking/Golem_03_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingGolem3[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingViking1 = new sf::Texture[10];
	tempTextureWalkingViking1[0].loadFromFile("img/Enemy/Viking1/Walk/0.png");
	tempTextureWalkingViking1[1].loadFromFile("img/Enemy/Viking1/Walk/1.png");
	tempTextureWalkingViking1[2].loadFromFile("img/Enemy/Viking1/Walk/2.png");
	tempTextureWalkingViking1[3].loadFromFile("img/Enemy/Viking1/Walk/3.png");
	tempTextureWalkingViking1[4].loadFromFile("img/Enemy/Viking1/Walk/4.png");
	tempTextureWalkingViking1[5].loadFromFile("img/Enemy/Viking1/Walk/5.png");
	tempTextureWalkingViking1[6].loadFromFile("img/Enemy/Viking1/Walk/6.png");
	tempTextureWalkingViking1[7].loadFromFile("img/Enemy/Viking1/Walk/7.png");
	tempTextureWalkingViking1[8].loadFromFile("img/Enemy/Viking1/Walk/8.png");
	tempTextureWalkingViking1[9].loadFromFile("img/Enemy/Viking1/Walk/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureWalkingViking1[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingViking2 = new sf::Texture[10];
	tempTextureWalkingViking2[0].loadFromFile("img/Enemy/Viking2/Walk/0.png");
	tempTextureWalkingViking2[1].loadFromFile("img/Enemy/Viking2/Walk/1.png");
	tempTextureWalkingViking2[2].loadFromFile("img/Enemy/Viking2/Walk/2.png");
	tempTextureWalkingViking2[3].loadFromFile("img/Enemy/Viking2/Walk/3.png");
	tempTextureWalkingViking2[4].loadFromFile("img/Enemy/Viking2/Walk/4.png");
	tempTextureWalkingViking2[5].loadFromFile("img/Enemy/Viking2/Walk/5.png");
	tempTextureWalkingViking2[6].loadFromFile("img/Enemy/Viking2/Walk/6.png");
	tempTextureWalkingViking2[7].loadFromFile("img/Enemy/Viking2/Walk/7.png");
	tempTextureWalkingViking2[8].loadFromFile("img/Enemy/Viking2/Walk/8.png");
	tempTextureWalkingViking2[9].loadFromFile("img/Enemy/Viking2/Walk/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureWalkingViking2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingViking3 = new sf::Texture[10];
	tempTextureWalkingViking3[0].loadFromFile("img/Enemy/Viking3/Walk/0.png");
	tempTextureWalkingViking3[1].loadFromFile("img/Enemy/Viking3/Walk/1.png");
	tempTextureWalkingViking3[2].loadFromFile("img/Enemy/Viking3/Walk/2.png");
	tempTextureWalkingViking3[3].loadFromFile("img/Enemy/Viking3/Walk/3.png");
	tempTextureWalkingViking3[4].loadFromFile("img/Enemy/Viking3/Walk/4.png");
	tempTextureWalkingViking3[5].loadFromFile("img/Enemy/Viking3/Walk/5.png");
	tempTextureWalkingViking3[6].loadFromFile("img/Enemy/Viking3/Walk/6.png");
	tempTextureWalkingViking3[7].loadFromFile("img/Enemy/Viking3/Walk/7.png");
	tempTextureWalkingViking3[8].loadFromFile("img/Enemy/Viking3/Walk/8.png");
	tempTextureWalkingViking3[9].loadFromFile("img/Enemy/Viking3/Walk/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureWalkingViking3[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingSatyr1 = new sf::Texture[18];
	tempTextureWalkingSatyr1[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_000.png");
	tempTextureWalkingSatyr1[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_001.png");
	tempTextureWalkingSatyr1[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_002.png");
	tempTextureWalkingSatyr1[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_003.png");
	tempTextureWalkingSatyr1[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_004.png");
	tempTextureWalkingSatyr1[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_005.png");
	tempTextureWalkingSatyr1[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_006.png");
	tempTextureWalkingSatyr1[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_007.png");
	tempTextureWalkingSatyr1[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_008.png");
	tempTextureWalkingSatyr1[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_009.png");
	tempTextureWalkingSatyr1[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_010.png");
	tempTextureWalkingSatyr1[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_011.png");
	tempTextureWalkingSatyr1[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_012.png");
	tempTextureWalkingSatyr1[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_013.png");
	tempTextureWalkingSatyr1[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_014.png");
	tempTextureWalkingSatyr1[15].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_015.png");
	tempTextureWalkingSatyr1[16].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_016.png");
	tempTextureWalkingSatyr1[17].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Walking/Satyr_01_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingSatyr1[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingSatyr2 = new sf::Texture[18];
	tempTextureWalkingSatyr2[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_000.png");
	tempTextureWalkingSatyr2[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_001.png");
	tempTextureWalkingSatyr2[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_002.png");
	tempTextureWalkingSatyr2[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_003.png");
	tempTextureWalkingSatyr2[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_004.png");
	tempTextureWalkingSatyr2[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_005.png");
	tempTextureWalkingSatyr2[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_006.png");
	tempTextureWalkingSatyr2[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_007.png");
	tempTextureWalkingSatyr2[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_008.png");
	tempTextureWalkingSatyr2[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_009.png");
	tempTextureWalkingSatyr2[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_010.png");
	tempTextureWalkingSatyr2[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_011.png");
	tempTextureWalkingSatyr2[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_012.png");
	tempTextureWalkingSatyr2[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_013.png");
	tempTextureWalkingSatyr2[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_014.png");
	tempTextureWalkingSatyr2[15].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_015.png");
	tempTextureWalkingSatyr2[16].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_016.png");
	tempTextureWalkingSatyr2[17].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Walking/Satyr_02_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingSatyr2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingSatyr3 = new sf::Texture[18];
	tempTextureWalkingSatyr3[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_000.png");
	tempTextureWalkingSatyr3[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_001.png");
	tempTextureWalkingSatyr3[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_002.png");
	tempTextureWalkingSatyr3[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_003.png");
	tempTextureWalkingSatyr3[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_004.png");
	tempTextureWalkingSatyr3[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_005.png");
	tempTextureWalkingSatyr3[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_006.png");
	tempTextureWalkingSatyr3[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_007.png");
	tempTextureWalkingSatyr3[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_008.png");
	tempTextureWalkingSatyr3[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_009.png");
	tempTextureWalkingSatyr3[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_010.png");
	tempTextureWalkingSatyr3[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_011.png");
	tempTextureWalkingSatyr3[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_012.png");
	tempTextureWalkingSatyr3[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_013.png");
	tempTextureWalkingSatyr3[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_014.png");
	tempTextureWalkingSatyr3[15].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_015.png");
	tempTextureWalkingSatyr3[16].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_016.png");
	tempTextureWalkingSatyr3[17].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Walking/Satyr_03_Walking_017.png");
	for (int aa = 0; aa < 18; aa++)
	{
		tempTextureWalkingSatyr3[aa].setSmooth(true);
	}

	index = 0;
	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureWalkingKnight = new sf::Texture[10];
	tempTextureWalkingKnight[0].loadFromFile("img/Enemy/Knight/Walk/0.png");
	tempTextureWalkingKnight[1].loadFromFile("img/Enemy/Knight/Walk/1.png");
	tempTextureWalkingKnight[2].loadFromFile("img/Enemy/Knight/Walk/2.png");
	tempTextureWalkingKnight[3].loadFromFile("img/Enemy/Knight/Walk/3.png");
	tempTextureWalkingKnight[4].loadFromFile("img/Enemy/Knight/Walk/4.png");
	tempTextureWalkingKnight[5].loadFromFile("img/Enemy/Knight/Walk/5.png");
	tempTextureWalkingKnight[6].loadFromFile("img/Enemy/Knight/Walk/6.png");
	tempTextureWalkingKnight[7].loadFromFile("img/Enemy/Knight/Walk/7.png");
	tempTextureWalkingKnight[8].loadFromFile("img/Enemy/Knight/Walk/8.png");
	tempTextureWalkingKnight[9].loadFromFile("img/Enemy/Knight/Walk/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureWalkingKnight[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingGolem = new sf::Texture[15];
	tempTextureDyingGolem[0].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_000.png");
	tempTextureDyingGolem[1].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_001.png");
	tempTextureDyingGolem[2].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_002.png");
	tempTextureDyingGolem[3].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_003.png");
	tempTextureDyingGolem[4].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_004.png");
	tempTextureDyingGolem[5].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_005.png");
	tempTextureDyingGolem[6].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_006.png");
	tempTextureDyingGolem[7].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_007.png");
	tempTextureDyingGolem[8].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_008.png");
	tempTextureDyingGolem[9].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_009.png");
	tempTextureDyingGolem[10].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_010.png");
	tempTextureDyingGolem[11].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_011.png");
	tempTextureDyingGolem[12].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_012.png");
	tempTextureDyingGolem[13].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_013.png");
	tempTextureDyingGolem[14].loadFromFile("img/Enemy/Golem_01/PNG Sequences/Dying/Golem_01_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingGolem[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingGolem2 = new sf::Texture[15];
	tempTextureDyingGolem2[0].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_000.png");
	tempTextureDyingGolem2[1].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_001.png");
	tempTextureDyingGolem2[2].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_002.png");
	tempTextureDyingGolem2[3].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_003.png");
	tempTextureDyingGolem2[4].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_004.png");
	tempTextureDyingGolem2[5].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_005.png");
	tempTextureDyingGolem2[6].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_006.png");
	tempTextureDyingGolem2[7].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_007.png");
	tempTextureDyingGolem2[8].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_008.png");
	tempTextureDyingGolem2[9].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_009.png");
	tempTextureDyingGolem2[10].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_010.png");
	tempTextureDyingGolem2[11].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_011.png");
	tempTextureDyingGolem2[12].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_012.png");
	tempTextureDyingGolem2[13].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_013.png");
	tempTextureDyingGolem2[14].loadFromFile("img/Enemy/Golem_02/PNG Sequences/Dying/Golem_02_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingGolem2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingGolem3 = new sf::Texture[15];
	tempTextureDyingGolem3[0].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_000.png");
	tempTextureDyingGolem3[1].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_001.png");
	tempTextureDyingGolem3[2].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_002.png");
	tempTextureDyingGolem3[3].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_003.png");
	tempTextureDyingGolem3[4].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_004.png");
	tempTextureDyingGolem3[5].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_005.png");
	tempTextureDyingGolem3[6].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_006.png");
	tempTextureDyingGolem3[7].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_007.png");
	tempTextureDyingGolem3[8].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_008.png");
	tempTextureDyingGolem3[9].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_009.png");
	tempTextureDyingGolem3[10].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_010.png");
	tempTextureDyingGolem3[11].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_011.png");
	tempTextureDyingGolem3[12].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_012.png");
	tempTextureDyingGolem3[13].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_013.png");
	tempTextureDyingGolem3[14].loadFromFile("img/Enemy/Golem_03/PNG Sequences/Dying/Golem_03_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingGolem3[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingViking1 = new sf::Texture[10];
	tempTextureDyingViking1[0].loadFromFile("img/Enemy/Viking1/Die/0.png");
	tempTextureDyingViking1[1].loadFromFile("img/Enemy/Viking1/Die/1.png");
	tempTextureDyingViking1[2].loadFromFile("img/Enemy/Viking1/Die/2.png");
	tempTextureDyingViking1[3].loadFromFile("img/Enemy/Viking1/Die/3.png");
	tempTextureDyingViking1[4].loadFromFile("img/Enemy/Viking1/Die/4.png");
	tempTextureDyingViking1[5].loadFromFile("img/Enemy/Viking1/Die/5.png");
	tempTextureDyingViking1[6].loadFromFile("img/Enemy/Viking1/Die/6.png");
	tempTextureDyingViking1[7].loadFromFile("img/Enemy/Viking1/Die/7.png");
	tempTextureDyingViking1[8].loadFromFile("img/Enemy/Viking1/Die/8.png");
	tempTextureDyingViking1[9].loadFromFile("img/Enemy/Viking1/Die/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureDyingViking1[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingViking2 = new sf::Texture[10];
	tempTextureDyingViking2[0].loadFromFile("img/Enemy/Viking2/Die/0.png");
	tempTextureDyingViking2[1].loadFromFile("img/Enemy/Viking2/Die/1.png");
	tempTextureDyingViking2[2].loadFromFile("img/Enemy/Viking2/Die/2.png");
	tempTextureDyingViking2[3].loadFromFile("img/Enemy/Viking2/Die/3.png");
	tempTextureDyingViking2[4].loadFromFile("img/Enemy/Viking2/Die/4.png");
	tempTextureDyingViking2[5].loadFromFile("img/Enemy/Viking2/Die/5.png");
	tempTextureDyingViking2[6].loadFromFile("img/Enemy/Viking2/Die/6.png");
	tempTextureDyingViking2[7].loadFromFile("img/Enemy/Viking2/Die/7.png");
	tempTextureDyingViking2[8].loadFromFile("img/Enemy/Viking2/Die/8.png");
	tempTextureDyingViking2[9].loadFromFile("img/Enemy/Viking2/Die/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureDyingViking2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingViking3 = new sf::Texture[10];
	tempTextureDyingViking3[0].loadFromFile("img/Enemy/Viking3/Die/0.png");
	tempTextureDyingViking3[1].loadFromFile("img/Enemy/Viking3/Die/1.png");
	tempTextureDyingViking3[2].loadFromFile("img/Enemy/Viking3/Die/2.png");
	tempTextureDyingViking3[3].loadFromFile("img/Enemy/Viking3/Die/3.png");
	tempTextureDyingViking3[4].loadFromFile("img/Enemy/Viking3/Die/4.png");
	tempTextureDyingViking3[5].loadFromFile("img/Enemy/Viking3/Die/5.png");
	tempTextureDyingViking3[6].loadFromFile("img/Enemy/Viking3/Die/6.png");
	tempTextureDyingViking3[7].loadFromFile("img/Enemy/Viking3/Die/7.png");
	tempTextureDyingViking3[8].loadFromFile("img/Enemy/Viking3/Die/8.png");
	tempTextureDyingViking3[9].loadFromFile("img/Enemy/Viking3/Die/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureDyingViking3[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingSatyr1 = new sf::Texture[15];
	tempTextureDyingSatyr1[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_000.png");
	tempTextureDyingSatyr1[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_001.png");
	tempTextureDyingSatyr1[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_002.png");
	tempTextureDyingSatyr1[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_003.png");
	tempTextureDyingSatyr1[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_004.png");
	tempTextureDyingSatyr1[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_005.png");
	tempTextureDyingSatyr1[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_006.png");
	tempTextureDyingSatyr1[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_007.png");
	tempTextureDyingSatyr1[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_008.png");
	tempTextureDyingSatyr1[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_009.png");
	tempTextureDyingSatyr1[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_010.png");
	tempTextureDyingSatyr1[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_011.png");
	tempTextureDyingSatyr1[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_012.png");
	tempTextureDyingSatyr1[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_013.png");
	tempTextureDyingSatyr1[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 1/Dying/Satyr_01_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingSatyr1[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingSatyr2 = new sf::Texture[15];
	tempTextureDyingSatyr2[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_000.png");
	tempTextureDyingSatyr2[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_001.png");
	tempTextureDyingSatyr2[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_002.png");
	tempTextureDyingSatyr2[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_003.png");
	tempTextureDyingSatyr2[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_004.png");
	tempTextureDyingSatyr2[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_005.png");
	tempTextureDyingSatyr2[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_006.png");
	tempTextureDyingSatyr2[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_007.png");
	tempTextureDyingSatyr2[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_008.png");
	tempTextureDyingSatyr2[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_009.png");
	tempTextureDyingSatyr2[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_010.png");
	tempTextureDyingSatyr2[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_011.png");
	tempTextureDyingSatyr2[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_012.png");
	tempTextureDyingSatyr2[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_013.png");
	tempTextureDyingSatyr2[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 2/Dying/Satyr_02_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingSatyr2[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingSatyr3 = new sf::Texture[15];
	tempTextureDyingSatyr3[0].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_000.png");
	tempTextureDyingSatyr3[1].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_001.png");
	tempTextureDyingSatyr3[2].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_002.png");
	tempTextureDyingSatyr3[3].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_003.png");
	tempTextureDyingSatyr3[4].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_004.png");
	tempTextureDyingSatyr3[5].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_005.png");
	tempTextureDyingSatyr3[6].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_006.png");
	tempTextureDyingSatyr3[7].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_007.png");
	tempTextureDyingSatyr3[8].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_008.png");
	tempTextureDyingSatyr3[9].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_009.png");
	tempTextureDyingSatyr3[10].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_010.png");
	tempTextureDyingSatyr3[11].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_011.png");
	tempTextureDyingSatyr3[12].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_012.png");
	tempTextureDyingSatyr3[13].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_013.png");
	tempTextureDyingSatyr3[14].loadFromFile("img/Enemy/Satyr and Reaper/Satyr 3/Dying/Satyr_03_Dying_014.png");
	for (int aa = 0; aa < 15; aa++)
	{
		tempTextureDyingSatyr3[aa].setSmooth(true);
	}

	index = 0;
	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;

	tempTextureDyingKnight = new sf::Texture[10];
	tempTextureDyingKnight[0].loadFromFile("img/Enemy/Knight/Die/0.png");
	tempTextureDyingKnight[1].loadFromFile("img/Enemy/Knight/Die/1.png");
	tempTextureDyingKnight[2].loadFromFile("img/Enemy/Knight/Die/2.png");
	tempTextureDyingKnight[3].loadFromFile("img/Enemy/Knight/Die/3.png");
	tempTextureDyingKnight[4].loadFromFile("img/Enemy/Knight/Die/4.png");
	tempTextureDyingKnight[5].loadFromFile("img/Enemy/Knight/Die/5.png");
	tempTextureDyingKnight[6].loadFromFile("img/Enemy/Knight/Die/6.png");
	tempTextureDyingKnight[7].loadFromFile("img/Enemy/Knight/Die/7.png");
	tempTextureDyingKnight[8].loadFromFile("img/Enemy/Knight/Die/8.png");
	tempTextureDyingKnight[9].loadFromFile("img/Enemy/Knight/Die/9.png");
	for (int aa = 0; aa < 10; aa++)
	{
		tempTextureDyingKnight[aa].setSmooth(true);
	}

	_spriteLoadingScreen.setTexture(_textureLoadingScreen[index]);
	window.clear();
	window.draw(_spriteLoadingScreen);
	window.display();
	index++;
}

game::game()
{
	_textureLoadingScreen = new sf::Texture[10];
	_textureLoadingScreen[0].loadFromFile("img/Enemy/IceWizard/Run/0.png");
	_textureLoadingScreen[1].loadFromFile("img/Enemy/IceWizard/Run/1.png");
	_textureLoadingScreen[2].loadFromFile("img/Enemy/IceWizard/Run/2.png");
	_textureLoadingScreen[3].loadFromFile("img/Enemy/IceWizard/Run/3.png");
	_textureLoadingScreen[4].loadFromFile("img/Enemy/IceWizard/Run/4.png");
	_textureLoadingScreen[5].loadFromFile("img/Enemy/IceWizard/Run/5.png");
	_textureLoadingScreen[6].loadFromFile("img/Enemy/IceWizard/Run/6.png");
	_textureLoadingScreen[7].loadFromFile("img/Enemy/IceWizard/Run/7.png");
	_textureLoadingScreen[8].loadFromFile("img/Enemy/IceWizard/Run/8.png");
	_textureLoadingScreen[9].loadFromFile("img/Enemy/IceWizard/Run/9.png");
}

game::~game()
{
	for (int i = 0; i < 200; i++)
	{
		delete _golem[i];
		delete _panah[i];
	}
	delete[]_textureLoadingScreen;
	delete[]tempTextureHealth;

	delete[]tempTextureAttackingGolem;
	delete[]tempTextureAttackingGolem2;
	delete[]tempTextureAttackingGolem3;
	delete[]tempTextureAttackingViking1;
	delete[]tempTextureAttackingViking2;
	delete[]tempTextureAttackingViking3;
	delete[]tempTextureAttackingSatyr1;
	delete[]tempTextureAttackingSatyr2;
	delete[]tempTextureAttackingSatyr3;
	delete[]tempTextureAttackingKnight;

	delete[]tempTextureWalkingGolem;
	delete[]tempTextureWalkingGolem2;
	delete[]tempTextureWalkingGolem3;
	delete[]tempTextureWalkingViking1;
	delete[]tempTextureWalkingViking2;
	delete[]tempTextureWalkingViking3;
	delete[]tempTextureWalkingSatyr1;
	delete[]tempTextureWalkingSatyr2;
	delete[]tempTextureWalkingSatyr3;
	delete[]tempTextureWalkingKnight;

	delete[]tempTextureDyingGolem;
	delete[]tempTextureDyingGolem2;
	delete[]tempTextureDyingGolem3;
	delete[]tempTextureDyingViking1;
	delete[]tempTextureDyingViking2;
	delete[]tempTextureDyingViking3;
	delete[]tempTextureDyingSatyr1;
	delete[]tempTextureDyingSatyr2;
	delete[]tempTextureDyingSatyr3;
	delete[]tempTextureDyingKnight;
}

void game::set(int level)
{
	background.setPosition(390, 0);
	background.setSize(sf::Vector2f(890, 720));

	for (int i = 0; i < 200; i++)
	{
		delete _panah[i];
	}

	for (int i = 0; i < 200; i++)//new panah
	{
		_panah[i] = new panah(level);
		_panah[i]->setTexture(tempTexturePanah);
	}
		
	jumlahmusuh = 15 + ( 5 * level);

	if (level > 37)
	{
		jumlahmusuh = 200;
	}

	for (int i = 0; i < jumlahmusuh; i++)
	{
		delete _golem[i];
	}

	for (int i = 0; i < jumlahmusuh; i++)//set enemy
	{
		int temp;
		temp = rand() % 10;
		if (temp == 0)
		{
			_golem[i] = new golem(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingGolem, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingGolem, 18);
			_golem[i]->setTextureDying(tempTextureDyingGolem, 15);
		}
		else if (temp == 1)
		{
			_golem[i] = new golem2(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingGolem2, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingGolem2, 18);
			_golem[i]->setTextureDying(tempTextureDyingGolem2, 15);
		}
		else if (temp == 2)
		{
			_golem[i] = new golem3(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingGolem3, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingGolem3, 18);
			_golem[i]->setTextureDying(tempTextureDyingGolem3, 15);
		}
		else if (temp == 3)
		{
			_golem[i] = new viking1(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingViking1, 10);
			_golem[i]->setTextureWalking(tempTextureWalkingViking1, 10);
			_golem[i]->setTextureDying(tempTextureDyingViking1, 10);
		}
		else if (temp == 4)
		{
			_golem[i] = new viking2(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingViking2, 10);
			_golem[i]->setTextureWalking(tempTextureWalkingViking2, 10);
			_golem[i]->setTextureDying(tempTextureDyingViking2, 10);
		}
		else if (temp == 5)
		{
			_golem[i] = new viking3(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingViking3, 10);
			_golem[i]->setTextureWalking(tempTextureWalkingViking3, 10);
			_golem[i]->setTextureDying(tempTextureDyingViking3, 10);
		}
		else if (temp == 6)
		{
			_golem[i] = new satyr1(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingSatyr1, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingSatyr1, 18);
			_golem[i]->setTextureDying(tempTextureDyingSatyr1, 15);
		}
		else if (temp == 7)
		{
			_golem[i] = new satyr2(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingSatyr2, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingSatyr2, 18);
			_golem[i]->setTextureDying(tempTextureDyingSatyr2, 15);
		}
		else if (temp == 8)
		{
			_golem[i] = new satyr3(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingSatyr3, 12);
			_golem[i]->setTextureWalking(tempTextureWalkingSatyr3, 18);
			_golem[i]->setTextureDying(tempTextureDyingSatyr3, 15);
		}
		else if (temp == 9)
		{
			_golem[i] = new knight(level);
			_golem[i]->setTextureAttacking(tempTextureAttackingKnight, 10);
			_golem[i]->setTextureWalking(tempTextureWalkingKnight, 10);
			_golem[i]->setTextureDying(tempTextureDyingKnight, 10);
		}
		_golem[i]->setTextureHealth(tempTextureHealth, 16);
	}


	_castle.setHP(level);
	countEnemy = 0;
}

void game::run()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML Project", sf::Style::Fullscreen | sf::Style::Close | sf::Style::Resize);
	window.setFramerateLimit(60);
	textureBackground.loadFromFile("img/Wallpapers/dirtt.jpg");
	textureBackground.setSmooth(true);
	background.setTexture(&textureBackground);

	//Load Texture
	loadFromFile(window);
	window.setMouseCursorVisible(true);

	//FONT
	sf::Text font;
	sf::Font f;
	f.loadFromFile("img/Wallpapers/The_Friday_Stroke_Font_by_7NTypes.otf");
	font.setFont(f);
	font.setCharacterSize(50);
	font.setFillColor(sf::Color::White);
	font.setPosition(sf::Vector2f(50, 10));

	//loading
	sf::Texture loading;
	loading.loadFromFile("img/Wallpapers/dirtt.jpg");
	loading.setSmooth(true);
	sf::RectangleShape _loading;
	_loading.setSize(sf::Vector2f(1280, 720));
	_loading.setTexture(&loading);
	
	
	//TIMER
	sf::Clock _timer;
	int timer = _timer.getElapsedTime().asSeconds();
	float timeFire =_timer.getElapsedTime().asMilliseconds();


	//NEXTlevel
	sf::Texture win;
	win.loadFromFile("img/Wallpapers/11.png");
	win.setSmooth(true);
	sf::RectangleShape _win;
	_win.setTexture(&win);
	_win.setSize(sf::Vector2f(750, 500));
	_win.setPosition(275, 50);


	//lose
	sf::Texture lose1;
	lose1.loadFromFile("img/Wallpapers/Untitled666.png");
	lose1.setSmooth(true);
	sf::RectangleShape _lose;
	_lose.setTexture(&lose1);
	_lose.setSize(sf::Vector2f(750, 500));
	_lose.setPosition(275, 50);



	//HOMEPAGE
	sf::Texture load;
	load.loadFromFile("img/Wallpapers/homepage.jpg");
	load.setSmooth(true);
	sf::RectangleShape _homepage;
	_homepage.setSize(sf::Vector2f(1280, 720));
	_homepage.setTexture(&load);


	bool homepage = true;		//homepage
	bool lose = false;			//lose
	bool play = false;			//buat play
	bool nextlevel = false;		//buat naik level

	int kill = 0;				// jumlah enemy di bunuh

	//Load data from file
	fstream file;
	file.open("save.txt", ios::in);
	if (!file.is_open())
	{
		cout << "fail to load";
	}
	else
	{
		file >> level;
	}
	file.close();

	bool isFullScreen = false;

	while (window.isOpen())
	{
		if (play && nextlevel==false && lose==false) { //GAMEPLAY
			sf::Event evnt;
			while (window.pollEvent(evnt))
			{
				switch (evnt.type)
				{
				case sf::Event::Closed:
					window.close();
					break;

					/*case::sf::Event::Resized:
						sf::FloatRect visibleArea(0, 0, evnt.size.width, evnt.size.height);
						window.setView(sf::View(visibleArea));
						break;*/
				}

				if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
				{
					if (_timer.getElapsedTime().asMilliseconds() - timeFire >= 502 - ( 13.1 * level)) {
						float x, y;

						x = sf::Mouse::getPosition(window).x;
						y = sf::Mouse::getPosition(window).y;

						_panah[countPanah % 200]->fire(x, y);
						_castle.rotateBow(x, y);
						countPanah++;
						timeFire = _timer.getElapsedTime().asMilliseconds();
					}
				}
			}


			if (_timer.getElapsedTime().asSeconds() - timer >= 3 && countEnemy < jumlahmusuh)//summon enemy
			{
				int _rand = rand() % 2;
				if (_rand == 0)
					countEnemy++;
				else if (_rand == 1 && countEnemy < jumlahmusuh-1)
					countEnemy += 2;

				timer = _timer.getElapsedTime().asSeconds();
			}


			for (int i = 0; i < countEnemy; i++)//enemy update
				_golem[i]->update(clock2, _castle);

			_castle.update();
			
			time = clock.getElapsedTime();

			for (int i = 0; i < countEnemy; i++) {//golem move
				_golem[i]->move(time.asMilliseconds());
				_golem[i]->handleExchangePicture();
			}



			time = clock.getElapsedTime();

			for (int i = 0; i < countPanah%200; i++) {//panah move
				_panah[i]->move(time.asMilliseconds());
			}


			clock.restart().asMilliseconds();



			for (int i = 0; i < countEnemy; i++)//check enemy
			{
				for (int j = 0; j < countPanah%200; j++)
				{
					if (_golem[i]->checkHP(_panah[j]))
						_panah[j]->stop();
				}
			}


			window.clear(sf::Color::White);


			window.draw(background);
			_castle.draw(window);


			for (int i = 0; i < countEnemy; i++)//draw enemy
				_golem[i]->draw(window);


			for (int j = 0; j < countPanah%200; j++)//draw panah
				_panah[j]->draw(window);

			font.setString("level : "+to_string(level));
			window.draw(font);
			window.display();

			kill = 0;

			for (int i = 0; i < jumlahmusuh && _golem[i]->getAvailable()==false; i++)
			{
					kill += 1;
			}

			if (_castle.getHealth() <= 0)
			{
				play = false;
				lose = true;
			}

			if (_castle.getHealth() > 0 && kill==jumlahmusuh)
			{
				play = false;
				level += 1;
				nextlevel = true;

				//Save data to file
				file.open("save.txt", ios::out);
				if (!file.is_open())
				{
					cout << "failed to save";
				}
				else
				{
					file << level;
				}
				file.close();
			}

		}


		//homepage
		else if(homepage)									//HOMEPAGE
		{
			sf::Event evnt;
			while (window.pollEvent(evnt))
			{

				switch (evnt.type)
				{
				case sf::Event::Closed:
					window.close();
					break;
				}


				if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
				{
					if (sf::Mouse::getPosition(window).x < 598 && sf::Mouse::getPosition(window).x>400 
						&& sf::Mouse::getPosition(window).y < 688 && sf::Mouse::getPosition(window).y>595)
					{
						lose = false;
						nextlevel = false;
						play = true;
						homepage = false;
						
						if (play) {
							window.clear();
							window.draw(_loading);
							window.display();
							set(level);
							clock.restart().asMilliseconds();
							clock2.restart().asMilliseconds();
						}
					}
					else if (sf::Mouse::getPosition(window).x < 852 && sf::Mouse::getPosition(window).x>650
						&& sf::Mouse::getPosition(window).y < 688 && sf::Mouse::getPosition(window).y>595)
					{
						window.close();
					}
				}
			}
			if (play != true) 
			{
				window.clear();
				window.draw(_homepage);
				window.display();
			}

			
		} 


		//nextlevel
		else if (play == false && lose == false && nextlevel)		//nextlevel
		{

			sf::Event evnt;
			while (window.pollEvent(evnt))
			{

				switch (evnt.type)
				{
				case sf::Event::Closed:
					window.close();
					break;
				}


				if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
				{
					if (sf::Mouse::getPosition(window).x < 649 && sf::Mouse::getPosition(window).x>553
						&& sf::Mouse::getPosition(window).y < 431 && sf::Mouse::getPosition(window).y>383) {
						play = true;
						nextlevel = false;
						lose = false;
						
						if (play) {
							
							window.clear();
							window.draw(_loading);  // loadingscreen
							window.display();
							set(level);
							clock.restart().asMilliseconds();
							clock2.restart().asMilliseconds();
						}
					}
					else if (sf::Mouse::getPosition(window).x < 750 && sf::Mouse::getPosition(window).x>658
						&& sf::Mouse::getPosition(window).y < 431 && sf::Mouse::getPosition(window).y>383)
					{
							homepage = true;
							play = false;
							nextlevel = false;
							lose = false;
					}
					
				}
				
			}
			if (play != true)
			{
				window.draw(_win);
				window.display();
			}

		}


		//losegame
		else if (play == false && lose && nextlevel == false)		//losegame
		{

			sf::Event evnt;
			while (window.pollEvent(evnt))
			{

				switch (evnt.type)
				{
				case sf::Event::Closed:
					window.close();
					break;
				}
				if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
				{
					if (sf::Mouse::getPosition(window).x < 649 && sf::Mouse::getPosition(window).x>553
						&& sf::Mouse::getPosition(window).y < 431 && sf::Mouse::getPosition(window).y>383) {
						play = true;
						nextlevel = false;
						lose = false;
						/*cout << "Masuk\n";*/
						if (play) {
							/*cout << "Loading\n";*/
							window.clear();
							window.draw(_loading);  // loadingscreen
							window.display();
							set(level);
							clock.restart().asMilliseconds();
							clock2.restart().asMilliseconds();
						}
					}
					else if (sf::Mouse::getPosition(window).x < 750 && sf::Mouse::getPosition(window).x>658
						&& sf::Mouse::getPosition(window).y < 431 && sf::Mouse::getPosition(window).y>383)
					{
						homepage = true;
						play = false;
						nextlevel = false;
						lose = false;
					}
					/*cout << sf::Mouse::getPosition(window).x << " " << sf::Mouse::getPosition(window).y << endl;*/
				}
			}
			if (play != true)
			{
				window.draw(_lose);
				window.display();
			}

		}


	}// batas window loop

}
