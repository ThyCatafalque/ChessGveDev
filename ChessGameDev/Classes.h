#pragma once
#include <string>
#include <iostream>
using namespace std;
//using namespace System;

enum _Side { White, Black };
enum _GameMode { PVP, PVE };

struct _Position
{
	int Ch;
	int Num;
};

System::String^ Converting(_Position p); //override with System::String^ to convert to _Position 
_Position Converting(System::String^ s);

class Piece
{
protected: //protected:
	_Side side;
	_Position position;
public:
	Piece(){};
	Piece(_Position p, _Side s) : position(p), side(s) {}
	virtual System::String^ getType();
	System::String^ getSide();
	_Position getPosition();
	void setPosition(_Position p);
	void showPosition();
	void move(_Position p);
	//~Piece; //destructor
};

class Knight : public Piece
{
public:
	Knight() {}
	Knight(_Position p, _Side s) : Piece(p, s) {}
	System::String^ getType();
};

class Pawn : public Piece
{
public:
	Pawn() {}
	Pawn(_Position p, _Side s) : Piece(p, s) {}
	System::String^ getType();
	void evolve();
};

class Bishop : public Piece
{
public:
	Bishop() {}
	Bishop(_Position p, _Side s) : Piece(p, s) {}
	System::String^ getType();
};

class Rook : public Piece
{
public:
	Rook() {}
	Rook(_Position p, _Side s) : Piece(p, s) {}
	System::String^ getType();
	bool isCastlingAllowed(_Position p);
};

class Queen : public Piece
{
public:
	Queen() {}
	Queen(_Position p, _Side s) : Piece(p, s) {}
	System::String^ getType();
};

class King : public Piece
{
public:
	King() {}
	King(_Position p, _Side s) : Piece( p, s) {}
	System::String^ getType();
	bool isCastlingAllowed(_Position p);
	bool isChecked(/*mFkes you think*/);
	bool isCheckMated(/*makes you think*/);
};

class Game
{
protected:
	_GameMode GameMode;
	_Side turn;
	static Piece* pieces[32];
	_Position desk[8][8];
public:
	Piece* getPiece(int i);
	Piece* getPiece(_Position p);
	void CreatePiece(string type, _Position p, _Side s, int num);
	bool isEmpty(_Position p);
	Game(_GameMode gm): GameMode(gm) {};
	void kill(Piece p);
	void turnCount();
	void showAllowedTurnes(_Position p, Piece figure);
	bool GameOver();
	friend Piece;
};