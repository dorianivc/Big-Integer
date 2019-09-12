// Vector.h
// Autor: Dorian Vallecillo
// Descripci�n: Genera un modelo vector dinamico de short int de 4 posiciones
//
#ifndef VECTOR
#define VECTOR
class Vector
{
private:
	 short int **vector;
	int const tamano = 4;
public:
	Vector();
	short int** getVector();
	void setVector( short int** NewArray);
	~Vector();
};

#endif // !VECTOR