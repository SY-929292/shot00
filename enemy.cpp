#include "DxLib.h"
#include "game.h"
#include "enemy.h"

#include"SceneMain.h"

namespace
{
	// X方向、Y方向の最大速度
	constexpr float kSpeedMax = 8.0f;
	constexpr float kAcc = 0.4f;
	// ショットの発射間隔
	constexpr int kShotInterval = 16;
}

Enemy::Enemy()
{
	m_handle = -1;
	m_pMain = nullptr;
	m_shotInterval = 0;
}

Enemy::~Enemy()
{
	
}

void Enemy::init()
{
	m_pos.x = Game::kScreenWidth - 80.0f;
	m_pos.y = Game::kScreenHeight - 130.0f;
	m_vec.x = 0.0f;
	m_vec.y = 0.0f;
	
}

void Enemy::update()
{
	m_pos += m_vec;
}

void Enemy::draw()
{
	// DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
	DrawTurnGraphF(m_pos.x, m_pos.y, m_handle, true);
}