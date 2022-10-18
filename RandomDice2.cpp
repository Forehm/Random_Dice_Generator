#include <SFML/Graphics.hpp>
#include <iostream>
#include <ctime>
using namespace sf;

int main()
{

	sf::RenderWindow window(sf::VideoMode(1200, 600), "Lesson 2. kychka-pc.ru");
	
	Texture firstDice;
	firstDice.loadFromFile("images/dice.png");
	Sprite firstDiceSprite;
	firstDiceSprite.setTexture(firstDice);

	Texture secondDice;
	secondDice.loadFromFile("images/dice.png");
	Sprite SecondDiceSprite;
	SecondDiceSprite.setTexture(secondDice);

	bool isWorking = false;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		srand(time(NULL));
		int a, b = 0;
		
		

		a = rand() % 6 + 1;
		b = rand() % 6 + 1;

		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			isWorking = true;
			switch (a)
			{
			case 6:
			{
				firstDiceSprite.setTextureRect(IntRect(20, 20, 260, 260));
				break;
			}
			case 5:
			{
				firstDiceSprite.setTextureRect(IntRect(320, 20, 260, 260));
				break;
			}
			case 4:
			{
				firstDiceSprite.setTextureRect(IntRect(620, 20, 260, 260));
				break;
			}
			case 3:
			{
				firstDiceSprite.setTextureRect(IntRect(20, 340, 260, 260));
				break;
			}
			case 2:
			{
				firstDiceSprite.setTextureRect(IntRect(320, 340, 260, 260));
				break;
			}
			case 1:
			{
				firstDiceSprite.setTextureRect(IntRect(620, 340, 260, 260));
				break;
			}
			}

			switch (b)
			{
			case 6:
			{
				SecondDiceSprite.setTextureRect(IntRect(20, 20, 260, 260));
				break;
			}
			case 5:
			{
				SecondDiceSprite.setTextureRect(IntRect(320, 20, 260, 260));
				break;
			}
			case 4:
			{
				SecondDiceSprite.setTextureRect(IntRect(620, 20, 260, 260));
				break;
			}
			case 3:
			{
				SecondDiceSprite.setTextureRect(IntRect(20, 340, 260, 260));
				break;
			}
			case 2:
			{
				SecondDiceSprite.setTextureRect(IntRect(320, 340, 260, 260));
				break;
			}
			case 1:
			{
				SecondDiceSprite.setTextureRect(IntRect(620, 340, 260, 260));
				break;
			}
			}
		}









		firstDiceSprite.setPosition(200, 200);
		SecondDiceSprite.setPosition(600, 200);

		window.clear();
		if (isWorking)
		{
			window.draw(firstDiceSprite);
			window.draw(SecondDiceSprite);
		}
		window.display();
	}

	return 0;
} 
