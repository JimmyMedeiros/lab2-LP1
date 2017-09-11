#include <sstream>
#include <iostream>
#include <string>
#include <vector>

#include "dado.h"
#include "player.h"

int main(int argc, char const *argv[]){
	std::string option = "--", nome;
	size_t max_points = 42;
	
	std::vector<Player> jogadores;
	std::vector<Player> jogadores_fora;

	Dado d1;
	Dado d2;
	
	/** Options **/
	while (option.at(0) != '0'){
		std::cout << "Escolha uma opção:\n";
		std::cout << "(1) Adicionar Jogador\n"
				  << "(2) Iniciar o Jogo\n"
				  << "(0) Sair\n";
		std::getline(std::cin, option);
		if (option.size() == 1)
		{
			switch(option.at(0) - '0')
			{
				case 1:
					{
						std::cout << "Digite um nome para o jogador:\n";
						std::getline(std::cin, nome);
						Player pl(nome);
						jogadores.push_back(pl);
					}
					break;
				case 2:
					{
						if (jogadores.empty())
						{
							std::cerr << "Não pode iniciar partida sem jogadores\n";
							break;
						}
						while (not jogadores_fora.empty()){
							jogadores_fora.pop_back();
						}
						while(not jogadores.empty())
						{
							for (std::vector<Player>::iterator it = jogadores.begin(); it != jogadores.end(); ++it)
							{	
								std::string resp;
								std::cout << "Jogador: " << (*it).getName() << std::endl;
								std::cout << "Pontuação: " << (*it).getPoints() << std::endl;
								std::cout << "Deseja jogar os dados? (s - sim, n - não)" << std::endl;
								std::getline(std::cin, resp);
								if (resp.size() == 1)
								{
									switch (resp.at(0))
									{
										case 's':
											(*it).roll_dice(d1,d2);
											if((*it).getPoints() > max_points) 
											{
												(*it).setOut(true);
												jogadores_fora.push_back((*it));
												jogadores.erase(it--);
											}
											else if ((*it).getPoints() == max_points){
												jogadores_fora.push_back((*it));
												jogadores.erase(it--);
											}
											break;
										case 'n':
											{
												jogadores_fora.push_back((*it));
												jogadores.erase(it--);
											}
											break;
										default:
											break;
									}
								}
							}
						}
						jogadores_fora.push_back(Player("Nenhum vencedor"));
						std::vector<Player>::iterator vencedor = jogadores_fora.end();
						for (std::vector<Player>::iterator it = jogadores_fora.begin(); it != jogadores_fora.end() - 1; ++it)
						{
							std::cout << "Jogador: " << (*it).getName() << std::endl;
							std::cout << "Pontuação: " << (*it).getPoints() << std::endl;
							std::cout << "Eliminado? " << ((*it).isOut() ? "Sim" : "Não") << std::endl;
							if ((*it).getPoints() > vencedor->getPoints() and not (*it).isOut() ) vencedor = it;
						}
						std::cout << "Vencedor : " << vencedor->getName() << std::endl;
					}
					break;
				default:
					break;
			}
		}
	}
	
	return 0;
}