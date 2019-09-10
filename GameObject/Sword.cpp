#include "Sword.h"
#include "GameManager/ResourceManagers.h"
#include "GameStates/GSPlay.h"
#include "Player.h"
#include "Application.h"


Sword::Sword(std::shared_ptr<Models>& mod, std::shared_ptr<Shaders>& shader, std::shared_ptr<Texture>& texture) : Sprite2D(mod, shader, texture)
{
	m_active = false;
	m_blood = 3;
	m_sizecollide = 15;
	m_damage = 5;
	m_speed = 200;
	m_maxspeed = 500;
	m_startSwordDown = 15;
	m_swordDown = 0;
}

Sword::~Sword() {
}

bool Sword::isActive() {
	return m_active;
}

void Sword::setActive(bool status) {
	m_active = status;
	m_blood = 3;
}


void Sword::Update(float deltaTime) {
	


}

void Sword::setDamge(float damage) {
	m_damage = damage;
}

float Sword::getDamge() {
	return m_damage;
}

void Sword::setConllideSize(float size) {
	m_sizecollide = size;
}

float Sword::getConllideSize() {
	return m_sizecollide;
}

float  Sword::distance(Vector2 position, Vector2 destination) {

	return sqrt((position.x - destination.x) * (position.x - destination.x) + (position.y - destination.y) * (position.y - destination.y));

}



