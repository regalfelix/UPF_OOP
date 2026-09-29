#include <string>
#include <iostream>

class Player
{
	public:
		std::string name;
		int goals;

		Player(std::string name): name(name), goals(0) {}
		void scoreGoal()
		{
			goals++;
		}
};

int main()
{
	Player messi("messi"), yamal("yamal"), pedri("pedri");
	messi.scoreGoal();
	yamal.scoreGoal();
	yamal.scoreGoal();
	std::cout << messi.name << ": " << messi.goals << "\n";
	std::cout << yamal.name << ": " << yamal.goals << "\n";
	std::cout << pedri.name << ": " << pedri.goals << "\n";
	return 0;
}
