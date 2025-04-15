#include "minion.h"

// Constructor de Minion, setea vida y da├▒o
minion::minion(int health, int damage, bool CANO){
	this->currentHealth = health;
	this->damage = damage;
	this->CANO = CANO;
	this->turnCount = 0;
}


// Getter de la vida del esbirro
int minion::getHealth(){
	return this->currentHealth;
}

// Setter de la vida del esbirro
int minion::getDamage(){
	return this->damage;	
}

/* Funci├│n que le hace da├▒o al esbirro,
 le resta el da├▒o del jugador a la vida actual del esbirro.
Si el esbirro es un CANO y ya han pasado dos turnos, se setea la vida del CANO a 0 para dividirse 
 */
void minion::takeDamage(int damage){
	this->currentHealth -= damage;
	this->turnCount++;

	// Si al recibir da├▒o el esbirro tiene menos de cero de vida, lo seteamos a cero (Est├í muerto)
	if (this->currentHealth < 0){
		this->currentHealth = 0;
	}

	// Si el esbirro es un CANO y se va a dividir, seteamos su vida a -1 (Muere) pero se usa como flag para no aumentar el contador de kills
	if (this->CANO && turnCount == 2){
		this->currentHealth = -1;
	}  
}

// Funci├│n que chequea si al esbirro a├║n le queda vida
bool minion::isAlive(){
	return this->currentHealth > 0;
}

