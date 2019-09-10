#pragma once
#include "gamestatebase.h"
#include "GameButton.h"

class Sprite2D;
class Sprite3D;
class Text;

class Player;
class Sword;
class Coin;

class GSPlay :
	public GameStateBase
{
public:
	GSPlay();
	~GSPlay();

	void Init();
	void Exit();

	void Pause();
	void Resume();

	void HandleEvents();
	void HandleKeyEvents(int key, bool bIsPressed);

	void HandleTouchEvents(int x, int y, bool bIsPressed);
	void Update(float deltaTime);
	void Draw();

	
	void SetNewPostionForBullet();
	static int m_score;

private:

	std::shared_ptr<Sprite2D> m_BackGround;
	std::shared_ptr<Text>  m_score;
	std::shared_ptr<Player> m_Player;
	std::vector<std::shared_ptr<Sword>> m_listSword;
	std::vector<std::shared_ptr<Coin>> m_listCoin;
		

};

