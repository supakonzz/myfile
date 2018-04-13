#include <SFML/Graphics.hpp>
using namespace sf;

struct point
{ int x,y;};

int main()
{
    

    RenderWindow app(VideoMode(1000, 600), "chiken Game!");
    app.setFramerateLimit(60);

    Texture t1,t2,t3;
    t1.loadFromFile("images/a.png");
    //t2.loadFromFile("images/platform.png");
    t3.loadFromFile("images/c.png");

    Sprite sBackground(t1), sPers(t3);

    point plat[20];

   

	int x=100,y=350,h=200;
    float dx=0,dy=0;
    int offsetX=0,offsetY=0;

    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

    if (Keyboard::isKeyPressed(Keyboard::Right)) x+=2;
    if (Keyboard::isKeyPressed(Keyboard::Left)) x-=2;

   
    






	
	if (x>200) offsetX = x-200;
    if (y>600) offsetY = y-600;
    
    sBackground.setPosition(-offsetX,-offsetY);
	sPers.setPosition(x-offsetX,y-offsetY);
    app.draw(sBackground);
    app.draw(sPers);
    

    app.display();
}

    return 0;
}

