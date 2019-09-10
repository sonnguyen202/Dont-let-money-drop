#include "Sprite2D.h"

class Player : public Sprite2D
{
	Player(std::shared_ptr<Models>& model, std::shared_ptr<Shaders>& shader, std::shared_ptr <Texture>& texture);
	~Player();

	bool isActive();
	void setActive(bool status);
	void Update(float deltaTime) override;
	void setConllideSize(float size);
	float getConllideSize();
	void setDamge(float damge);
	float getDamge();

private:
	bool m_active;
	int m_blood;
	float  m_sizecollide;
	float m_damage;
	float m_speed;
	float m_maxspeed;
	float m_swordDown;
	float m_startSwordDown;

	float distance(Vector2 position, Vector2 destination);

};


