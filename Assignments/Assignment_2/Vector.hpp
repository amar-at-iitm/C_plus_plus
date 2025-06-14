
#ifndef VECTORHEADERDEF
#define VECTORHEADERDEF

class Vector{
private:
	int mSize; // size of vector
	double* mData; // data stored in vector
		
public:
	Vector(const Vector& otherVector); // copy constructor
	Vector(int size);				// one arg constructor
	~Vector();						// destructor

	int GetSize() const;
	void PrintVector()const;
	void SetVector();
	double& operator[](int i); 	// zero-based indexing
									// read-only zero-based indexing
	double Read(int i) const;
	double& operator()(int i); 	// one-based indexing
									// assignment
	Vector& operator=(const Vector& otherVector);
	Vector operator+() const; // unary +
	Vector operator-() const; // unary -
	Vector operator+(const Vector& v1) const; // binary +
	Vector operator-(const Vector& v1) const; // binary -
	// scalar multiplication
	Vector operator*(double a) const;
	// p-norm method
	double CalculateNorm(int p=2) const;
	// declare length function as a friend
	friend int length(const Vector& v);
};
#endif
