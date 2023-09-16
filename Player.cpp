#include "Player.h"
#include <iostream>




	int Player::GetHP()
	{
		return _hp;
	};

	void Player::SetHP(int newHP)
	{
		_hp = newHP;
		if (_hp > _vit * _str) {
			_hp = _vit * _str;
		}
	};

	int Player::GetVIT()
	{
		return _vit;
	};

	int Player::GetSTR()
	{
		return _str;
	};

	int Player::GetDEX()
	{
		return _dex;
	};

	int Player::GetMAG()
	{
		return _mag;
	};

	int Player::GetAGI()
	{
		return _agi;
	};

	int Player::GetSPE()
	{
		return _agi * 2;
	};

	Player::Player(int V, int S, int D, int M, int A)
	{
		SetHP(V * S);
		_vit = V;
		_str = S;
		_dex = D;
		_mag = M;
		_agi = A;
	}



