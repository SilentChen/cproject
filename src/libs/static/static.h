struct StaticPerson {
	char* name;
	int age;
};

class StaticSilent {
	public:
		static StaticPerson person;
		StaticSilent();
		virtual ~StaticSilent();
		static void setname(char* name);
		static void setage(int age);
		void showname();
		void showage();
};
