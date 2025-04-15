#ifndef MINION_H
#define MINION_H

class minion{
	public:
		minion(int health, int damage, bool CANO);
		int getHealth(); 
		int getDamage();
		void takeDamage(int damage);
		bool isAlive();

	private:
		int currentHealth;
		int damage;
		bool CANO;
		int turnCount;
	
};


#endif
