#pragma once
#include <string>
#include <thread>
#include <cmath>
#include <iostream>

namespace mt
{



	class Game
	{
		std::string m_capture;
		sf::RenderWindow m_window;
		int m_width;
		int m_height;

		sf::Texture m_textureBackground;
		sf::Sprite m_spriteBackground;

		hero m_hero;

	public:
		Game(int width, int height, const std::string& capture)
		{
			m_width = width;
			m_height = height;
			m_capture = capture;
		}

		void Setup()
		{
			m_hero.Setup(140, 140);
		}


		void LifeCycle()
		{


			m_window.create(sf::VideoMode(m_width, m_height), m_capture);

			if (!m_textureBackground.loadFromFile("images\\ii.jpg"))
			{
				std::cout << "Error while loading background.jpg" << std::endl;
			}
			m_spriteBackground.setTexture(m_textureBackground);
			sf::Sprite m_sp = m_hero.Get();
			
			while (m_window.isOpen())
			{
				// Обработка событий
				
				sf::Event event;
				while (m_window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						m_window.close();
				}

				
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					m_sp.move(0, -0.1);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					m_sp.move(0, 0.1);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					m_sp.move(-0.1, 0);
				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					m_sp.move(0.1, 0);
				}
				// Отображение
				m_window.clear();
				m_window.draw(m_spriteBackground);
				m_window.draw(m_sp);
				m_window.display();
			}
		}
	};

}