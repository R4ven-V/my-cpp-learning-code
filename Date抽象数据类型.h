class Date {
	public:
		void Set(int a, int b, int c);
		int getMonth() const;
		int getYear() const;
		int getDay() const;
		void Print();

		//void Increment();
/*
* I dont have an idea writing this part today./3.17
*/
	private:
		int month;
		int day;
		int year;
};
