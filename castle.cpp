#include "castle.h"
#include <iostream>
#include <math.h>

#define PI 3.14159265

castle::castle()
{
	_wallSprite = new sf::Sprite[4];

	float yStartForWallTerluar = -10;
	float xStartForWallTerluar = 231;

	//Menggambar 2 layer wall
	_wallTexture.loadFromFile("img/Castle/woodwall.png");
	_wallTexture.setSmooth(true);

	_wallSprite[0].setTexture(_wallTexture);
	_wallSprite[0].setScale(0.4, 0.4);
	_wallSprite[0].setPosition(sf::Vector2f(xStartForWallTerluar, yStartForWallTerluar));
	_wallSprite[1].setTexture(_wallTexture);
	_wallSprite[1].setScale(0.4, 0.4);
	_wallSprite[1].setPosition(sf::Vector2f(xStartForWallTerluar, 495.2 + yStartForWallTerluar)); //495.2 adalah height untuk 1 gambar benteng

	_wallSprite[2].setTexture(_wallTexture);
	_wallSprite[2].setScale(0.4, 0.4);
	_wallSprite[2].setPosition(sf::Vector2f(209, yStartForWallTerluar)); //209 adalah posisi kiri atas x
	_wallSprite[3].setTexture(_wallTexture);
	_wallSprite[3].setScale(0.4, 0.4);
	_wallSprite[3].setPosition(sf::Vector2f(209, 495.2 + yStartForWallTerluar));
	
	//Menggambar grafik lantai
	_floorTexture.loadFromFile("img/Castle/woodflor.png");
	_floorTexture.setSmooth(true);
	_floorShape.setTexture(&_floorTexture);
	_floorShape.setSize(sf::Vector2f(390, 720));

	//Menggambar bow yang di tengah
	_texture.loadFromFile("img/Bow/GAME-SVG_4-68-5121.png");
	_texture.setSmooth(true);
	_sprite.setTexture(_texture);
	_sprite.setScale(sf::Vector2f(0.5, 0.5));
	_sprite.setOrigin(sf::Vector2f(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height / 2));
	_sprite.setPosition((_floorShape.getGlobalBounds().width - 209) / 2, _floorShape.getGlobalBounds().height / 2);

	//Menggambar bar health castle
	_healthTexture = new sf::Texture[16];
	_healthTexture[0].loadFromFile("img/Health Bar/Health bar0_[empty].png");
	_healthTexture[1].loadFromFile("img/Health Bar/Health bar1.png");
	_healthTexture[2].loadFromFile("img/Health Bar/Health bar2.png");
	_healthTexture[3].loadFromFile("img/Health Bar/Health bar3.png");
	_healthTexture[4].loadFromFile("img/Health Bar/Health bar4.png");
	_healthTexture[5].loadFromFile("img/Health Bar/Health bar5.png");
	_healthTexture[6].loadFromFile("img/Health Bar/Health bar6.png");
	_healthTexture[7].loadFromFile("img/Health Bar/Health bar7.png");
	_healthTexture[8].loadFromFile("img/Health Bar/Health bar8.png");
	_healthTexture[9].loadFromFile("img/Health Bar/Health bar9.png");
	_healthTexture[10].loadFromFile("img/Health Bar/Health bar10_[Normal].png");
	_healthTexture[11].loadFromFile("img/Health Bar/Health bar11.png");
	_healthTexture[12].loadFromFile("img/Health Bar/Health bar12.png");
	_healthTexture[13].loadFromFile("img/Health Bar/Health bar13.png");
	_healthTexture[14].loadFromFile("img/Health Bar/Health bar14.png");
	_healthTexture[15].loadFromFile("img/Health Bar/Health bar15_[full].png");
	for (int i = 0; i < 16; i++)
	{
		_healthTexture[i].setSmooth(true);
	}
	_healthSprite.setScale(sf::Vector2f(0.5, 0.5));
	_healthSprite.setPosition(sf::Vector2f(11, 659));
	_health = 200;
	_tempHealth = _health;
}

castle::~castle()
{
	delete[]_wallSprite;
	delete[]_healthTexture;
}

void castle::draw(sf::RenderWindow& a)
{
	a.draw(_floorShape);
	for (int i = 0; i < 4; i++)
	{
		a.draw(_wallSprite[i]);
	}
	a.draw(_sprite);
	a.draw(_healthSprite);
}

void castle::setHP(int level)
{
	_health =375+ (25 * level);
	_tempHealth = _health;
}

void castle::update()
{
	bool die = true;
	for (int i = 1; i <= 15 && die!=false && _health>0; i++)
	{
		if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
		{
			_healthSprite.setTexture(_healthTexture[16 - i]);
			die = false;
		}
	}
	if (die)
	{
		_healthSprite.setTexture(_healthTexture[16 - 16]);
	}
}

void castle::setHealth(float hp)
{
	_health = hp;
}

float castle::getHealth()
{
	return _health;
}

void castle::rotateBow(float x, float y)
{
	if (x > 390 && x <= 1280 && y > 0 && y < 1280)
	{
		float xStart = _sprite.getPosition().x;
		float yStart = _sprite.getPosition().y;
		double _angle;

		float dx = x - xStart, dy = y - yStart;
		_angle = atan2(dy, dx) * 180 / PI;

		_sprite.setRotation(_angle);
	}
}