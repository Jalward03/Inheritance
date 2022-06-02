#pragma once

#include "IGameObject.h"
class Blob : public IGameObject
{
public:
	Blob(Vector2 _position) : IGameObject(_position, Vector2{ 0, 0 }, nullptr)
	{
		color = GREEN;
	}

	virtual void Update(float _dt) override;
	virtual void Draw() override;
};

