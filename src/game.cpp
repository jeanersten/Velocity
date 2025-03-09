#include "game.h"

#include <SFML/Graphics.hpp>

Game::Game()
  : window(sf::VideoMode({640u, 480u}), "Velocity Engine v0.1")
{
  window.setFramerateLimit(60u);
}

void Game::run()
{
  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
      {
        window.close();
      }
    }

    window.clear();
    window.display();
  }
}
