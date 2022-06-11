#include "enemy.h"
#include <iostream>
#include "SFML/Graphics.hpp"


//Constructor
enemy::enemy()
{

}

knight::knight(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.05;
	_health = 140+(15*level);
	_tempHealth = _health;
	_damage = 8+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

satyr3::satyr3(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.1;
	_health = 50+(15*level);
	_tempHealth = _health;
	_damage = 3+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

satyr2::satyr2(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.1;
	_health = 70+(10*level);
	_tempHealth = _health;
	_damage = 3+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

satyr1::satyr1(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.1;
	_health = 50+(10*level);
	_tempHealth = _health;
	_damage = 3+(level*0.5);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

viking3::viking3(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.06;
	_health = 100+(20*level);
	_tempHealth = _health;
	_damage = 7+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

viking2::viking2(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.075;
	_health = 110+(20*level);
	_tempHealth = _health;
	_damage = 7+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

viking1::viking1(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.06;
	_health = 110+(19*level);
	_tempHealth = _health;
	_damage = 7+(0.5*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

golem3::golem3(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.04;
	_health = 150+(20*level);
	_tempHealth = _health;
	_damage = 10+(1*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

golem2::golem2(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.04;
	_health = 150+(20*level);
	_tempHealth = _health;
	_damage = 12+(level*0.9);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}

golem::golem(int level)
{
	int randomY = rand() % (575 - 1 + 1) + 1;

	//Set gambar golem
	_sprite.setScale(sf::Vector2f(-0.3, 0.3));
	_sprite.setPosition(1500, randomY);
	_gambarKe = 0;
	_dx = -0.04;
	_health = 170+(21*level);
	_tempHealth = _health;
	_damage = 10+(1*level);

	//Set posisi gambar health
	_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
	_barHP.setScale(0.2, 0.2);

	//Set gambar untuk di render
	_isAvailable = true;
	_isWalking = true;
	_isAttacking = false;
	_isDying = false;

	//Mengambil waktu awal
	sf::Clock tempClock;
	_timeForWalking = tempClock.getElapsedTime().asMilliseconds();
	_timeForAttacking = tempClock.getElapsedTime().asMilliseconds();
	_timeForDying = tempClock.getElapsedTime().asMilliseconds();
}


//Destructor
enemy::~enemy()
{

}

golem::~golem()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

golem2::~golem2()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

golem3::~golem3()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

viking1::~viking1()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

viking2::~viking2()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

viking3::~viking3()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

satyr1::~satyr1()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

satyr2::~satyr2()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

satyr3::~satyr3()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}

knight::~knight()
{
	delete[]_textureBarHP;
	delete[]_textureAttacking;
	delete[]_textureWalking;
	delete[]_textureDying;
}


//Update
void knight::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 8)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 175)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 5)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 8)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 8)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void satyr3::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 16)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 50)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 10)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 13)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void satyr2::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 16)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 50)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 10)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 13)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void satyr1::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 16)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 50)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 10)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 13)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void viking3::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 150)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 5)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void viking2::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 150)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 5)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void viking1::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 150)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 5)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 9)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void golem3::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 17)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 250)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 11)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 14)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void golem2::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 17)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 250)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 11)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 14)
				{
					_isAvailable = false;
				}
			}
		}
		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}

void golem::update(sf::Clock clock, castle& benteng)
{
	//Update gambar dari enemy
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			if ((clock.getElapsedTime().asMilliseconds() - _timeForWalking) >= 50)
			{
				_timeForWalking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureWalking[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 17)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isAttacking == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForAttacking >= 250)
			{
				_timeForAttacking = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureAttacking[_gambarKe]);
				if (_gambarKe == 9)
				{
					benteng.setHealth(benteng.getHealth() - _damage); //Memberi damage ke castle/benteng
				}
				_gambarKe++;
				if (_gambarKe > 11)
				{
					_gambarKe = 0;
				}
			}

		}
		else if (_isDying == true)
		{
			if (clock.getElapsedTime().asMilliseconds() - _timeForDying >= 175)
			{
				_timeForDying = clock.getElapsedTime().asMilliseconds();
				_sprite.setTexture(_textureDying[_gambarKe]);
				_gambarKe++;
				if (_gambarKe > 14)
				{
					_isAvailable = false;
				}
			}
		}

		//update HP enemy
		bool die = true;
		for (int i = 1; i <= 15 && die != false && _health > 0; i++)
		{
			if (_health > _tempHealth - (_tempHealth * 100 / 15 / 100 * i))
			{
				_barHP.setTexture(_textureBarHP[16 - i]);
				die = false;
			}
		}
		if (die)
		{
			_barHP.setTexture(_textureBarHP[16 - 16]);
		}
	}
}


