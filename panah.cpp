#include "panah.h"
#include "SFML/Graphics.hpp"
#include <iostream>
#include <math.h>

#define PI 3.14159265

void panah::setTexture(sf::Texture &texture)
{
	_sprite.setTexture(texture);
}

panah::panah(int level)
{
	_damage = 20+(level*5);
	_isAvailable = false;
	_sprite.setPosition(sf::Vector2f(147.5, 354));
	baseSpeed = 0.5 + (0.02 * level);
}

panah::~panah()
{

}

void panah::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
	}
}


void panah::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_yEnd < 354)
		{
			if (abs(_xEnd - 147.5) < abs(_yEnd - 354))
			{
				_dy = -baseSpeed;
				_dx = (_xEnd - 147.5) / (abs(_yEnd - 354) / baseSpeed);
			}
			else
			{
				_dx = baseSpeed;
				_dy = (abs(_yEnd - 354)) / ((_xEnd - 147.5) / baseSpeed) * -1;
			}
		}
		else
		{
			if (abs(_xEnd - 147.5) < abs(_yEnd - 354))
			{
				_dy = baseSpeed;
				_dx = (_xEnd - 147.5) / (abs(_yEnd - 354) / baseSpeed);
			}
			else
			{
				_dx = baseSpeed;
				_dy = (abs(_yEnd - 354)) / ((_xEnd - 147.5) / baseSpeed);
			}
		}
		_sprite.move(sf::Vector2f(_dx * dt, _dy * dt));
	}
}

void panah::fire(float x, float y)
{
	if (x > 390 && x <= 1280 && y > 0 && y < 1280)
	{
		float xStart = 147.5;
		float yStart = 354 + (_sprite.getGlobalBounds().height / 2);
		_sprite.setPosition(xStart, yStart);

		_xEnd = x;
		_yEnd = y;
		_isAvailable = true;

		float dx = _xEnd - xStart;
		float dy = _yEnd - yStart;

		_angle = atan2(dy, dx) * 180 / PI;
		_sprite.setRotation(_angle);
	}
}

void panah::stop()
{
	_isAvailable = false;
}

float panah::getX()
{
	return _sprite.getPosition().x;
}

float panah::getY()
{
	return _sprite.getPosition().y;
}

float panah::getHeight()
{
	return _sprite.getGlobalBounds().width;
}

float panah::getDamage()
{
	return _damage;
}

bool panah::check()
{
	return _isAvailable;
}

double panah::getAngle()
{
	return _angle;
}