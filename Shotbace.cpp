#include "DxLib.h"
#include "Shotbace.h"
#include"game.h"

namespace
{
	
}

ShotBace::ShotBace()
{
	m_handle = -1;
	m_pos.x = 0.0f;
	m_pos.y = 0.0f;

	m_vec.x = 0.0f;
	m_vec.y = 0.0f;

	m_isExist = false;
}

ShotBace::~ShotBace()
{

}

void ShotBace::start(Vec2 pos)
{
	m_isExist = true;
	m_pos = pos;
}


void ShotBace::update()
{
	if (!m_isExist)return;

}
// •\Ž¦
void ShotBace::draw()
{
	if (!m_isExist)return;
	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}