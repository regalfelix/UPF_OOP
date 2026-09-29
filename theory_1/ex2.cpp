#include <string>
#include <vector>
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

class Team
{
	public:
		std::string teamName;
		std::vector<Player> players;
		
		Team(std::string teamName): teamName(teamName) {}
		void addPlayer(Player p)
		{
			players.push_back(p);
		}
		void showPlayers()
		{
			std::cout << "Team: " << teamName << "\n";
			std::cout << "Players: " << "\n";
			for (auto i : players)
			{
				std::cout << "- " << i.name << " " << "(" << i.goals << " goals)" << "\n";
			}
		}
};

int main()
{
	Team team("barcelona");
	Player messi("messi"), yamal("yamal"), pedri("pedri");

	messi.scoreGoal();
	yamal.scoreGoal();
	yamal.scoreGoal();

	team.addPlayer(messi);
	team.addPlayer(yamal);
	team.addPlayer(pedri);
	team.showPlayers();

	return 0;
}
