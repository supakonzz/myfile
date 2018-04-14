#include <SFML/Graphics.hpp>
using namespace sf;

struct point
{ int x,y;};

int main()
{
    

    RenderWindow app(VideoMode(1000, 600), " Game!");
    app.setFramerateLimit(60);

    Texture t1,t2,t3;
    t1.loadFromFile("images/a.png");
    t2.loadFromFile("images/b.png");
    t3.loadFromFile("images/c.png");

    Sprite sBackground(t1),sBackground2(t2), sPers(t3);

    point plat[20];

   

	int x=100,y=350,h=200;
    float dx=0,dy=0;
    int offsetX=0,offsetY=0;
    int offsetX2=2000,offsetY2=600;
    int n=1;
    bool check = false;

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

   
    






	if(n>=3)
	{
		if(check==false)
		{
			offsetX2=0,offsetY2=0;
    		offsetX=2000,offsetY=600;
    		check = true;
		}
		
		if (x>400) offsetX2 = x-400;
    	if (y>600) offsetY2 = y-600;
    	n++;
	}
	
    else
	{
		if (x>400) offsetX = x-400;
		if (y>600) offsetY = y-600;
    	if(offsetX==1400) 
		{
			x = 400;
			
			offsetX = 0;
			n++;	
		}
    	if(offsetY==200)
    	{
    		y = 601;
    		offsetY = 0;
		}
	}
    sBackground.setPosition(-offsetX,-offsetY);
    sBackground2.setPosition(-offsetX2,-offsetY2);
	if(n>=3)
	{
		sPers.setPosition(x-offsetX2,y-offsetY2);
	}
	else sPers.setPosition(x-offsetX,y-offsetY);
    app.draw(sBackground);
    app.draw(sBackground2);
    app.draw(sPers);
    

    app.display();
}

    return 0;
}
