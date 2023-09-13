#pragma once
class Player
{
private:
	int _hp;
	int _vit;
	int _str;
	int _dex;
	int _mag;
	int _agi;

public:
	int GetHP()
	{
		return _hp;
	}

	void SetHP(int newHP)
	{
		_hp = newHP;
		if (_hp > _vit * _str) {
			_hp = _vit * _str;
		}
	}

	int GetVIT()
	{
		return _vit;
	}

	int GetSTR()
	{
		return _str;
	}

	int GetDEX()
	{
		return _dex;
	}

	int GetMAG()
	{
		return _mag;
	}

	int GetAGI()
	{
		return _agi;
	}

	int GetSPE()
	{
		return _agi * 2;
	}

	Player(int V, int S, int D, int M, int A)
	{
		SetHP(V * S);
		_vit = V;
		_str = S;
		_dex = D;
		_mag = M;
		_agi = A;
	}
};


