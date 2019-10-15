#include "boarddiamond.h"

BoardDiamond::BoardDiamond()
{
    idNumber = 0;
    playerNumber = 0;
    textures = nullptr;
}

BoardDiamond::BoardDiamond(TextureHolder *textures, int idNumber,
                           int playerNumber, int boardPosition)
{
    this->textures = textures;
    this->playerNumber = playerNumber;
    this->boardPosition = boardPosition;
    this->idNumber = idNumber;
    spriteHolder.setTexture(this->textures->textureBoardDiamond);
    sf::IntRect textureRect(idNumber*44, 0, 44,44);
    spriteHolder.setTextureRect(textureRect);
    // spriteHolder.scale(0.5, 0.5);
    setBoardPosition(boardPosition);
}

void BoardDiamond::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    if (boardPosition>-1)
    {
        states.transform *= getTransform();
        target.draw(spriteHolder, states);
    }
}


