#include "DxLib.h"
#include "Shotomain.h"
#include"game.h"

namespace
{

}

ShotMain::ShotMain()
{
	m_handle = -1;
	m_pos.x = 0.0f;
	m_pos.y = 0.0f;

	m_vec.x = 0.0f;
	m_vec.y = 0.0f;

	m_isExist = false;
}

ShotMain::~ShotMain()
{

}

void ShotMain::start(Vec2 pos)
{
	m_isExist = true;
	m_pos = pos;
}


void ShotMain::update()
{
	if (!m_isExist)return;

}
// •\Ž¦
void ShotMain::draw()
{
	if (!m_isExist)return;
	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}