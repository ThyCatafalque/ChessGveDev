#include "Classes.h"

Piece* Game::pieces[32];

System::String ^ King::getType()
{
	return "King";
}
;

System::String^ Piece::getType()
{
	return ("NonDeclared");
}

System::String ^ Piece::getSide()
{
	if (side = White)
	{
		return "W";
	}
	else
		return "B";
}

_Position Piece::getPosition()
{
	return Piece::position;
}

void Piece::setPosition(_Position p)
{
	position = p;
}

void Piece::move(_Position p)
{
	position = p;
}

Piece* Game::getPiece(int i)
{
	return pieces[i];
}

Piece * Game::getPiece(_Position p)
{
	for (int i = 0; i < 1 ; i++) //i < 32
	{
		if (pieces[0]->getPosition().Num == p.Num && pieces[0]->getPosition().Ch == p.Ch)
		{
			return pieces[0];
		}
	}
	return NULL;
}

void Game::CreatePiece(string type, _Position p, _Side s, int num)
{
	if (type == "King")
	{
		pieces[num] = new King(p, s);
	}
	if (type == "Queen")
	{
		pieces[num] = new Queen(p, s);
	}
	if (type == "Rook")
	{
		pieces[num] = new Rook(p, s);
	}
	if (type == "Knight")
	{
		pieces[num] = new Knight(p, s);
	}
	if (type == "Pawn")
	{
		pieces[num] = new Pawn(p, s);
	}
	if (type == "Bishop")
	{
		pieces[num] = new Bishop(p, s);
	}
}

bool Game::isEmpty(_Position p)
{
	//for 
	return false;
}

System::String^ Knight::getType()
{
	return "Knight";
}

System::String ^ Converting(_Position p)
{
	switch (p.Ch)
	{
		case 1: return "A" + System::Convert::ToString(p.Num); break;
		case 2: return "B" + System::Convert::ToString(p.Num); break;
		case 3: return "C" + System::Convert::ToString(p.Num); break;
		case 4: return "D" + System::Convert::ToString(p.Num); break;
		case 5: return "E" + System::Convert::ToString(p.Num); break;
		case 6: return "F" + System::Convert::ToString(p.Num); break;
		case 7: return "G" + System::Convert::ToString(p.Num); break;
		case 8: return "H" + System::Convert::ToString(p.Num); break;
	}
}

_Position Converting(System::String ^ s)
{
	switch (s[0])
	{
	case 'A': return { 1, System::Convert::ToInt32(s[1]) }; break;
	}
}

System::String ^ Pawn::getType()
{
	return "Pawn";
}

System::String ^ Bishop::getType()
{
	return "Bishop";
}

System::String ^ Rook::getType()
{
	return "Rook";
}

System::String ^ Queen::getType()
{
	return "Queen";
}
