#include "GameObjectManager.h"

#include "IGameObject.h"

GameObjectManager gameObjectManager;

void GameObjectManager::Update(float _dt)
{
	for (auto iter = m_gameObjects.begin(); iter != m_gameObjects.end(); iter++)
	{
		(*iter)->Update(_dt);
	}
}

void GameObjectManager::Draw()
{
	for (auto iter = m_gameObjects.begin(); iter != m_gameObjects.end(); iter++)
	{
		(*iter)->Draw();
	}
}

void GameObjectManager::AddObject(IGameObject* _object)
{
	m_gameObjects.push_back(_object);
}
