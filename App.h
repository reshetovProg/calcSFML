#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "Button.h"
#include "config.h"

class App
{
private:
	sf::RenderWindow window;
	std::vector <Button> keyboard;
	std::string symbols[20]{ "AC", "+/-","%","/",
							"7","8","9","X",
							"4","5","6","-",
							"1","2","3","+",
							"C","0",".","=" };

public:
	App();
	void run();
private:
	void processEvents();
	void update();
	void render();


};

