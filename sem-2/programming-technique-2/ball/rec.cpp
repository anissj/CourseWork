#include <iostream>
using namespace std;

#include <graphics.h>

class Rec
{
private:
    // attributes or member variables
    // location, size, presentation
    int x, y;
    int w, h;
    int color;

    void _draw(int c) const
    {
        setcolor(c);
        setfillstyle(SOLID_FILL, c);
        bar(x, y, x + w, y + h);
    }

public:
    Rec(int _x, int _y, int _width, int _height, int _color = WHITE) : x(_x), y(_y), w(_width), h(_height), color(_color) {}

    int getX() const { return x; }

    // int left() const { return x - size; }

    // void left(int l) { x = l + size; }
    // int right() const { return x + size; }

    int getY() const { return y; }
    void setY(int value) { y = value; }
    void setColor(int value) { color = value; }

    void draw() const { _draw(color); }
    void undraw() const { _draw(BLACK); }

    // moveTo
    // moveBy
};

// Todos:
// 1. move the ball from top to bottom screen
// 2. move the ball to location where the mouse is clicked on
// 3. move the ball by arrow keys
// 4. ball bounce when touching the edge of screen

#define COUNT 3

int main()
{
    int screenWidth = getmaxwidth();
    int screenHeight = getmaxheight();

    initwindow(screenWidth, screenHeight, "Simple Animation");

    Rec f(0, screenHeight - 175 , screenWidth, 175, LIGHTMAGENTA);

    f.draw();
    getch();

    return 0;
}

//??void Game::drawRectangle() const
// {
//     int w = Random::between(50, 100);
//     int h = Random::between(50, 100);
//     int x = Random::within(0, width, w);
//     int y = Random::within(0, height, h);
//     int color = COLOR(Random::between(0, 255), Random::between(0, 255), Random::between(0, 255));
//     setcolor(color);
//     setfillstyle(SOLID_FILL, color);
//     bar(x, y, x + w, y + h);
// }