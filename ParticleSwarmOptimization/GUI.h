﻿#ifndef GUI_H
#define GUI_H

namespace sf {
	class RenderWindow;
}
class PSO;
class GUI
{
public:
	sf::RenderWindow* window;
	int x = 0, y = 1;

	void display(PSO* pso);

	GUI();
};

#endif