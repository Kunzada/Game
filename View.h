#pragma once


#include <SFML/Graphics.hpp>

sf::View view;

void setPlayerCoordinateView(float x, float y)
{
	float row = x; float col = y;
	view.setCenter(row + 100, col);
	if (row < 320) row = 320;//������� �� ���� ����� �������
	if (col < 240) col = 240;//������� �������
	if (col > 554) col = 554;//������ �������	()

};
void viewmap(float time) {
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		view.move(0.1 * time, 0);
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		view.move(0, 0.1 * time);
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		view.move(-0.1 * time, 0);
	}
	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		view.move(0, -0.1 * time);
	}
}