/*
	Permutation.h
	Maltseva S.A., 07.01.2023
*/

class Permutation 
{

	// size of array N and pointer to first element
	// of array
	int N, * p;

	// private method for setting array p values
	void SetValues()
       	{
		for (int i = 0; i < N; i++)
	       	{
			p[i] = i + 1;
		}
	}

	// private method for setting null values of array p
	// when all the permutations were done
	// and calling the method Print() to print null array 
	void SetNullValues()
	{
		for (int i = 0; i < N; i++)
	       	{
			p[i] = 0;
		}
		Print();	
	}

	// private method to create new permutation
	void Create();

	// private method to print new permutation
	void Print() const;

	public:
		
		// constructor: setting N, size of array,
		// values of array and print 
		Permutation (int nn = 1)
			: N(nn) 
		{
			p = new int[N];
			SetValues();
			Print();
		}

		// destructor: delete array p
		~Permutation () 
		{
			delete [] p;
		}

		// the only public method -- creating new permutation
		void Step();

};

