struct DynamicPerson {
	char* name;
	int age;
};

class DynamicSilent {
	public:
		static DynamicPerson person;
		DynamicSilent();
		virtual ~DynamicSilent();
		static void setname(char* name);
		static void setage(int age);
		void showname();
		void showage();
};
