#include <iostream>
#include <queue>
#include "minion.h"

using namespace std;

/* Como tengo que crear un arreglo para cada n elementos de vida, daño y CANO,
esta función crea un arreglo y añade n numeros*/  
int* inputArray(int n){
	int *array = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++){
		cin >> array[i]; 
	}
	
	return array; 
}

bool checkPlayerHealth(int health){
	return health > 0;
}


int main(){
	int currentPlayerHealth, n;
	cin >> currentPlayerHealth;
	cin >> n;

	int* arrayLife = inputArray(n);
	int* arrayDamage = inputArray(n);
	int* arrayCANO = inputArray(n);
	int counter = 0;
	queue<minion> minionQueue;

	// Bucle para añadir esbirros a nuestra cola
	for (int i = 0; i < n; i++){
		// Añadimos cada esbirro a la queue creando una instancia con su vida, daño y si es CANO
		minionQueue.push(minion(arrayLife[i], arrayDamage[i], arrayCANO[i]));
		counter++;
		/* Si es que el esbirro es CANO, agrega 2 esbirros más a la cola
		con vida - 1 y daño - 1 con respecto al esbirro CANO*/
		if (arrayCANO[i] == 1){
			int actualDamage = 2 + (counter/5);
			if (arrayLife[i] - 2*actualDamage > 1){
				minionQueue.push(minion(arrayLife[i] - 2*actualDamage - 1, arrayDamage[i] - 1, 0));
				minionQueue.push(minion(arrayLife[i] - 2*actualDamage - 1, arrayDamage[i] - 1, 0));	
			}
			
			
			
		}	
	}

	// Empieza el bucle del juego donde los esbirros y el mechon se atacan
	int totalMinionDamage = 0;
	int playerDamage = 2;
	int minionKills = 0;
	
	while (!minionQueue.empty()){
		minion currentMinion = minionQueue.front();
		minionQueue.pop();

		// Ciclo de ataques entre esbirro y jugador
		while (currentMinion.isAlive()){
			/* Si es que en el proximo ataque, el jugador tiene más daño que la vida actual del esbirro,
			 solo suma la vida actual del esbirro como daño realizado*/
			if (currentMinion.getHealth() < playerDamage) totalMinionDamage+=currentMinion.getHealth();
			else totalMinionDamage+= playerDamage;

			// Tanto esbirro como jugador reciben daño
			currentMinion.takeDamage(playerDamage);
			currentPlayerHealth -= currentMinion.getDamage();

			// Hay que chequear si es que el jugador ha muerto antes de lograr matar a un esbirro
			if (!checkPlayerHealth(currentPlayerHealth) && !minionQueue.empty()){
				cout << "RIP mechón, " << "daño causado a esbirros: " << totalMinionDamage;
				exit(0);
			}
				
			else if (!checkPlayerHealth(currentPlayerHealth) && minionQueue.empty() && !currentMinion.isAlive()){
				cout << "EZ pizi, " << "daño causado a esbirros: " << totalMinionDamage;
				exit(0);
			}

			// Si es que el jugador no logra matar al CANO no sumamos una kill al contador de kills 
			if (currentMinion.getHealth() == -1){
				minionKills--;
			}
		
		}
		
		minionKills++;

		if (minionKills > 0 && minionKills % 5 == 0){
			playerDamage++;
		}
		
	
		if (checkPlayerHealth(currentPlayerHealth) && minionQueue.empty()){
			cout << "EZ pizi, " << "daño causado a esbirros: " << totalMinionDamage;
		}

//	cout << endl << "Minion Kills: " << minionKills << " Total Damage done <<: " << totalMinionDamage;	
			
	}	


	return 0;
}
