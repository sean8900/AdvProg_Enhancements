#include "painter.h"
#include <string>

Painter::Painter() {

}

Painter::~Painter() {

}

std::string Painter::paintTile(char tile) {
    std::string paintedTile = "";
    if (tile == RED) {
        paintedTile += RED_TEXT;
        paintedTile += tile;
    }
    else if (tile == YELLOW) {
        paintedTile += YELLOW_TEXT;
        paintedTile += tile;
    }
    else if (tile == DARKBLUE) {
        paintedTile += DARKBLUE_TEXT;
        paintedTile += tile;
    }
    else if (tile == LIGHTBLUE) {
        paintedTile += LIGHTBLUE_TEXT;
        paintedTile += tile;
    }
    else if (tile == BLACK) {
        paintedTile += BLACK_TEXT;
        paintedTile += tile;
    }
    else if (tile == ORANGE) {
        paintedTile += ORANGE_TEXT;
        paintedTile += tile;
    }
    else if (tile == FIRSTPLAYER) {
        paintedTile += GREEN_TEXT;
        paintedTile += tile;
    }
    paintedTile += RESET;
    return paintedTile;
}

std::string Painter::paintString(std::string text, std::string colour) {
    std::string paintedTile = "";
    if (colour == "red") {
        paintedTile += RED_TEXT;
        paintedTile += text;
    }
    else if (colour == "yellow") {
        paintedTile += YELLOW_TEXT;
        paintedTile += text;
    }
    else if (colour == "darkblue") {
        paintedTile += DARKBLUE_TEXT;
        paintedTile += text;
    }
    else if (colour == "lightblue") {
        paintedTile += LIGHTBLUE_TEXT;
        paintedTile += text;
    }
    else if (colour == "black") {
        paintedTile += BLACK_TEXT;
        paintedTile += text;
    }
    else if (colour == "orange") {
        paintedTile += BOLD_TEXT;
        paintedTile += ORANGE_TEXT;
        paintedTile += text;
    }
    paintedTile += RESET;
    return paintedTile;
}

