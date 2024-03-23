#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

namespace mt 
{
	class hero
	{
		float m_x, m_y;
		sf::Texture m_texturehero;
		sf::Sprite m_spritehero;

	public:
		hero() = default;

		hero(float x, float y)
		{
			m_x = x;
			m_y = y;
		}

		void Setup(float x, float y)
		{
			m_x = x;
			m_y = y;

			if (!m_texturehero.loadFromFile("images\\image.png"))
			{
				std::cout << "Error while loading image.png" << std::endl;
			}
			m_spritehero.setTexture(m_texturehero);
			m_spritehero.setScale(0.2f, 0.2f);
			m_spritehero.setOrigin(m_texturehero.getSize().x / 2, m_texturehero.getSize().y / 2);
			m_spritehero.setPosition(m_x, m_y);
		}

		sf::Sprite Get()
		{
			return m_spritehero;
		}
	};
}