//Draw
void knight::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void satyr3::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void satyr2::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void satyr1::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void viking3::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void viking2::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void viking1::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void golem3::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void golem2::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}

void golem::draw(sf::RenderWindow& window)
{
	if (_isAvailable == true)
	{
		window.draw(_sprite);
		window.draw(_barHP);
	}
}


//Move
void knight::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void satyr3::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void satyr2::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void satyr1::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void viking3::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void viking2::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void viking1::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void golem3::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void golem2::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}

void golem::move(float dt)
{
	if (_isAvailable == true)
	{
		if (_isWalking == true)
		{
			_sprite.move(sf::Vector2f(_dx * dt, 0));
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
		else if (_isAttacking == true)
		{
			_barHP.setPosition(sf::Vector2f(_sprite.getPosition().x - (_sprite.getGlobalBounds().width / 2) - (_barHP.getGlobalBounds().width / 2), _sprite.getPosition().y));
		}
	}
}


//Handle Exchange Picture
void knight::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void satyr1::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void satyr2::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void satyr3::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void viking3::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void viking2::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void viking1::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void golem3::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void golem2::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}

void golem::handleExchangePicture()
{
	if (_isAvailable == true)
	{
		if (_sprite.getPosition().x - _sprite.getGlobalBounds().width <= 350 && _health > 0)
		{
			_isWalking = false;
			_isAttacking = true;
		}
		else if (_health <= 0)
		{
			_isAttacking = false;
			_isWalking = false;
			_isDying = true;
		}
	}
}


//Attacking
void knight::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 5)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void satyr1::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void satyr2::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void satyr3::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void viking3::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 5)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void viking2::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 5)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void viking1::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 5)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void golem3::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void golem2::attacking(castle& benteng)
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}

void golem::attacking(castle& benteng) //Harusnya tidak usah dipakai
{
	if (_isAttacking == true && _gambarKe == 9)
	{
		benteng.setHealth(benteng.getHealth() - _damage);
	}
}


//Set Texture Health
void golem::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void golem2::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void golem3::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void viking1::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void viking2::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void viking3::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void satyr1::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void satyr2::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void satyr3::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}

void knight::setTextureHealth(sf::Texture*& texture, int length)
{
	_textureBarHP = new sf::Texture[length];
	_textureBarHP = texture;
}


//Set Texture Attacking
void golem::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void golem2::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void golem3::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void viking1::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void viking2::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void viking3::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void satyr1::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void satyr2::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void satyr3::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}

void knight::setTextureAttacking(sf::Texture*& texture, int length)
{
	_textureAttacking = new sf::Texture[length];
	_textureAttacking = texture;
}


//Set Texture Walking
void golem::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void golem2::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void golem3::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void viking1::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void viking2::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void viking3::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void satyr1::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void satyr2::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void satyr3::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}

void knight::setTextureWalking(sf::Texture*& texture, int length)
{
	_textureWalking = new sf::Texture[length];
	_textureWalking = texture;
}


//Set Texture Dying
void golem::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void golem2::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void golem3::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void viking1::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void viking2::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void viking3::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void satyr1::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void satyr2::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void satyr3::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}

void knight::setTextureDying(sf::Texture*& texture, int length)
{
	_textureDying = new sf::Texture[length];
	_textureDying = texture;
}


bool enemy::checkHP(panah*a)
{
	if (a->getX() + 100 > _sprite.getPosition().x - (_sprite.getGlobalBounds().width/2)
		&& a->getX() + 100< _sprite.getPosition().x
		&& a->getY() > _sprite.getPosition().y 
		&& a->getY() < _sprite.getPosition().y + _sprite.getGlobalBounds().height
		&& a->check() == true &&_isDying==false)
	{
		_health -= a->getDamage();
		return true;
	}
	return false;
}

float enemy::getPos()
{
	return _sprite.getPosition().x;
}

bool enemy::getAvailable()
{
	return _isAvailable;
}