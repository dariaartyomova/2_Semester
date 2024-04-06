#include <SFML/Graphics.hpp>
#include "circle.hpp"
#include "game.hpp"

int main()
{
    mt::Game game(1100, 800, "Game");
    game.Setup(5);
    game.Life();

    return 0;
}