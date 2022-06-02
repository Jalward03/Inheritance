#pragma once

#include <list>

using std::list;

class IGameObject;

class GameObjectManager
{
public:
	void Update(float _dt);
	void Draw();
	void AddObject(IGameObject* _object);

private:
	list<IGameObject*> m_gameObjects;

};

extern GameObjectManager gameObjectManager;