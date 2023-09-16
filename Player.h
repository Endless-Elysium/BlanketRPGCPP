#ifndef Player_h
#define Player_h

class Player {
private:
	int _hp;
	int _vit;
	int _str;
	int _dex;
	int _mag;
	int _agi;
public:
	int GetHP();
	void SetHP(int newHP);
	int GetVIT();
	int GetSTR();
	int GetDEX();
	int GetMAG();
	int GetAGI();
	int GetSPE();
	Player(int V, int S, int D, int M, int A);
};



#endif
